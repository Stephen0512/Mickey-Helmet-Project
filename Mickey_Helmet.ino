const int row[8] = {1,2,3,4,5,6,7,8};
const int col[8] = {9,10,11,12,13,A3,A4,A5};
int pixels [8][8];
int x = 5;
int y = 5;

void setup() {
  // put your setup code here, to run once:
  for (int thisPin = 0; thisPin < 8; thisPin++){
    pinMode(col[thisPin],OUTPUT);
    pinMode(row[thisPin],OUTPUT);
    digitalWrite(col[thisPin],HIGH);
  }
  for(int x = 0; x < 8; x++){
    for(int y = 0; y < 8; y++){
      pixels[x][y] = HIGH;
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  readSensors();
  refreshScreen();
  delay(1);
}
int random(int num);
void readSensors(){
  pixels[x][y] = HIGH;
  //x = 7-map(analogRead(A0),0,1023,0,7);
  //y = map(analogRead(A1),0,1023,0,7);

  x = random(0,8);
  y = random(0,8);
  // x=7;
  // y=7;
  pixels[x][y] = LOW;
}

void refreshScreen(){
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(col[0],HIGH);
  digitalWrite(col[1],HIGH);
  digitalWrite(col[2],HIGH);
  digitalWrite(col[3],HIGH);
  digitalWrite(col[4],HIGH);
  digitalWrite(col[5],HIGH);
  digitalWrite(col[6],HIGH);
  digitalWrite(col[7],HIGH);
  digitalWrite(row[x],HIGH);
  digitalWrite(col[y],LOW);
}
