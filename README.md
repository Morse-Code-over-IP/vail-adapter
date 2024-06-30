# Vail Adapter: Morse Code Key/Paddle to USB

<img src="doc/vail-adapter-v2.jpg" width="100" height="100"> 


# Features

* Lets you key even if you move focus to another window
* Works with [Vail](https://vail.woozle.org/)
* Works with [VBand](https://hamradio.solutions/vband/), but the window has to remain focused
* Optional sidetone generator, which helps with latency
* Implements all nine keyer modes from Vail, in the adapter, so you lunatics can try to key at 50WPM with no latency issues
* Plays received signals in the adapter, so you can turn off your computer speaker
* Free firmware updates for life
* Can be wired up in about 5 minutes

[Vail Adapter benefits video](https://www.youtube.com/watch?v=XQ-mwdyLkOY) (4:46)

## Supported hardware

Microcontroller  |                                      | MIDI Support | Keyboard Emulation | Sidetone | Touch Paddle
------------------------------------------------------|-|-------------|--------------------|----------|--------------
[CM-32U4](https://wiki.dfrobot.com/Beetle_CM_32U4_SKU_DFR0816) | <img src="doc/DFR0816.jpg" width="50" height="50"> | OK | OK | No | No
[Seeeduino XIAO SAMD21](https://wiki.seeedstudio.com/Seeeduino-XIAO/) | <img src="doc/seeeduino_xiao_samd21.jpg" width="50" height="50"> | OK | OK | OK | OK

 



# Setting Up

* [Easy Setup](doc/easy-install.md)
* [Advanced Setup](doc/advanced-install.md)

## PINS

```
#define DIT_PIN 2
#define DAH_PIN 1
#define KEY_PIN 0
```

## Building
+ `brew install platformio`
+ Install VS Code and PlatformIO IDE extension

# Future Work

Things I plan to add:

* [x] PCB to ease assembly and make a more robust shippable product
* [ ] Debug tone changes
* [ ] PCB v2 to get the speaker on pin 10 instead of pin 9
* [ ] Unplug detection: send a pulse out one pin and detect it on the T pin to reset straight-key detection


# Contributing
To contribute to this project please contact neale@woozle.org
https://id.arduino.cc/neale



# References 
---
Author: neale
Email: neale@woozle.org
License: MIT
---

## Similar projects

* Vail user Michele Giugliano's 
  [MorsePaddle2USB](https://github.com/mgiugliano/MorsePaddle2USB),
  which runs on a DigiSpark (attiny85). It only sends keystrokes, so you must keep the Vail
  window focused: you can't switch to other apps and still transimit.
* Ham Radio Solutions sells a 
  [USB Paddle Interface](https://hamradio.solutions/vband/)
  which appears to be very similar to Michele's project. You must keep the 
  Vail window focused.
* [CWKeyboard](https://github.com/kevintechie/CWKeyboard) looks almost 
  exactly the same as the VBand adapter.
