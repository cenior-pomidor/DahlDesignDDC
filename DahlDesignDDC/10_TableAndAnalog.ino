#if(USING_CB1 == 0)

//-----------------------------------------
//------------TABLE VARIABLES-------------
//-----------------------------------------

uint8_t row[] = { 0, 1, 2, 3, 4 };
const uint8_t rowCount = sizeof(row) / sizeof(row[0]);

uint8_t col[] = { 5, 6, 7, 8, 9, 10, 11, 12 };
const uint8_t colCount = sizeof(col) / sizeof(col[0]);

//---------------------------------------
//--------TABLE DESCRIPTION--------------
//---------------------------------------

uint8_t buttonNumber[rowCount][colCount] =
{
  //C1  C2  C3  C4  C5  C6  C7  C8
  { 15,  0, 14, 10, 11, 12, 13,  0 },   //ROW1 funky 1 (A, B, push, up, right, down, left) + upshift paddle
  { 22,  0, 21, 17, 18, 19, 20,  1 },   //ROW2 funky 2 (A, B, push, up, right, down, left) + downshift paddle
  { 24, 24,  0,  0, 36, 36,  0,  0 },   //ROW3 rotary 1 (C1-C4), rotary 2 (C5-C8)
  { 48, 48,  0,  0,  2,  3,  4,  5 },   //ROW4 rotary 3 (C1-C4), buttons 1-4
  {  6,  7,  8,  9,  0,  0,  0,  0 }    //ROW5 buttons 5-8
};

//---------------------------------------
//------------DIRECT INPUTS--------------
//---------------------------------------


uint8_t directPins[] = { 99 };
const uint8_t directPinsCount = sizeof(directPins) / sizeof(directPins[0]);


//---------------------------------------
//------------DIRECT OUTPUTS-------------
//---------------------------------------

#define enableOutput 0
uint8_t outputPins[] = { 99};
const uint8_t outputPinsCount = sizeof(outputPins) / sizeof(outputPins[0]);


//---------------------------------------
//--------ANALOG CHANNEL SETUP-----------
//---------------------------------------

#define analogChannelCount 4                             //Number of analog channels

uint8_t analogPins[analogChannelCount] =                 //Pin number for your analog channels
{ ADC1, ADC2, ADC3, ADC4 };                              //Oversampled A0-A3 (GP26-GP29). Clutch paddles (hall sensors): master on GP26, slave on GP27

uint8_t analogButtonNumber[analogChannelCount] =         //Button number for your analog channels
{ 0, 0, 0, 0 };

uint8_t analogButtonNumberIncMode[analogChannelCount] =  //Button number for alternate modes
{ 0, 0, 0, 0 };



#endif
