include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

int pot1 = A0;
int pot2 = A1;
int pot3 = A2;
int pot4 = A3;

int valPot1;
int valPot2;
int valPot3;
int valPot4;

void setup()
{

servo1.attach(3);
servo1.write(0); //define servo1 start position
servo2.attach(5);
servo2.write(90); //define servo2 start position

servo3.attach(6);
servo3.write(90); //define servo3 start position
servo4.attach(9);
servo4.write(70); //define servo4 start position
}
void loop()
{
valPot1 = analogRead(pot1);
valPot1 = map (valPot1, 0, 1023, 90, 180); //(servo value between 0 and 180)
servo1.write(valPot1);

valPot2 = analogRead(pot2);
valPot2 = map (valPot2, 0, 1023, 0, 180);
servo2.write(valPot2);

valPot3 = analogRead(pot3);
valPot3 = map (valPot3, 0, 1023, 0, 180);
servo3.write(valPot3);
valPot4 = analogRead(pot4);
valPot4 = map (valPot4, 0, 1023, 0, 180);
servo4.write(valPot4);
}
