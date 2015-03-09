void loop(){
  scanInput();

  if((millis() - globalChange) > 0){
    doOperation();
    globalChange = millis();
  }
}

void scanInput(){
  for(byte i = 0; i < btnAmount; i++){
    if (digitalRead(arrBtn[i]) == LOW && (millis() - arrBtnLastChange[i]) > debounceTime){
      if(arrBtnReleased[i]){
        arrBtnState[i] = 2;
        arrBtnReleased[i] = false;
        arrBtnLastChange[i] = millis();
        arrTmr_Operation[i] = millis();
        arrTmr_2[i] = millis();
        arrTmr_1[i] = millis();
        arrBtnState2EndRun[i] = false;

      }else if(!arrBtnReleased[i] && (millis() - arrBtnLastChange[i]) > arrBtnFirstDelay[i]){
        arrBtnState[i] = 1;
        arrBtnState1EndRun[i] = false;
        arrBtnLastChange[i] = millis();
      }      
      
    }else if(digitalRead(arrBtn[i]) == HIGH && (millis() - arrBtnLastChange[i]) > debounceTime && !arrBtnReleased[i]){
      arrBtnState[i] = 0;
      arrBtnReleased[i] = true;
      arrBtnLastChange[i] = millis();
    }
  }
}

void err() {  //ERR-Testschleife
  digitalWrite(13, HIGH);
  delay(200);
  digitalWrite(13, LOW);
  delay(200);
  digitalWrite(13, HIGH);
}
