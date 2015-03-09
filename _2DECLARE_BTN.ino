/* INFORMATIONEN
- pBtn_#                    PIN-Nummer am Board
- pBtnFirstDelay_#          negative Werte unterdrücken das Ausführen der dazugehörigen Operation
*/

// Schalter 1
const byte unsigned pBtn_1 = 38;
const int pBtnFirstDelay_1 = 2000;
const int unsigned pBtnScndDelay_1 = 500;

// Schalter 2
const byte unsigned pBtn_2 = 39;
const int pBtnFirstDelay_2 = 1000;
const int unsigned pBtnScndDelay_2 = 250;

// Schalter 3
const byte unsigned pBtn_3 = 40;
const int pBtnFirstDelay_3 = -1;
const int unsigned pBtnScndDelay_3 = 0;

// Schalter 4
const byte unsigned pBtn_4 = 41;
const int pBtnFirstDelay_4 = -1;
const int unsigned pBtnScndDelay_4 = 0;

// Schalter 5
const byte unsigned pBtn_5 = 42;
const int pBtnFirstDelay_5 = -1;
const int unsigned pBtnScndDelay_5 = 0;

// Schalter 6
const byte unsigned pBtn_6 = 43;
const int pBtnFirstDelay_6 = -1;
const int unsigned pBtnScndDelay_6 = 0;

// Schalter 7
const byte unsigned pBtn_7 = 44;
const int pBtnFirstDelay_7 = -1;
const int unsigned pBtnScndDelay_7 = 0;

// Schalter 8
const byte unsigned pBtn_8 = 45;
const int pBtnFirstDelay_8 = -1;
const int unsigned pBtnScndDelay_8 = 0;

// Schalter 9
const byte unsigned pBtn_9 = 46;
const int pBtnFirstDelay_9 = -1;
const int unsigned pBtnScndDelay_9 = 0;

// Schalter 10
const byte unsigned pBtn_10 = 47;
const int pBtnFirstDelay_10 = -1;
const int unsigned pBtnScndDelay_10 = 0;

// Schalter 11
const byte unsigned pBtn_11 = 48;
const int pBtnFirstDelay_11 = -1;
const int unsigned pBtnScndDelay_11 = 0;

// Schalter 12
const byte unsigned pBtn_12 = 49;
const int pBtnFirstDelay_12 = -1;
const int unsigned pBtnScndDelay_12 = 0;

// Schalter 13
const byte unsigned pBtn_13 = 50;
const int pBtnFirstDelay_13 = -1;
const int unsigned pBtnScndDelay_13 = 0;

// Schalter 14
const byte unsigned pBtn_14 = 51;
const int pBtnFirstDelay_14 = -1;
const int unsigned pBtnScndDelay_14 = 0;

// Schalter 15
const byte unsigned pBtn_15 = 52;
const int pBtnFirstDelay_15 = -1;
const int unsigned pBtnScndDelay_15 = 0;

// Schalter 16
const byte unsigned pBtn_16 = 53;
const int pBtnFirstDelay_16 = -1;
const int unsigned pBtnScndDelay_16 = 0;

// Arrays
const byte unsigned arrBtn[] = {pBtn_1, pBtn_2, pBtn_3, pBtn_4, pBtn_5, pBtn_6, pBtn_7, pBtn_8, pBtn_9, pBtn_10, pBtn_11, pBtn_12, pBtn_13, pBtn_14, pBtn_15, pBtn_16};
const byte unsigned btnAmount = sizeof(arrBtn);
byte unsigned arrBtnState[btnAmount] = {0};
bool arrBtnReleased[btnAmount];
bool arrBtnState2EndRun[btnAmount];
bool arrBtnState1EndRun[btnAmount];
unsigned long arrBtnLastChange[btnAmount] = {0};
unsigned long arrTmr_Operation[btnAmount] = {0};
unsigned long arrTmr_2[btnAmount] = {0};
unsigned long arrTmr_1[btnAmount] = {0};
//unsigned long aarBtnLastRoutineChange[btnAmount] = {0};
unsigned int arrBtnFirstDelay[btnAmount] = {pBtnFirstDelay_1, pBtnFirstDelay_2, pBtnFirstDelay_3, pBtnFirstDelay_4, pBtnFirstDelay_5, pBtnFirstDelay_6, pBtnFirstDelay_7, pBtnFirstDelay_8, pBtnFirstDelay_9, pBtnFirstDelay_10, pBtnFirstDelay_11, pBtnFirstDelay_12, pBtnFirstDelay_13, pBtnFirstDelay_14, pBtnFirstDelay_15, pBtnFirstDelay_16};
unsigned int arrBtnScndDelay[btnAmount] = {pBtnScndDelay_1, pBtnScndDelay_2, pBtnScndDelay_3, pBtnScndDelay_4, pBtnScndDelay_5, pBtnScndDelay_6, pBtnScndDelay_7, pBtnScndDelay_8, pBtnScndDelay_9, pBtnScndDelay_10, pBtnScndDelay_11, pBtnScndDelay_12, pBtnScndDelay_13, pBtnScndDelay_14, pBtnScndDelay_15, pBtnScndDelay_16};
