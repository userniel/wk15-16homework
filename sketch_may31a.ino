#include "pitches.h"

int greenPin = 7;
int redPin = 5;
int bluePin = 6;
int counter = 0;

void setup() {
  pinMode(greenPin,OUTPUT);
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
}

void loop() {

  counter++;

  if(counter == 1){
    analogWrite(greenPin,255);
    analogWrite(redPin,0);
    analogWrite(bluePin,0);
    tone(13, NOTE_C4, 1000/8);
    int pauseBetweenNotes = 1000/8 * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  else if(counter == 2){
    analogWrite(greenPin,0);
    analogWrite(redPin,255);
    analogWrite(bluePin,0);
    tone(13, NOTE_C4, 1000/8);
    int pauseBetweenNotes = 1000/8 * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  else if(counter == 3){
    analogWrite(greenPin,0);
    analogWrite(redPin,0);
    analogWrite(bluePin,255);
    tone(13, NOTE_C4, 1000/16);
    int pauseBetweenNotes = 1000/16 * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  else if(counter == 4){
    analogWrite(greenPin,255);
    analogWrite(redPin,225);
    analogWrite(bluePin,0);
    tone(13, NOTE_C4, 1000/16);
    int pauseBetweenNotes = 1000/16 * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  else if(counter == 6){
    analogWrite(greenPin,255);
    analogWrite(redPin,0);
    analogWrite(bluePin,255);
    tone(13, NOTE_C4, 1000/8);
    int pauseBetweenNotes = 1000/8 * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
  }
  else if(counter == 7){
    analogWrite(greenPin,0);
    analogWrite(redPin,255);
    analogWrite(bluePin,255);
    tone(13, NOTE_C4, 1000/8);
    int pauseBetweenNotes = 1000/8 * 1.30;
    delay(pauseBetweenNotes);
    noTone(13);
    counter = 0;
  }
  delay(300);
}
