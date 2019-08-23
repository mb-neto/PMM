//unsigned long timeint;
void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);
//  pinMode(8, INPUT);
}
//int estado = 1;
//int apertado = 0;
void loop() {
  char vogal = Serial.read();
//  if (estado == 1 && apertado) {
//    delay(100);
//    estado = 2;
//    Serial.print("Time: ");
//    timeint = millis();
//    Serial.println(timeint);
//    digitalWrite(11, HIGH);
//  }
//  if (estado == 2 && !apertado) {
//    if (millis() >= (timeint + 3000)) {
//      digitalWrite(11, LOW);
//      estado = 1;
//    }
//  }
//  if (estado == 2 && apertado) {
//    delay(100);
//    estado = 3;
//  }
//  if (estado == 3) {
//    delay(100);
//    if (millis() >= (timeint + 1000)) {
//      digitalWrite(11, LOW);
//      estado = 1;
//    }
//  }
  if(vogal == 'A' || vogal == 'a') {
    digitalWrite(11, HIGH);
    delay(100);
    digitalWrite(11,LOW);
    delay(100);
    digitalWrite(11, HIGH);
    delay(300);
    digitalWrite(11,LOW);
    delay(500);
  }
  if(vogal == 'E' || vogal == 'e') {
    digitalWrite(11, HIGH);
    delay(100);
    digitalWrite(11,LOW);
    delay(500);
  }
  if(vogal == 'I' || vogal == 'i') {
    digitalWrite(11, HIGH);
    delay(100);
    digitalWrite(11,LOW);
    delay(100);
    digitalWrite(11, HIGH);
    delay(100);
    digitalWrite(11,LOW);
    delay(500);
  }
  if(vogal == 'O' || vogal == 'o') {
    digitalWrite(11, HIGH);
    delay(300);
    digitalWrite(11,LOW);
    delay(100);
    digitalWrite(11, HIGH);
    delay(300);
    digitalWrite(11,LOW);
    delay(100);
    digitalWrite(11, HIGH);
    delay(300);
    digitalWrite(11,LOW);
    delay(500);
  }
  if(vogal == 'U' || vogal == 'u') {
    digitalWrite(11, HIGH);
    delay(100);
    digitalWrite(11,LOW);
    delay(100);
    digitalWrite(11, HIGH);
    delay(100);
    digitalWrite(11,LOW);
    delay(100);
    digitalWrite(11, HIGH);
    delay(300);
    digitalWrite(11,LOW);
    delay(500);
  }
}
