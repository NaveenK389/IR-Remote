#include <IRremote.h>
const byte IR_RECEIVE_PIN = 11;

void setup()
{
   Serial.begin(115200);
   Serial.println("IR Receive test");
   IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
}

void loop()
{
   if (IrReceiver.decode())
   {
      Serial.println(IrReceiver.decodedIRData.command, HEX);
      IrReceiver.resume();
   }
}