int aux,viral, led=10;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(led,OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  viral=analogRead(A0);
  Serial.println(viral);
  aux=map(viral,10,140,255,0);
  analogWrite(led,aux);
}
