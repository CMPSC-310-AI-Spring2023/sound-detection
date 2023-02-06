# David Gormley, Maximillian Mandel

## Planning, due on January 27th, 2023 by 9:30am

### Timeline

|  Timeline  |    Tasks    |
| ---------- | ----------- |
|  27th Jan  |   Planning  |
|   1st Feb  |   Get Parts |
|   4th Feb  | Build Board |
|   6th Feb  | Programming |
|   7th Feb  |   Finish    |

### Hardware

- Arduino board (need)

- leds of different colors (ideally 13) (at least 8) (have)

- breadboard (have)

- microphone [amazon 1](https://www.amazon.com/DAOKI-Sensitivity-Microphone-Detection-Arduino/dp/B00XT0PH10/ref=sr_1_3?crid=28V9D1JTD845K&keywords=arduino+microphone&qid=1674847782&sprefix=arduino+microhpone%2Caps%2C319&sr=8-3); [amazon 2](https://www.amazon.com/DEVMO-Microphone-Sensitivity-Detection-Arduino/dp/B07S4DTKYH/ref=sr_1_1_sspa?crid=28V9D1JTD845K&keywords=arduino+microphone&qid=1674847851&sprefix=arduino+microhpone%2Caps%2C319&sr=8-1-spons&psc=1&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEyWE9LSjk1MjdSOUVHJmVuY3J5cHRlZElkPUEwMzUzMTA4Sko0WDhSQzI0Wk0wJmVuY3J5cHRlZEFkSWQ9QTAwNzE2NjJZRUI4NlE3SkZCTkkmd2lkZ2V0TmFtZT1zcF9hdGYmYWN0aW9uPWNsaWNrUmVkaXJlY3QmZG9Ob3RMb2dDbGljaz10cnVl)

## Arduino Project

Describe the application you have chosen to develop and provide a motivation for why it is a useful application. Include  references of all sources you have used throughout this project (URLs are sufficient).

We plan to create a arduino board application which will take sound as an input (talking/music), take an approximation of the frequency being recorded and then display a color based on the closest note heard. The different led's will be set to correspond to specific note frequencies. This idea functions similarly to a tuner, although we hope to be able to distinguish the notes regardless of the octave.

## Agent

Explain the characteristics/attributes of your agent, what makes it an agent (within the discussed course content), what makes it rational, what type of an agent it is, and what is its environment task (PEAS).

It is an agent because it interacts with the outside world. this is due to its ability to record sound and display a corresponding color in response. This is rational behaviour because the output corresponds directly to the input.

PEAS:

Performance will be measured by its abiity to accurately show thew correct colors.

Environment is inteded to be recreational spaces such as homes or studios.

Agents will be the leds that display the various colors.

Sensing will be done through the microphone.

## Challenges and Learning Experiences

Discuss any challenges you have encountered during the work on this lab and  describe what have you learned.

Our first biggest challenge for this lab was learning how to build with an arduino board. Neither of us had extensive experience with arduino, so as such we needed to learn from scratch using online guides and tutorials. More specifically, we had difficuly learning how to connect multiple led circuits to the same ground, but were eventually able to find a suitable solution.

## Ethical Benefits and Implications

In this section, drawing on class discussions and readings, answer the following questions

1. What entities, businesses, organizations do you envision developing the type of the application you have chosen to develop? This type of application would largely be devloped by a company specializing in recreational objects, such as toys. However, there would also be potential in the audio industry, such as a company looking to create a visually interactive microphone or speaker.

2. Who are the intended users of this technology? This technology would like be used by those in the audio industry. This application funcions purely for aesthetics, providing little or no practical application. As such, it could easily be used by anyone for personal purposes.

3. Who is not supposed to use this technology? While I cannot think of anyone who should strictly speaking not use this technology, it would be preferable to avoid people using this technology as a replacement for instrument tuners, as it does not accomplish between notes of a different octave.

4. How can the application developed in this lab cause harm? The most damage this application could do is through incorrect use by using it as an instrument tuner. This application is not capable of causing any bodily harm.

5. What solutions could be implemented to avoid the harm or to fix the harm described above? As the application functions too differently to be used as a tuner, the user should be able to determine its usefulness lies in a different areal.

## Team Work

For our team work, we decided to split the work-load based on each of the tasks requried from the team as a whole. Both of us worked on acquiring all of the necessary materials and planning out the project as a whole. Once we had all the materials, we split the work load as follows. Max worked on building the arduino board and testing the functionality of the componants, and David worked on programming the arduino board in order to build our application with our goals in mind. Although we did split tasks at a higher level, both of us did end up having a hand in all aspects of the project such as building and programming the arduino.
