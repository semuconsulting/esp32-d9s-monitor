#ifndef _NEO_D9S
#define _NEO_D9S

/*
  NEO-D9S L-Band receiver example
  By: SparkFun Electronics / Paul Clark
  Date: March 7th, 2022
  License: MIT. See license file for more information but you can
  basically do whatever you want with this code.
  This example shows how to display the NEO-D9S's received signal imbalance and magnitude, plus a summary of any received PMP data.
  Feel like supporting open source hardware?
  Buy a board from SparkFun!
  ZED-F9P RTK2: https://www.sparkfun.com/products/16481
  NEO-D9S Correction Data Receiver: https://www.sparkfun.com/products/19390
  Hardware Connections:
  Use a Qwiic cable to connect the NEO-D9S L-Band corection data receiver to your board
  If you don't have a platform with a Qwiic connection use the SparkFun Qwiic Breadboard Jumper (https://www.sparkfun.com/products/14425)
  Open the serial monitor at 115200 baud to see the output
*/

#include <Arduino.h>
#include <SparkFun_u-blox_GNSS_Arduino_Library.h> //http://librarymanager/All#SparkFun_u-blox_GNSS

SFE_UBLOX_GNSS myLBand; // NEO-D9S

//const uint32_t myLBandFreq = 1556290000; // Uncomment this line to use the US SPARTN 1.8 service
const uint32_t myLBandFreq = 1545260000; // Uncomment this line to use the EU SPARTN 1.8 service

#define OK(ok) (ok ? F("  ->  OK") : F("  ->  ERROR!")) // Convert uint8_t into OK/ERROR

void printRXMPMP(UBX_RXM_PMP_data_t *pmpData);

#endif