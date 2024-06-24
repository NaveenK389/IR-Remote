#include <IRremote.h>
#define led 2  // Load1 Pin Out
#define led 3  // Load2 Pin Out
#define led 7  // Load3 Pin Out
#define HEX 16


const byte IR_RECEIVE_PIN = 11;
int led1 ;
int led2 ;
int led3 ;
void setup()
{
   Serial.begin(9600);
   pinMode(led1, HIGH);
   pinMode(led2, HIGH);
   pinMode(led3, HIGH);
    digitalWrite(led1, 0); // Turn Off Load1
 digitalWrite(led2, 0); // Turn Off Load2
 digitalWrite(led3, 0); // Turn Off Load3
   Serial.println("IR Receive test");
   IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
}

void loop()
{
    if (IrReceiver.decode())
   {
     
   if(HEX==45){ // For Load1 On  
digitalWrite(led1,HIGH);
   }
   else if(HEX ==46){ // For Load1 Off
digitalWrite(led1,LOW);   
   }
   if(HEX ==47){ // For Load2 On  
digitalWrite(led2,HIGH);
   }
   else if(HEX ==44){ // For Load2 Off
digitalWrite(led2,LOW);   
   }
   if(HEX ==43){ // For Load1 On  
digitalWrite(led3,HIGH);
   }
   else if(HEX ==7){ // For Load1 Off
digitalWrite(led3,LOW);   
   }
delay(5000);
   }
    Serial.println(IrReceiver.decodedIRData.command, HEX);
      IrReceiver.resume();
   
}
