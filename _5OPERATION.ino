void switchRelay(byte relayName, bool value, int delayForSwitchValue){  //delayForSwitchValue (-1 = stabil, >=0 ï¿½ndern der value nach entsprechendem delay)
  digitalWrite(relayName, !value);

  if (delayForSwitchValue >= 0){
    delay(delayForSwitchValue);
    digitalWrite(relayName, value);
  }
}

void triggerDigitalLED(byte LEDName, bool value, int delayForSwitchValue){  //delayForSwitchValue (-1 = stabil, >=0 ï¿½ndern der value nach entsprechendem delay)
  digitalWrite(LEDName, value);

  if (delayForSwitchValue >= 0){
    delay(delayForSwitchValue);
    digitalWrite(LEDName, !value);
  }
}

void doOperation(){
  if(pBtnFirstDelay_1 >= 0) doOperation_1(0);
  if(pBtnFirstDelay_2 >= 0) doOperation_2(1);
  if(pBtnFirstDelay_3 >= 0) doOperation_3(2);
  if(pBtnFirstDelay_4 >= 0) doOperation_4(3);
  if(pBtnFirstDelay_5 >= 0) doOperation_5(4);
  if(pBtnFirstDelay_6 >= 0) doOperation_6(5);
  if(pBtnFirstDelay_7 >= 0) doOperation_7(6);
  if(pBtnFirstDelay_8 >= 0) doOperation_8(7);
  if(pBtnFirstDelay_9 >= 0) doOperation_9(8);
  if(pBtnFirstDelay_10 >= 0) doOperation_10(9);
  if(pBtnFirstDelay_11 >= 0) doOperation_11(10);
  if(pBtnFirstDelay_12 >= 0) doOperation_12(11);
  if(pBtnFirstDelay_13 >= 0) doOperation_13(12);
  if(pBtnFirstDelay_14 >= 0) doOperation_14(13);
  if(pBtnFirstDelay_15 >= 0) doOperation_15(14);
  if(pBtnFirstDelay_16 >= 0) doOperation_16(15);
}

// OPERAION 1 #########################################################################################################################################
void doOperation_1(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //PUT CODE HERE (Erste Ausführung)
    
    //###  
  }
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //PUT CODE HERE (Ausführung bei KeyPresses nach Zeit arrBtnFirstDelay in Loop nach Zeit arrBtnScndDelay)

      //###
    }
  }

  if(arrBtnState[arrNum] == 0){
    //PUT CODE HERE (Ausführung nach KeyReleased)
    
    //###
  }
}

// OPERAION 2 #########################################################################################################################################
void doOperation_2(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //PUT CODE HERE (Erste Ausführung)

    //###  
  }
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //PUT CODE HERE (Ausführung bei KeyPresses nach Zeit arrBtnFirstDelay in Loop nach Zeit arrBtnScndDelay)

      //###
    }
  }

  if(arrBtnState[arrNum] == 0){
    //PUT CODE HERE (Ausführung nach KeyReleased)
    
    //###
  }
}

// OPERAION 3 #########################################################################################################################################
void doOperation_3(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //PUT CODE HERE (Erste Ausführung)

    //###  
  }
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //PUT CODE HERE (Ausführung bei KeyPresses nach Zeit arrBtnFirstDelay in Loop nach Zeit arrBtnScndDelay)

      //###
    }
  }

  if(arrBtnState[arrNum] == 0){
    //PUT CODE HERE (Ausführung nach KeyReleased)
    
    //###
  }
}

// OPERAION 4 #########################################################################################################################################
void doOperation_4(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //PUT CODE HERE (Erste Ausführung)

    //###  
  }
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //PUT CODE HERE (Ausführung bei KeyPresses nach Zeit arrBtnFirstDelay in Loop nach Zeit arrBtnScndDelay)

      //###
    }
  }

  if(arrBtnState[arrNum] == 0){
    //PUT CODE HERE (Ausführung nach KeyReleased)
    
    //###
  }
}

// OPERAION 5 #########################################################################################################################################
void doOperation_5(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //PUT CODE HERE (Erste Ausführung)

    //###  
  }
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //PUT CODE HERE (Ausführung bei KeyPresses nach Zeit arrBtnFirstDelay in Loop nach Zeit arrBtnScndDelay)

      //###
    }
  }

  if(arrBtnState[arrNum] == 0){
    //PUT CODE HERE (Ausführung nach KeyReleased)
    
    //###
  }
}

// OPERAION 6 #########################################################################################################################################
void doOperation_6(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //PUT CODE HERE (Erste Ausführung)

    //###  
  }
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //PUT CODE HERE (Ausführung bei KeyPresses nach Zeit arrBtnFirstDelay in Loop nach Zeit arrBtnScndDelay)

      //###
    }
  }

  if(arrBtnState[arrNum] == 0){
    //PUT CODE HERE (Ausführung nach KeyReleased)
    
    //###
  }
}

// OPERAION 7 #########################################################################################################################################
void doOperation_7(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //PUT CODE HERE (Erste Ausführung)

    //###  
  }
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //PUT CODE HERE (Ausführung bei KeyPresses nach Zeit arrBtnFirstDelay in Loop nach Zeit arrBtnScndDelay)

      //###
    }
  }

  if(arrBtnState[arrNum] == 0){
    //PUT CODE HERE (Ausführung nach KeyReleased)
    
    //###
  }
}

// OPERAION 8 #########################################################################################################################################
void doOperation_8(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //PUT CODE HERE (Erste Ausführung)

    //###  
  }
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //PUT CODE HERE (Ausführung bei KeyPresses nach Zeit arrBtnFirstDelay in Loop nach Zeit arrBtnScndDelay)

      //###
    }
  }

  if(arrBtnState[arrNum] == 0){
    //PUT CODE HERE (Ausführung nach KeyReleased)
    
    //###
  }
}

// OPERAION 9 #########################################################################################################################################
void doOperation_9(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //PUT CODE HERE (Erste Ausführung)

    //###  
  }
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //PUT CODE HERE (Ausführung bei KeyPresses nach Zeit arrBtnFirstDelay in Loop nach Zeit arrBtnScndDelay)

      //###
    }
  }

  if(arrBtnState[arrNum] == 0){
    //PUT CODE HERE (Ausführung nach KeyReleased)
    
    //###
  }
}

// OPERAION 10 #########################################################################################################################################
void doOperation_10(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //PUT CODE HERE (Erste Ausführung)

    //###  
  }
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //PUT CODE HERE (Ausführung bei KeyPresses nach Zeit arrBtnFirstDelay in Loop nach Zeit arrBtnScndDelay)

      //###
    }
  }

  if(arrBtnState[arrNum] == 0){
    //PUT CODE HERE (Ausführung nach KeyReleased)
    
    //###
  }
}

// OPERAION 11 #########################################################################################################################################
void doOperation_11(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //PUT CODE HERE (Erste Ausführung)

    //###  
  }
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //PUT CODE HERE (Ausführung bei KeyPresses nach Zeit arrBtnFirstDelay in Loop nach Zeit arrBtnScndDelay)

      //###
    }
  }

  if(arrBtnState[arrNum] == 0){
    //PUT CODE HERE (Ausführung nach KeyReleased)
    
    //###
  }
}

// OPERAION 12 #########################################################################################################################################
void doOperation_12(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //PUT CODE HERE (Erste Ausführung)

    //###  
  }
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //PUT CODE HERE (Ausführung bei KeyPresses nach Zeit arrBtnFirstDelay in Loop nach Zeit arrBtnScndDelay)

      //###
    }
  }

  if(arrBtnState[arrNum] == 0){
    //PUT CODE HERE (Ausführung nach KeyReleased)
    
    //###
  }
}

// OPERAION 13 #########################################################################################################################################
void doOperation_13(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //PUT CODE HERE (Erste Ausführung)

    //###  
  }
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //PUT CODE HERE (Ausführung bei KeyPresses nach Zeit arrBtnFirstDelay in Loop nach Zeit arrBtnScndDelay)

      //###
    }
  }

  if(arrBtnState[arrNum] == 0){
    //PUT CODE HERE (Ausführung nach KeyReleased)
    
    //###
  }
}

// OPERAION 14 #########################################################################################################################################
void doOperation_14(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //PUT CODE HERE (Erste Ausführung)

    //###  
  }
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //PUT CODE HERE (Ausführung bei KeyPresses nach Zeit arrBtnFirstDelay in Loop nach Zeit arrBtnScndDelay)

      //###
    }
  }

  if(arrBtnState[arrNum] == 0){
    //PUT CODE HERE (Ausführung nach KeyReleased)
    
    //###
  }
}

// OPERAION 15 #########################################################################################################################################
void doOperation_15(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //PUT CODE HERE (Erste Ausführung)

    //###  
  }
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //PUT CODE HERE (Ausführung bei KeyPresses nach Zeit arrBtnFirstDelay in Loop nach Zeit arrBtnScndDelay)

      //###
    }
  }

  if(arrBtnState[arrNum] == 0){
    //PUT CODE HERE (Ausführung nach KeyReleased)
    
    //###
  }
}

// OPERAION 16 #########################################################################################################################################
void doOperation_16(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //PUT CODE HERE (Erste Ausführung)

    //###  
  }
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //PUT CODE HERE (Ausführung bei KeyPresses nach Zeit arrBtnFirstDelay in Loop nach Zeit arrBtnScndDelay)

      //###
    }
  }

  if(arrBtnState[arrNum] == 0){
    //PUT CODE HERE (Ausführung nach KeyReleased)
    
    //###
  }
}
