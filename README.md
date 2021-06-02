# esp32_usb_midi
ESP32 USB MIDI add-on for arduino synthesizer projects

The project can be seen in my video https://youtu.be/Mt3rT-SVZww

This project has the purpose to combine different MIDI interfaces, especially USB-MIDI
You can forward MIDI from USB to DIN for example.
Also the ADC readings can be used to generate control messages (for DIY MIDI controller)

---
The project has been tested on
- ESP32 DEVKIT - DOIT (actually only supporting esp32\1.0.4 library)

# ESP32 DEVKIT - DOIT
To compile set the board to: DOIT ESP32 DEVKIT V1
Ensure that "#define ESP32_AUDIO_KIT" has been removed from config.h

## MIDI via USB
MIDI can be received via USB activating the MACRO "MIDI_VIA_USB_ENABLED" in config.h.

Default PIN Mapping is:
- CS: IO5
- INT: IO17 (not used)
- SCK: IO18
- MISO: IO19
- MOSI: IO23

### MIDI USB Mapping
A MIDI USB mapping can be setup in z_config.ino
This allows to forward incoming messages to different outputs or an internal application running on the ESP32.

## Using an ADC multiplexer
Connection of the ADC multiplexer:
- EN -> Ground
- S0 -> IO33
- S1 -> IO32
- S2 -> IO13
- S3 -> Ground
- Sig -> IO12
Here is the related video: https://youtu.be/l8GrNxElRkc

