#include <IRremote.h>

const byte IR_RECEIVE_PIN = 11;
int a=0;
int b=0;
int c=0;
int d=0;
int e=0;
int f=0;
int g=0;
int h=0;
int o=0;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
   Serial.begin(115200);
   Serial.println("HOME AUTOMATION USING IR");
   IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
}

void loop()
{
  if(IrReceiver.decode())
    {
      IrReceiver.resume();
   if(IrReceiver.decodedIRData.command == 'E' && a==0)
        {
          digitalWrite(2, HIGH);                                                         // LOAD 1 ON
          a=1;
        }
          else if(IrReceiver.decodedIRData.command == 'E' && a==1)
        {
          digitalWrite(2, LOW);                                                            // LOAD 1 OFF
          a=0;
        }
        

          if(IrReceiver.decodedIRData.command == 'F' && b==0)
        {
          digitalWrite(3, HIGH);                                                               // LOAD 2 ON
          b=1;
        }
          else if(IrReceiver.decodedIRData.command == 'F' && b==1)
        {
          digitalWrite(3, LOW);                                                                  // LOAD 2 OFF
          b=0;
        }
        
          if(IrReceiver.decodedIRData.command == 'G' && c==0)
        {
          digitalWrite(4, HIGH);                                                                 //LOAD 3 ON
          c=1;
        }
          else if(IrReceiver.decodedIRData.command == 'G' && c==1)
        {
          digitalWrite(4,   LOW);                                                                  // LOAD 3 OFF
          c=0;
        }
        
          if(IrReceiver.decodedIRData.command == 'D' && d==0)
        {
          digitalWrite(5,HIGH );                                                                    // LOAD 4 ON
          d=1;
        }
          else if(IrReceiver.decodedIRData.command == 'D' && d==1)
        {
          digitalWrite(5, LOW);                                                                        // LOAD 4 OFF
          d=0;
        }
        if(IrReceiver.decodedIRData.command == '@' && e==0)
        {
          digitalWrite(6, HIGH);                                                                      // LOAD 5 ON
          e=1;
        }
          else if(IrReceiver.decodedIRData.command == '@' && e==1)
        {
          digitalWrite(6, LOW);                                                                           // LOAD 5 OFF
          e=0;
        }
        

          if(IrReceiver.decodedIRData.command == 'C' && f==0)
        {
          digitalWrite(7, HIGH);                                                                           // LOAD 6 ON
          f=1;
        }
          else if(IrReceiver.decodedIRData.command == 'C' && f==1)
        {
          digitalWrite(7, LOW);                                                                         // LOAD 6 OFF
          f=0;
        }
        
          if(IrReceiver.decodedIRData.command == 7 && g==0)
        {
          digitalWrite(8, HIGH);                                                                           // LOAD 7 ON
          g=1;
        }
          else if(IrReceiver.decodedIRData.command == 7 && g==1)
        {
          digitalWrite(8,   LOW);                                                                         // LOAD 7 OFF
          g=0;
        }
        
          if(IrReceiver.decodedIRData.command == '' && h==0)
        {
          digitalWrite(9,HIGH );                                                                            //  // LOAD 8 ON
          h=1;
        }
          else if(IrReceiver.decodedIRData.command == '' && h==1)
        {
          digitalWrite(9, LOW);                                                                                  // LOAD 8 OFF
          h=0;
        }

     if(IrReceiver.decodedIRData.command == 9 && o==0)
         {
            digitalWrite(2,HIGH );
          digitalWrite(3,HIGH );
          digitalWrite(4,HIGH );
          digitalWrite(5,HIGH );
          digitalWrite(6,HIGH );
          
         
          digitalWrite(9,HIGH );
          o=1;
         }
        
        else if(IrReceiver.decodedIRData.command == '' && o==1)
         {
            digitalWrite(2,LOW );
          digitalWrite(3,LOW);
          digitalWrite(4,LOW );
          digitalWrite(5,LOW );
          digitalWrite(6,LOW );
          
         
          digitalWrite(9,LOW );
          o=0;
          exit (0);
         }
        Serial.println(IrReceiver.decodedIRData.command, HEX);
        IrReceiver.resume();

 }
}

   
