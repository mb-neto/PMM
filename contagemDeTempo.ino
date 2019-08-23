unsigned long timeint;
void setup() {
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(8,INPUT);
}
int estado = 1;
int apertado = 0;
void loop() {
  apertado = digitalRead(8);
  if(estado==1 && apertado){
    Serial.print("Time: ");
    timeint = millis();
    Serial.println(timeint);
    estado=2;
    digitalWrite(11,HIGH);
  }
  if(estado==2 && apertado) {
    if(millis() >= (timeint+3000)){
      digitalWrite(11,LOW);
      estado=1;
    }
  }
  if(estado==2 && !apertado) {
     estado=3;
  }
  if(estado==3 && !apertado) {
    if(millis() >= (timeint+3000)){
      digitalWrite(11,LOW);
      estado=1;
    }
  }
  if(estado==3 && apertado) {
    digitalWrite(11,LOW);
    estado = 4;
  }
  if(estado==4 && !apertado) {
    estado = 1;
  }
}
