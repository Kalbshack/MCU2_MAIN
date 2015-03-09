/*  doOperation für Volume Up
// OPERAION 2 #########################################################################################################################################
void doOperation_2(byte arrNum){
  if(!arrBtnState2EndRun[arrNum]){
    //PUT CODE HERE (Erste Ausführung)
    if((millis() - arrTmr_2[arrNum]) < 50){
      digitalWrite(pLED_2, HIGH);
    }else{
      digitalWrite(pLED_2, LOW);
      arrTmr_2[arrNum] = millis();
      arrBtnState2EndRun[arrNum] = true;
    } 
    //###  
  }
  
  if(!arrBtnState1EndRun[arrNum]){
    if((millis() - arrTmr_1[arrNum]) > arrBtnScndDelay[arrNum]){
      //PUT CODE HERE (Ausführung bei KeyPresses nach Zeit arrBtnFirstDelay in Loop nach Zeit arrBtnScndDelay)
      if((millis() - arrTmr_1[arrNum]) < arrBtnScndDelay[arrNum] + 50){
        digitalWrite(pLED_1, HIGH);
      }else{
        digitalWrite(pLED_1, LOW);
        arrTmr_1[arrNum] = millis();
      }
    }
    if(arrBtnState[arrNum] == 0){
      arrBtnState1EndRun[arrNum] = true;
      digitalWrite(pLED_1, LOW);
    }
    //###
  }

  if(arrBtnState[arrNum] == 0){
    //PUT CODE HERE (Ausführung nach KeyReleased)
    
    //###
  }
}
*/
