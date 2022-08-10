#define ENCA 2 //Pin 2
#define ENCB 4 //Pin 4

float pos=0;

void setup(){
  Serial.begin(9600);
  pinMode(ENCA, INPUT);
  pinMode(ENCB, INPUT);
  //attachInterrupt(digtalPinToInterrupt(ENCA),readEncoder,RISING);
  attachInterrupt(digitalPinToInterrupt(ENCA),readEncoder,RISING);
}



void loop(){
 Serial.println(pos);
 
  //int a=digitalRead(ENCA);
  //int b=digitalRead(ENCB);
  //Serial.print(a*5);
  //Serial.print(" ");
  //Serial.print(b*5);
  //Serial.println();
  
}

void readEncoder(){
  float b = digitalRead(ENCB);
  if(b>0){
    pos++;
  }
  else{
    pos--;
  }
  
}