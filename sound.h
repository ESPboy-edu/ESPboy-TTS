#ifndef __SOUND_H__
#define __SOUND_H__

#include<sigma_delta.h>
#define SAMPLE_RATE 20000

void soundOff(int pin);
void soundOn(int pin);
void sound(int pin, byte b);

#define PWM_TOP (1200/2)

#endif
