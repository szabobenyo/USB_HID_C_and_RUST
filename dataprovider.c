#include "dataprovider.h"

// A singleton példány
static struct dataprovider instance;

// Az adatszerkezet globális példányának elérése
struct dataprovider *getDataprovider()
{
    return &instance;
}

// Egyetlen példány létrehozása és inicializálása
void initDataprovider()
{
    instance.LDs = 0;
    instance.LED_Green_speed = 250;
    instance.LED_Blue_isActive = 0;
    instance.LED_Blue_currentState = 0;
    instance.LED_Red_isActive = 0;
    instance.LED_Red_currentState = 0;
}

int getLDs()
{
    struct dataprovider *dp = getDataprovider();
    return dp->LDs;
}

void setLDs(int value)
{
    struct dataprovider *dp = getDataprovider();
    dp->LDs = value;
}

int getLED_Green_speed()
{
    struct dataprovider *dp = getDataprovider();
    return dp->LED_Green_speed;
}

void setLED_Green_speed(int value)
{
    struct dataprovider *dp = getDataprovider();
    dp->LED_Green_speed = value;
}

int getLED_Green_isActive()
{
    struct dataprovider *dp = getDataprovider();
    return dp->LED_Green_isActive;
}

void setLED_Green_isActive(int value)
{
    struct dataprovider *dp = getDataprovider();
    dp->LED_Green_isActive = value;
}

int getLED_Green_currentState()
{
    struct dataprovider *dp = getDataprovider();
    return dp->LED_Green_currentState;
}

void setLED_Green_currentState(int value)
{
    struct dataprovider *dp = getDataprovider();
    dp->LED_Green_currentState = value;
}

int getLED_Blue_isActive()
{
    struct dataprovider *dp = getDataprovider();
    return dp->LED_Blue_isActive;
}

void setLED_Blue_isActive(int value)
{
    struct dataprovider *dp = getDataprovider();
    dp->LED_Blue_isActive = value;
}

int getLED_Blue_currentState()
{
    struct dataprovider *dp = getDataprovider();
    return dp->LED_Blue_currentState;
}

void setLED_Blue_currentState(int value)
{
    struct dataprovider *dp = getDataprovider();
    dp->LED_Blue_currentState = value;
}

int getLED_Red_isActive()
{
    struct dataprovider *dp = getDataprovider();
    return dp->LED_Red_isActive;
}

void setLED_Red_isActive(int value)
{
    struct dataprovider *dp = getDataprovider();
    dp->LED_Red_isActive = value;
}

int getLED_Red_currentState()
{
    struct dataprovider *dp = getDataprovider();
    return dp->LED_Red_currentState;
}

void setLED_Red_currentState(int value)
{
    struct dataprovider *dp = getDataprovider();
    dp->LED_Red_currentState = value;
}
