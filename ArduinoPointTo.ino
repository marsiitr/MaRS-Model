# include <Servo.h>
Servo servo1,servo2,servo3,servo4;
int servoPin1=8;
int servoPin2=9;
int servoPin3=10;
int servoPin4=11;
int servoPosition=90;
int incomingByte=0;
void setup() {
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);
  analogReference(DEFAULT);
  Serial.begin(9600);
  servo1.write(servoPosition);
  servo2.write(servoPosition);
  servo3.write(servoPosition);
  servo4.write(servoPosition);
}

void loop() {
  int x,y,x1,x2,x3,x4,y1,y2,y3,y4,t1,t2,t3,t4,angle1,angle2,angle3,angle4;
  if (Serial.available() > 0) {
    x = Serial.read();
    y = Serial.read();
    t1=atan((x-x1)/(y-y1));
    if(t1>=0){
    angle1=90+t1;
    }
    else
    angle1=abs(t1);

    t2=atan((x-x2)/(y-y2));
    if(t2>=0){
    angle2=90+t2;
    }
    else
    angle2=abs(t2);

    t3=atan((x-x3)/(y-y3));
    if(t3>=0){
    angle3=90+t3;
    }
    else
    angle3=abs(t3);

    t4=atan((x-x4)/(y-y4));
    if(t4>=0){
    angle4=90+t4;
    }
    else
    angle4=abs(t4);

    
    servo1.write(angle1);
    servo2.write(angle2);
    servo3.write(angle3);
    servo4.write(angle4);
  } 
  else{
    for(int i=0;i<=180;i+10){
      servo1.write(i);
      servo2.write(i);
      servo3.write(i);
      servo4.write(i);
      }
    }
}
