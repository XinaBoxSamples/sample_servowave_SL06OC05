#include <xCore.h> //add core library @ https://github.com/xinabox/xCore
#include <xOD01.h> //add sensor library @ https://github.com/xinabox/xOD01
#include "TIMER_CTRL.h"
#include <SparkFun_APDS9960.h> //add sparkfun library @ https://github.com/sparkfun/SparkFun_APDS-9960_Sensor_Arduino_Library
SparkFun_APDS9960 apds = SparkFun_APDS9960();
#include <xOC05.h> //add sensor library @ https://github.com/xinabox/xOC05

#ifdef ESP8266
#include <ESP8266WiFi.h>
#endif

xOC05 OC05;

#define SERVOMIN  150 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  600 // this is the 'maximum' pulse length count (out of 4096)
uint8_t servonum = 15;

unsigned long currentMilli = 0;
int ledID = 0;
bool fade_flag1 =true;
unsigned long previousMilli1 = 0;    // timing variable for LEDS
int LED_state1 = 0;
bool fade_flag2 = true;
unsigned long previousMilli2 = 0;    // timing variable for LEDS
int LED_state2 = 0;
bool fade_flag3 = true;
unsigned long previousMilli3 = 0;    // timing variable for LEDS
int LED_state3 = 0;


void setup() {
  // put your setup code here, to run once:
  setup_program();
}

void loop() {
  // put your main code here, to run repeatedly:
  main_program();
}
