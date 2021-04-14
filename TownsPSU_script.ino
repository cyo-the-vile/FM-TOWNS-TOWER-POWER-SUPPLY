String chkDiv = "off";

int pushPin = 4;    //Solder this wire to POWER ON-OFF Button on Towns

int psonPin = 3;    //Soldier this wire to PS_ON line of ATX Power Supply

int osPin = 6;      //Soldier this wire to OFF Wire on Towns Power Supply for TownsOS power off

 

void changePower(){

    if(chkDiv == "off"){

        digitalWrite(psonPin, LOW);

        chkDiv = "on";

    }else{

        digitalWrite(psonPin, HIGH);

        chkDiv = "off";

    }

}

void setup(void) {

    pinMode(pushPin, INPUT_PULLUP); //Power Switch Button

    pinMode(osPin, INPUT_PULLUP); //OS Power Button 

    pinMode(psonPin, OUTPUT); //ATX Power On off

    digitalWrite(psonPin, HIGH);

}

 

void loop(void) {

    if (digitalRead(pushPin) == LOW) {

        changePower();

        delay(500); 

    }else if (digitalRead(osPin) == LOW) {

        changePower();

        delay(500); 

}
}
