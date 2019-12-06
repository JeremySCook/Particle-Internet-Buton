#include "InternetButton.h"

/* How about we make this interactive? */

InternetButton b = InternetButton();

void setup() {
    // Tell b to get everything ready to go
    // Use b.begin(1); if you have the original SparkButton, which does not have a buzzer or a plastic enclosure
    // to use, just add a '1' between the parentheses in the code below.
    b.begin();
    // Here's another way to limit the overall brightness, so you don't have to do it for each pixel
    b.setBrightness(50);
}

void loop(){

    // When you click the second button (at the 3 o'clock position) let's turn that LED on
    if(b.buttonOn(1)){
        //b.ledOn(1, 255, 255, 255);
        b.ledOn(11, 255, 255, 255);
    }    
    else if(b.buttonOn(2)){
        b.ledOn(3, 255, 255, 255);
    }
    else if(b.buttonOn(3)){
        b.ledOn(6, 255, 255, 255);
    }
    else if(b.buttonOn(4)){
        b.ledOn(9, 255, 255, 255);
    }  

    // And if the button's not on, then the LED should be off
    else {
    for(int i = 1; i < 12; i++){
        b.ledOff(i);
    }
    }

    /* Much like the LEDs, there are also functions to check if all the buttons are on- b.allButtonsOn()
    or if all the buttons are off- b.allButtonsOff() */
}
