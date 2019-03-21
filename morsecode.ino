

int led1 = D6; 

int led2 = D7; 



void setup() {



    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);

}


void loop() {
    // To blink the LED, first we'll turn it on...
    //digitalWrite(led1, HIGH);
    //dots are represented by .5 second intervals
    //dashes are represented by 2 second intervals
    //there is a 2 second delay between letters
    //and a 15 second delay betwee iterations of the name
    
    
    //A
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    delay(250);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    delay(250);
    digitalWrite(led2, LOW);
    delay(2000);
    
    //D
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    delay(250);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    delay(250);
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    delay(250);
    digitalWrite(led2, LOW);
    delay(2000);
    
    //A
    digitalWrite(led2, HIGH);
    delay(500);
    digitalWrite(led2, LOW);
    delay(250);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    delay(250);
    digitalWrite(led2, LOW);
    delay(2000);
    
    //M
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    delay(250);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    delay(250);
    digitalWrite(led2, LOW);
    delay(2000);
    
    

    // Wait 5 seconds in betwee
    digitalWrite(led2, LOW);
    delay(13000);
    

    // And repeat!
}