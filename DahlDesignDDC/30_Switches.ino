  //--------------------------------------
  //---------SWITCHES START HERE----------
  //--------------------------------------

  //Funky switch 1: directions first, then center push, then encoder
  funkyButton(1, 4, 3, 5, 6, 7);
  funkyButton(1, 5, 3, 4, 6, 7);
  funkyButton(1, 6, 3, 4, 5, 7);
  funkyButton(1, 7, 3, 4, 5, 6);
  funkyPush(1, 3, 4, 5, 6, 7);
  funkyRotary(1, 1, 2, false);

  //Funky switch 2: encoder also adjusts bite point while biteButton is held
  funkyButton(2, 4, 3, 5, 6, 7);
  funkyButton(2, 5, 3, 4, 6, 7);
  funkyButton(2, 6, 3, 4, 5, 7);
  funkyButton(2, 7, 3, 4, 5, 6);
  funkyPush(2, 3, 4, 5, 6, 7);
  funkyBite(2, 1, 2, false);

  //Shifter paddles
  pushButton(1, 8);
  pushButton(2, 8);

  //Rotary switches with 4-bit diode maze boards: 12 positions, hold modButton + turn for incremental mode
  rotarySwitch4Bit(3, 1, false);
  rotarySwitch4Bit(3, 5, false);
  rotarySwitch4Bit(4, 1, false);

  //Buttons
  modButton(4, 5);
  biteButton(4, 6);
  clutchCalibrate(4, 7);
  pushButton(4, 8);
  pushButton(5, 1);
  pushButton(5, 2);
  pushButton(5, 3);
  pushButton(5, 4);

  //Clutch paddles, calibration stored in flash
  dualClutchCal(1, 2, true);

  //--------------------------------------
  //---------SWITCHES END HERE------------
  //--------------------------------------

	Joystick.setZAxis(rotaryField - 32767);
	Joystick.setYAxis(buttonField - 32767);

	Joystick.sendState();

} //LOOP ENDS HERE

#if (BOARDTYPE == 2)
  void loop()
  {
	#if (LED1COUNT + LED2COUNT + LED3COUNT + LED4COUNT > 0)
		processCommands();
	#endif
  #if(USING_CB1 == 1 || ENABLE_OVERSAMPLING == 1)
    CB1Oversampling();
  #endif
  }
#endif
