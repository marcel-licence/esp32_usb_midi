/*
 * z_config.ino
 *
 * Put all your project configuration here (no defines etc)
 * This file will be included at the and can access all
 * declarations and type definitions
 *
 *  Created on: 12.05.2021
 *      Author: Marcel Licence
 */

/*
 * adc to midi mapping
 */
struct adc_to_midi_s adcToMidiLookUp[ADC_TO_MIDI_LOOKUP_SIZE] =
{
    {0, 0x10},
    {1, 0x10},
    {2, 0x10},
    {3, 0x10},
    {4, 0x10},
    {5, 0x10},
    {6, 0x10},
    {7, 0x10},
};

struct adc_to_midi_mapping_s adcToMidiMapping =
{
    adcToMidiLookUp,
    sizeof(adcToMidiLookUp) / sizeof(adcToMidiLookUp[0]),
    //Midi_ControlChange,
    UsbMidi_SendControlChange,
};
struct midiMapping_s midiMapping =
{
    Midi_SendRaw,
    NULL, //App_NoteOn,
    NULL, //App_NoteOff,
    NULL, //Synth_PitchBend,
    NULL, //Synth_ModulationWheel,
    NULL,
    0,
};

struct usbMidiMappingEntry_s usbMidiMappingEntries[] =
{
    {
        NULL,
        Midi_SendShortMessage,
        NULL,
        NULL,
        0x01,
    },
};

struct usbMidiMapping_s usbMidiMapping =
{
    NULL,
    NULL,
    usbMidiMappingEntries,
    sizeof(usbMidiMappingEntries) / sizeof(usbMidiMappingEntries[0]),
};
