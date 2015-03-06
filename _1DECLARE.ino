void err();
void scanInput();
void startLED();
void switchRelay();
void triggerDigitalLED();
void doOperation();
void doOperation_1();
void doOperation_2();

const byte unsigned pRelayIO_1 = 22;  //IO-Relais
const byte unsigned pRelayIO_2 = 23;  //Nur digitale Pins verwenden
const byte unsigned pRelayIO_3 = 24;
const byte unsigned pRelayIO_4 = 25;
const byte unsigned pRelayIO_5 = 26;
const byte unsigned pRelayIO_6 = 27;
const byte unsigned pRelayIO_7 = 28;
const byte unsigned pRelayIO_8 = 29;
const byte unsigned pRelay230_1 = 30;  //230-Relais
const byte unsigned pRelay230_2 = 31;  //Nur digitale Pins verwenden
const byte unsigned pRelay230_3 = 32;
const byte unsigned pRelay230_4 = 33;
const byte unsigned pRelay230_5 = 34;
const byte unsigned pRelay230_6 = 35;

//36
//37

const byte unsigned pLED_1 = A0;  //16 LEDs an Analog
const byte unsigned pLED_2 = A1;
const byte unsigned pLED_3 = A2;
const byte unsigned pLED_4 = A3;
const byte unsigned pLED_5 = A4;
const byte unsigned pLED_6 = A5;
const byte unsigned pLED_7 = A6;
const byte unsigned pLED_8 = A7;
const byte unsigned pLED_9 = A8;
const byte unsigned pLED_10 = A9;
const byte unsigned pLED_11 = A10;
const byte unsigned pLED_12 = A11;
const byte unsigned pLED_13 = A12;
const byte unsigned pLED_14 = A13;
const byte unsigned pLED_15 = A14;
const byte unsigned pLED_16 = A15;

const byte unsigned pLEDStart = 10;  //StartLED am Gehï¿½use
const byte unsigned pSysLED13 =13;

unsigned long globalChange = 0;
const byte unsigned debounceTime = 10;

const byte unsigned arrRelayOutputPins[] = {pRelayIO_1, pRelayIO_2, pRelayIO_3, pRelayIO_4, pRelayIO_5, pRelayIO_6, pRelayIO_7, pRelayIO_8, pRelay230_1, pRelay230_2, pRelay230_3, pRelay230_4, pRelay230_5, pRelay230_6};
const byte unsigned arrOtherOutputPins[] = {pLED_1, pLED_2, pLED_3, pLED_4, pLED_5, pLED_6, pLED_7, pLED_8, pLED_9, pLED_10, pLED_11, pLED_12, pLED_13, pLED_14, pLED_15, pLED_16, pLEDStart, pSysLED13};

