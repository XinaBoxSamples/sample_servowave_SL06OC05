void main_code(void) {
  OD01.set2X();
  OD01.println("Servo Driver");
  OD01.println("and Gesture");

  OD01.set1X();
  OD01.println("");
  OD01.println("");
  OD01.println("  Wave and the servo");
  OD01.print("    will wave back");
  if ( apds.isGestureAvailable() ) {
    switch ( apds.readGesture() ) {
      case DIR_LEFT:
        for (uint16_t pulselen = SERVOMIN; pulselen < SERVOMAX; pulselen++) {
          OC05.setPWM(servonum, 0, pulselen);
        }
        break;
      case DIR_RIGHT:
        for (uint16_t pulselen = SERVOMAX; pulselen > SERVOMIN; pulselen--) {
          OC05.setPWM(servonum, 0, pulselen);
        }
        break;

        ; //Serial.println("NONE");
    }
  }
}
