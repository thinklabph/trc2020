#define encoderPinA  3  //CLK
#define encoderPinB  4  //DT
#define pushbutton 2    //SW
 
unsigned int encoderPos = 0;
 
void setup() { 
 
  pinMode(encoderPinA, INPUT); 
  pinMode(encoderPinB, INPUT);
  pinMode(pushbutton, INPUT);   
  attachInterrupt(digitalPinToInterrupt(encoderPinA), doEncoder, FALLING);
  attachInterrupt(digitalPinToInterrupt(pushbutton), doButton, FALLING); 
  Serial.begin (9600);
} 
 
void loop(){
  Serial.print("Position:");
  Serial.println (encoderPos, DEC); 
  delay(500); //a delay so that we wont get overwhelmed
}
 
void doEncoder() {
  if (digitalRead(encoderPinB)==HIGH) {
    encoderPos++; //counter-clockwise
  } else {
    encoderPos--; //clockwise
  }
}

void doButton() {
  Serial.println("button pressed"); 
  }
