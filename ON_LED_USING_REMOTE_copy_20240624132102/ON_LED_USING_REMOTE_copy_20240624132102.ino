#include <IRremote.h>

const byte IR_RECEIVE_PIN = 11;

void setup()
{
  // pinMode(13, OUTPUT);
   Serial.begin(115200);
   Serial.println("IR Receive test");
   IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
     //  digitalWrite(13, LOW);

}

void loop()
{
   if (IrReceiver.decode())
   {
    
  //   if(IrReceiver.decodedIRData.command == '@')
  //  {
  //    digitalWrite(13, HIGH);
  //  }
  //  else
  //  {
  //  digitalWrite(13, LOW);
  //  }
     Serial.println(IrReceiver.decodedIRData.command, HEX);
      IrReceiver.resume();
   }
   
}
