unsigned long time;
void setup() {
  Serial.begin(9600);
  pinMode(11);
  pinMode(8);
}
int estado = 1;
int apertado = 0;
void loop() {
  apertado = digitalRead(8);
  if(estado==1 && digitalWrite(8)==HIGH){
    Serial.print("Time: ");
    time = millis();
    Serial.println(time);
    estado=2;
    digitalWrite(11,HIGH);
  }
  if(estado==2 && digitalWrite(8)==LOW) {
    if(millis() == (time+3000) || digitalWrite(8)==HIGH){
      digitalWrite(11,LOW);
    }
    estado=1;
  }
  
}
