void setup_program(void) {
  // Set the I2C Pins for CW01
#ifdef ESP8266
  Wire.pins(2, 14);
  Wire.setClockStretchLimit(15000);
  Wire.begin();
  
  // disable wifi
  WiFi.forceSleepBegin();
#else
  // Start the I2C Comunication
  Wire.begin();
#endif

  // start oled
  OLED.begin();
  apds.init();
  apds.enableGestureSensor(false);

  OC05.begin();

  OC05.setPWMFreq(60);  // Analog servos run at ~60 Hz updates

  // clear oled
  OD01.clear();

  // set output leds
  pinMode(CW01_RED, OUTPUT);
  pinMode(CW01_GREEN, OUTPUT);
  pinMode(CW01_BLUE, OUTPUT);

  // turn rgb on
  digitalWrite(CW01_RED, HIGH);
  digitalWrite(CW01_GREEN, HIGH);
  digitalWrite(CW01_BLUE, HIGH);

  delay(2000);

  // turn rgb off
  digitalWrite(CW01_RED, LOW);
  digitalWrite(CW01_GREEN, LOW);
  digitalWrite(CW01_BLUE, LOW);

  delay(1000);
  t.tick_main = millis();
  t.tick_poll = millis();
}

