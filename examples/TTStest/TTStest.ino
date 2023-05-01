/**
 * Text To Speech synthesis library
 * Copyright (c) 2008 Clive Webster.  All rights reserved.
 *
 * Nov. 29th 2009 - Modified to work with Arduino by Gabriel Petrut:
 * The Text To Speech library uses Timer1 to generate the PWM
 * output on digital pin 10. The output signal needs to be fed
 * to an RC filter then through an amplifier to the speaker.
 * http://www.tehnorama.ro/minieric-modulul-de-control-si-sinteza-vocala/
 *
 * Modified to allow use of different PWM pins by Stephen Crane.
 */
#include <TTS.h>

// Media pins
#define PWM 0 //ESPboy sound pin GPIO0
#define LED 2 //ESPboy led pin PGIO2                         

TTS text2speech(PWM);  // default is digital pin 10

void setup() { 
  Serial.begin(115200);
  pinMode(LED, OUTPUT); 
}

void loop() {
  digitalWrite(LED, !digitalRead(LED));

  text2speech.setPitch(15);
  text2speech.sayText("Hello  master! How are you doin?");
  delay(2000); 

  text2speech.setPitch(8);
  text2speech.sayText("I am fine, thankyou."); 

  delay(5000);
}  
