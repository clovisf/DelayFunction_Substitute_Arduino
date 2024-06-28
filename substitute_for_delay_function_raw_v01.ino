
/*************************************************** 
 * This code greatly substitutes the delay() function of Arduino.
 * 
 * It takes advantage of the micros() function, which returns the number
 * of microseconds since the Arduino has been reset for the last time. 
 * 
 * Notice that the micros() function will overflow every 70 minutes,
 * according to this reference: http://arduino.cc/en/reference/micros ; 
 * I have not tested the effect of this reset on this code yet (as by
 * 10/21/2014).
 * 
 * Written by Clovis Fritzen (clovisf AT gmail DOT com ) in 10/21/2014.
 * http://embedded-clovis.blogspot.ca/
 * http://www.twitter.com/clovisf  
 * 
 * BSD license, all text above must be included in any redistribution
 ****************************************************/

// Variables used on this code
unsigned long now;
unsigned long previousTime;
boolean enterFunction= true;
unsigned long period= 1000000;
//-----------------------



void setup() {
    
}

void loop() {
  now = micros();
  if (enterFunction == true){
    previousTime+= period;
    Serial.println(previousTime); // for debugging

    // Start your code below 
    //-----------------------




    //-----------------------
    // End of your code
  }
  
  // The DELAY time is adjusted in the constant below >> 
  if (now - previousTime >= period){ // 1 million microsencods= 1 second delay
    /* I have actually used 0.999990 seconds, in a trial to compensate the time that
       this IF function takes to be executed. this is really a point that
       need improvement in my code */   
    enterFunction= false;
  } 
  else {
    enterFunction= true;
  }





}

