#include <Servo.h>
Servo s;
int ang=90;
int ang2=90;
int var=0;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(10, OUTPUT);
  s.attach(10);
}

void loop() {
  
  var = analogRead(A0);
  Serial.println(var);
  var = map(var,0,40,255,0);
  ang = ang+5;
  s.write(ang);
  delay(100);
  ang2 = ang-5;
  s.write(ang2);
  delay(100);
  if(ang<ang2) {
    ang = ang2;
  } else {
    ang = ang;
  }
  
}
