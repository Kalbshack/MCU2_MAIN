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
  //doOperation_1(0);
  doOperation_2(1);
}


void doOperation_2(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //Put code here
    if((millis() - arrTmr_2[arrNum]) < 50){
      digitalWrite(pLED_2, HIGH);
    }else{
      digitalWrite(pLED_2, LOW);
      arrTmr_2[arrNum] = millis();
      arrBtnState2EndRun[arrNum] = true;
    }
    
    
  }
  
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //Put code here
      if((millis() - arrTmr_1[arrNum]) < arrBtnScndDelay[arrNum] + 50){
        digitalWrite(pLED_1, HIGH);
      }else{
        digitalWrite(pLED_1, LOW);
        arrTmr_1[arrNum] = millis();
      }
      
      
    }
    
//    if((millis() - arrTmr_Operation[arrNum]) > 10000){
//       arrBtnState1EndRun[arrNum] = true;
//     }
    if(arrBtnState[arrNum] == 0){
      arrBtnState1EndRun[arrNum] = true;
      digitalWrite(pLED_1, LOW);
    }
    
    
  }
  
  
  if(arrBtnState[arrNum] == 0){
    //Put code here
    
  }

}
