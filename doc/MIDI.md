# Vail MIDI Protocol

When it boots,
the Vail adapter sends left and right Control keyboard key up and down events.
It also shows up as a MIDI device.

The Vail web site sends MIDI control commands to enable MIDI keyer mode,
tells the keyer what sideband pitch to generate,
and can set the keyer mode.


## Controller 0 - MIDI Mode

`b0 00 ff` will enable MIDI mode and disable Keyboard mode
+ Example: `sendmidi dev "Arduino Leonardo" ch 1 cc 0 0`

`b0 00 00` will enable Keyboard mode and disable MIDI mode
+ Example: `sendmidi dev "Arduino Leonardo" ch 1 cc 0 127`

## Controller 1 - dit length

`b0 00 xx` will set the dit duration to `xx` times 2 milliseconds
+ Example: `sendmidi dev "Arduino Leonardo" ch 1 cc 1 20``


## Controller 2 - sidetone note

`b0 00 xx` will play note `xx` as the sidetone note


## Program Change

`c0 xx` will change the keyer mode to `xx`.

+ Example: `sendmidi dev "Arduino Leonardo" pc 7`       


### Keyer Modes

* 0: passthrough (sends C# and D for dit and dah)
* 1: cootie / straight key
* 2: bug
* 3: electric bug
* 4: single dot
* 5: ultimatic
* 6: plain iambic
* 7: iambic a
* 8: iambic b
* 9: keyahead

Any other mode will set to passthrough.


## Notes (key down / key up)

`90 00 xx` will begin playing note `xx`  
`80 00 xx` will end playing note `xx`

These work just like a regular MIDI synthesizer.


# Debugging on Mac OS

+ Ref: https://github.com/nealey/vail/blob/main/static/scripts/inputs.mjs 

## Installation

```
brew install gbevin/tools/sendmidi        
brew install gbevin/tools/receivemidi        
receivemidi dev "Arduino Leonardo"
```
