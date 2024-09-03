#include<Servo.h>
#define IR_0 A0
#define IR_1 A1
#define IR_2 A2
#define IR_3 A3
#define IR_4 A4
#define IR_5 A5

#define L1 6
#define L2 7
#define L3 8
#define L4 9
#define L5 10
#define L6 11

Servo ser;
void setup()
{
  ser.attach(3);
}

void loop()
{
  if(digitalRead (IR_0==HIGH))
  {
    digitalWrite(L1, LOW);   
  }
  else
  {
    digitalWrite(L1, HIGH);  
  }


  if(digitalRead (IR_1==HIGH))
  {
    digitalWrite(L2, LOW);   
  }
  else
  {
    digitalWrite(L2, HIGH);  
  }
  
  if(digitalRead (IR_2==HIGH))
  {
    digitalWrite(L3, LOW);   
  }
  else
  {
    digitalWrite(L3, HIGH);  
  }


  if(digitalRead (IR_3==HIGH))
  {
    digitalWrite(L4, LOW);   
  }
  else
  {
    digitalWrite(L4, HIGH);  
  }


  if(digitalRead (IR_4==HIGH))
  {
    digitalWrite(L5, LOW);   
  }
  else
  {
    digitalWrite(L5, HIGH);  
  }


  if(digitalRead (IR_5==HIGH))
  {
    digitalWrite(L6, LOW);   
  }
  else
  {
    digitalWrite(L6, HIGH);  
  }

  if((digitalRead(IR_0==LOW)) || (digitalRead(IR_1==LOW)) || (digitalRead(IR_2==LOW)) ||    
          (digitalRead(IR_3==LOW)) || (digitalRead(IR_4==LOW)) || (digitalRead(IR_5==LOW)))
  {
    ser.write(90);
  }
  else
  {
    ser.write(180);
  }

}
