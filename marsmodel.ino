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
  int x1=0,x2=0,x3=0,x4=0,y1=0,y2=0,y3=0,y4=0,t1=0,t2=0,t3=0,t4=0,angle1,angle2,angle3,angle4,a,b;
  int x,y;
  if (Serial.available() > 0) {
    x=Serial.parseInt();
    y=Serial.parseInt();
    t1=atan((x-x1)/(y-y1));
    if(t1>=0){
    angle1=90+t1;
    Serial.println(angle1);
    }
    else
    angle1=abs(t1);

    t2=atan((x-x2)/(y-y2));
    if(t2>=0){
    angle2=90+t2;
    Serial.println(angle2);}
    else
    angle2=abs(t2);

    t3=atan((x-x3)/(y-y3));
    if(t3>=0){
    angle3=90+t3;
    Serial.println(angle3);
    }
    else
    angle3=abs(t3);

    t4=atan((x-x4)/(y-y4));
    if(t4>=0){
    angle4=90+t4;
    Serial.println(angle4);
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
