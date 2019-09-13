int pin = 9;
void setup() {
  pinMode(pin,OUTPUT);
  pinMode(A5,INPUT);
  pinMode(10,INPUT_PULLUP);
  Serial.begin(9600);
}
int var=0;
int aux = 0;
int aux1 = 0;
int estado = 0;
int apertado = 0;
void loop() {
  // put your main code here, to run repeatedly:
  var = analogRead(A5);
  aux = map(var,0,1023,0,255);
  apertado = digitalRead(10);
  if(aux-aux1 < 0) {
    analogWrite(pin,0);
  } else {
    analogWrite(pin,aux-aux1);
  }
  
  if(estado == 0 && apertado) {
    estado = 1;
    aux1 = aux;
  }
  if(estado == 1 && !apertado) {
    estado = 0;
    aux1 = aux;
  }
}
