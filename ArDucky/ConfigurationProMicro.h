/*
 * =========================================================
 *   Copyright (c) 2018 toolsprods, (Licensed under MIT)
 *  For more information see: github.com/toolsprods/arducky
 * =========================================================
 *
 * Configuration.h
 *
 * Define pins, name files and keyboard layout
 *
 * Pins for ProMicro:
 * pin A0 for button
 * pin 10 for microSD adapter
 * pin 2 to 9 for dip switch
 * pin A1 for led diode
 *
 * Available layouts:
 * en_US
 * en_UK
 * de_DE
 * fr_FR
 * be_BE
 * es_ES
 * fi_FI
 * cs_CZ_QWERTZ
 * cs_CZ_QWERTY
 * da_DK
 * pt_BR
 * pt_PT
 * tr_TR
 * it_IT
 * sv_SE
 * sample - with this you can create your own layout
 *
 */

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#define en_US // Define layout

#define DEBUG true // Enable debug
#define LOG true // Enable log file

#define SCRIPT_NAME "script" // Script filename if not dip-switch available. DON'T put the extension (.txt)
#define LOG_NAME "arducky.log" // Log filename

const int BUTTON_EXECUTE = A0; // Button pin, put 0 for no button
#define SDCARD_CS 10 // Chip-Select of the SD-Card reader
const int LED = A1; // Led pin

// Dip-Switch pins
#define N_DIP 8 // Number of switches, put 0 for not dip-switch
#define DIP_1 2
#define DIP_2 3
#define DIP_3 4
#define DIP_4 5
#define DIP_5 6
#define DIP_6 7
#define DIP_7 8
#define DIP_8 9

#endif // CONFIGURATION_H
