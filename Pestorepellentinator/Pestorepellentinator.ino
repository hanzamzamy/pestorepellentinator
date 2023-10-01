#include "DAC32.h"

DAC32 dac1(DAC_CHANNEL_1), dac2(DAC_CHANNEL_2);
uint32_t freq = 40000;  //40kHz

void setup(){
  dac1.outputCW(freq);
  dac2.outputCW(freq);
}

void loop(){}