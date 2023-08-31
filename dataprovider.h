#ifndef DATAPROVIDER_H
#define DATAPROVIDER_H

#include "Middlewares/ST/STM32_USB_Device_Library/Core/Inc/usbd_def.h"

struct dataprovider
{
  int LDs;
  int LED_Green_speed;
  int LED_Green_isActive;
  int LED_Green_currentState;
  int LED_Blue_isActive;
  int LED_Blue_currentState;
  int LED_Red_isActive;
  int LED_Red_currentState;

  USBD_HandleTypeDef hUsbDeviceFS;
};

// Az adatszerkezet globális példányának elérése
struct dataprovider *getDataprovider();

// Egyetlen példány létrehozása és inicializálása
void initDataprovider();

int getLDs();
void setLDs(int value);

int getLED_Green_speed();
void setLED_Green_speed(int value);

int getLED_Green_isActive();
void setLED_Green_isActive(int value);

int getLED_Green_currentState();
void setLED_Green_currentState(int value);

int getLED_Blue_isActive();
void setLED_Blue_isActive(int value);

int getLED_Blue_currentState();
void setLED_Blue_currentState(int value);

int getLED_Red_isActive();
void setLED_Red_isActive(int value);

int getLED_Red_currentState();
void setLED_Red_currentState(int value);

#endif
