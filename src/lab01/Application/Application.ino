/*
Maximillian Mandel
David Gormley
*/

#define CPin 7
#define DPin 8
#define EPin 9
#define FPin 10
#define GPin 11
#define APin 12
#define BPin 13

#include <Arduino.h>

#include <FrequencyDetector.h>

// Turns off all LEDs
void disableLEDs() {
  digitalWrite(CPin, LOW);
  digitalWrite(DPin, LOW);
  digitalWrite(EPin, LOW);
  digitalWrite(FPin, LOW);
  digitalWrite(GPin, LOW);
  digitalWrite(APin, LOW);
  digitalWrite(BPin, LOW);
}

void setup() {
  // Enable LEDs
  pinMode(CPin, OUTPUT);
  pinMode(DPin, OUTPUT);
  pinMode(EPin, OUTPUT);
  pinMode(FPin, OUTPUT);
  pinMode(GPin, OUTPUT);
  pinMode(APin, OUTPUT);
  pinMode(BPin, OUTPUT);

  // Serial for debugging
  Serial.begin(9600);

  // Set frequency meter settings
  setFrequencyDetectorControlDefaults();
  setFrequencyDetectorReadingValues(ADC_CHANNEL_DEFAULT, INTERNAL, PRESCALE_VALUE_DEFAULT, RAW_VOLTAGE_MIN_DELTA_DEFAULT);

  // set the frequency range
  setFrequencyDetectorMatchValues(1400, 1700);
}

void loop() {
  // Initialzie maximum variable and frequency
  uint16_t mx = 0;
  uint16_t frequency = 0;

  // Take 3 samples and determine the max frequency
  // This is for accuracy and to reduce jitter
  for (int i = 0; i < 3; i++) {
    frequency = readSignal();
    frequency = doEqualDistributionPlausi();
    computeDirectAndFilteredMatch(frequency);

    if (frequency > mx) {
      mx = frequency;
    }
  }

  // Take the maximum
  frequency = mx;

  // Turn off all LEDs
  disableLEDs();
  // Determine what LED to turn on
  if ((frequency >= 508 && frequency <= 554) || (frequency >= 1010 && frequency <= 1108) || (frequency >= 2030 && frequency <= 2217)) {
    digitalWrite(CPin, HIGH);
  } else if ((frequency >= 554 && frequency <= 622) || (frequency >= 1108 && frequency <= 1244)) {
    digitalWrite(DPin, HIGH);
  } else if ((frequency >= 622 && frequency <= 675) || (frequency >= 1244 && frequency <= 1350)) {
    digitalWrite(EPin, HIGH);
  } else if ((frequency >= 675 && frequency <= 740) || (frequency >= 1350 && frequency <= 1480)) {
    digitalWrite(FPin, HIGH);
  } else if ((frequency >= 740 && frequency <= 830) || (frequency >= 1480 && frequency <= 1661)) {
    digitalWrite(GPin, HIGH);
  } else if ((frequency >= 830 && frequency <= 932) || (frequency >= 1661 && frequency <= 1864)) {
    digitalWrite(APin, HIGH);
  } else if ((frequency >= 932 && frequency <= 1010) || (frequency >= 1864 && frequency <= 2030)) {
    digitalWrite(BPin, HIGH);
  }

  // If we turned on an LED then print to console and delay the next loop
  if (frequency >= 508 && frequency <= 2030) {
    Serial.print(frequency);
    Serial.println(" Hz");
    delay(200);
  }
}

