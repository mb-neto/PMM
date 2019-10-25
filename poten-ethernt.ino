#include <SPI.h>
#include <Ethernet.h>
byte mac[] = { 0x12, 0x31, 0x14, 0x72, 0x42, 0xFA };
char server[] = "10.6.9.65"; 
EthernetClient client;
void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(2, INPUT_PULLUP);
  Serial.println("Initialize Ethernet with DHCP:");
  Ethernet.begin(mac);
  delay(1000);
  Serial.print("connecting to ");
}
String statusBotao = "";
void loop() {
  int potenciometro = map(analogRead(A0),0,1023,0,255);
  int botao = digitalRead(2);
  int len = client.available();
  Serial.println(botao);
  Serial.println(potenciometro);
  if(botao == 0){
      statusBotao = "LEDOFF";
  }else{
      statusBotao = "LEDON"; 
    }
  if (len > 0){
    Serial.print("recebendo ");
    Serial.println(len);
    byte buffer[80];
    if (len > 80) len = 80;
    client.read(buffer, len);
    String s = String((char *)buffer);
    int v = s.toInt();
    Serial.println(v);
  }
  if (!client.connected()) {
    client.stop();
    Serial.println("disconected");
    delay(5000);
    Serial.print("connecting to ");
    Serial.print(server);
    Serial.println("...");
  }
  if (client.connect(server, 80)) {
    Serial.print("connected to ");
    Serial.println(client.remoteIP());
    // Make a HTTP request:
//    client.println("GET /?var=" + potenciometro);
    client.println("GET /?led=" + statusBotao);
    client.println("GET /?var=" + potenciometro);
    client.println("Host: 10.6.9.65");
    client.println("Connection: close");
    client.println();
  } else {
    // if you didn't get a connection to the server:
    Serial.println("connection failed");
    
  }
}
