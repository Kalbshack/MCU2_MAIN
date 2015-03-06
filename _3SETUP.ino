void setup() {
 
  //arrBtnReleased[1] = true;
  Serial.begin(115200);
  Serial.println(arrBtnReleased[1]);
 
 for(byte i=0; i<btnAmount; i++){
    arrBtnReleased[i] = true;
    arrBtnState2EndRun[i] = true;
    arrBtnState1EndRun[i] = true;
  }

//  for (int i = 0; i <= sizeof(arrBtnReleased); i++){  //InputPins aktivieren
//    arrBtnReleased[i] = true;
//  }  

  for (int i = 0; i <= sizeof(arrBtn); i++){  //InputPins aktivieren
    pinMode(arrBtn[i], INPUT);
    digitalWrite(arrBtn[i], HIGH);  //PullUp schalten
  }  

  for (int i = 0; i <= sizeof(arrRelayOutputPins); i++){  //RelaisPins aktivieren und HIGH schalten, da die Relais gegen Masse schalten
    pinMode(arrRelayOutputPins[i], OUTPUT);
    digitalWrite(arrRelayOutputPins[i], HIGH);
  }

  for (int i = 0; i <= sizeof(arrOtherOutputPins); i++){  //OutputPins aktivieren, Ausnahme: RelaisPins
    pinMode(arrOtherOutputPins[i], OUTPUT);
    digitalWrite(arrOtherOutputPins[i], LOW);
  }

  startLED();
}

void startLED() {  //Programm der Start-LED
  triggerDigitalLED(pLEDStart, true, 20);
  delay(500);
  triggerDigitalLED(pLEDStart, true, 20);
}

