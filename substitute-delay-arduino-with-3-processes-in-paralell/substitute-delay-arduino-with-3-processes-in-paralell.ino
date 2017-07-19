
/*************************************************** 
 * This code greatly substitutes the delay() function of Arduino.
 * 
 * It takes advantage of the micros() function, which returns the number
 * of microseconds since the Arduino has been reset for the last time. 
 * 
 * Notice that the micros() function will overflow every 70 minutes,
 * according to this reference: http://arduino.cc/en/reference/micros ; 
 * I have not tested the effect of this reset on this code yet (as by
 * 10/10/2016).
 * 
 * Revised by Clovis Fritzen (clovisf AT gmail DOT com ) in 07/19/2017.
 * Revised by Clovis Fritzen (clovisf AT gmail DOT com ) in 10/10/2016.
 * Written by Clovis Fritzen (clovisf AT gmail DOT com ) in 10/21/2014.
 * http://www.FritzenMaker.com
 * http://www.fritzenlab.com.br
 * http://www.twitter.com/clovisf  
 * http://www.twitter.com/fritzenlab
 * http://www.twitter.com/TheFritzenMaker
 * 
 * BSD license, all text above must be included in any redistribution
 ****************************************************/

// Variables used on this code

unsigned long timet;
unsigned long tempoativo1inicio;
unsigned long tempoativo2inicio;
unsigned long tempoativo3inicio;
unsigned long tempoativo1final;
unsigned long tempoativo2final;
unsigned long tempoativo3final;
unsigned long tempototal1;
unsigned long tempototal2;
unsigned long tempototal3;

unsigned long previousTime;
unsigned long previousTime2;
unsigned long previousTime3;
boolean enterFunction = true;
boolean enterFunction2 = true;
boolean enterFunction3 = true;
//-----------------------

void setup() {
  // nothing happens in setup
  
}

void loop() {

   timet = micros();
  if (enterFunction == true){
    previousTime= timet;
    //Serial.println(previousTime); // for debugging

    // Write your first code below 
    //-----------------------
    





    //-----------------------
    // End of your first code
  }  
   

  //------------------------
  // Your second code (different timing) starts here

  if (enterFunction2 == true){
    previousTime2= timet;
    //Serial.println(previousTime2); // for debugging

    // Write your second code below 
    //-----------------------
    





    //-----------------------
    // End of your second code    
    }   


//------------------------
  // Your third code (different timing) starts here

  if (enterFunction3 == true){
    previousTime3= timet;
       
    // Write your third code below 
    //-----------------------





    
    //-----------------------
   // End of your third code
   } 
  
  
  // The DELAY time is adjusted in the constant below >> 
  if (timet - previousTime < 999990){ // 1 million microsencods= 1 second delay
    /* I have actually used 0.999990 seconds, in a trial to compensate the time that
       this IF function takes to be executed. this is really a point that
       need improvement in my code */   
    enterFunction= false;
  } 
  else {
    enterFunction= true;
  }

  if (timet - previousTime2 < 499990){ // 500,000 microsencods= 0.5 seconds delay
      enterFunction2= false;
  } 
  else {
    enterFunction2= true;
  }
  
    // The DELAY time is adjusted in the constant below >> 
  if (timet - previousTime3 < 29990){ // 30,000 microsencods= 30 milisecond delay
      enterFunction3= false;
  } 
  else {
    enterFunction3= true;
  }

  

}


