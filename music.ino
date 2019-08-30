void setup() {
  pinMode(10, OUTPUT);
}

char notes[] = "cgeabaag egafgecdb cgeabaag egafgecdb "; //espaço é uma pausa
int beats[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
int tempo = 500;

void loop() {
  for(int i=0;i<30;i++){
    if (notes[i]=='c') {  //do
      tone(10,261,tempo*(beats[i]));
    }
    if (notes[i]=='d') { //re
      tone(10,294,tempo*(beats[i]));
    }
    if (notes[i]=='e') { //mi
      tone(10,329,tempo*(beats[i]));
    }
    if (notes[i]=='f') { //fa
      tone(10,349,tempo*(beats[i]));
    }
    if (notes[i]=='g') { //sol
      tone(10,392,tempo*(beats[i]));
    }
    if (notes[i]=='a') { //la
      tone(10,440,tempo*(beats[i]));
    }
    if (notes[i]=='b') { //si
      tone(10,493,tempo*(beats[i]));
    }
    if (notes[i]==' ') {  //do
      tone(10,0,tempo*(beats[i]));
    }
    delay(tempo*(beats[i]));
  }
}
