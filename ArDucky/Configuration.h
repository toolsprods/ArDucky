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
 * Usually pins:
 * pin 3 for button
 * pin 4 for microSD adapter
 * pin 5 to 12 for dip switch
 * pin 13 for led diode
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

#define BUTTON_EXECUTE 3 // Button pin, put 0 for no button
#define SDCARD_CS 4 // Chip-Select of the SD-Card reader
#define LED LED_BUILTIN // Led pin

// Dip-Switch pins
#define N_DIP 8 // Number of switches, put 0 for not dip-switch
#define DIP_1 12
#define DIP_2 11
#define DIP_3 10
#define DIP_4 9
#define DIP_5 8
#define DIP_6 7
#define DIP_7 6
#define DIP_8 5

#endif // CONFIGURATION_H
