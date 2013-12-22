/*
 Fading
 
 This example shows how to fade an LED using the analogWrite() function.
 
 The circuit:
 * LED attached from digital pin 9 to ground.
 
 Created 1 Nov 2008
 By David A. Mellis
 modified 30 Aug 2011
 By Tom Igoe
 
 http://arduino.cc/en/Tutorial/Fading
 
 This example code is in the public domain.
 
 */


int ledPin[] = {3, 5, 6, 9};    // LED connected to digital pin 9
int timeTest[] = {500, 5000, 10000, 15000};
unsigned long time;

void setup()  { 
  // nothing happens in setup 
} 

void loop()  { 
  // fade in from min to max in increments of 5 points:
  /*for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(3, fadeValue);
    
    if(fadeValue = 255){
     counter = ++counter;
    analogWrite(5, fadeValue);
    analogWrite(6, fadeValue);
    analogWrite(9, fadeValue);
    }
    */
    long startTime = millis();
    LED = map(millis, startTime, startTime + timeTest[i], 0, 130);//Not sure where to put this 
    
    for(int i = 0; i <= 3; i++){
     while(millis() <= timeTest[i]+startTime ){
      for(int fadeValue = 0 ; fadeValue <= 130; fadeValue +=5){
        analogWrite(ledPin[i], fadeValue);
        delay(30);
       }
      }
    }
   
   for(int fadeValue = 130 ; fadeValue <= 255; fadeValue +=5){
     for(int i = 0; i <= 3; i++){
      analogWrite(ledPin[i], fadeValue);      
     }
     delay(30);
   }
    // wait for 30 milliseconds to see the dimming effect    
    //delay(30);                            
  //} 

  // fade out from max to min in increments of 5 points:
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(3, fadeValue);
    analogWrite(5, fadeValue);
    analogWrite(6, fadeValue);
    analogWrite(9, fadeValue);     
    // wait for 30 milliseconds to see the dimming effect    
    delay(30);                            
  } 
}


