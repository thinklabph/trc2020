
//Press button 1 of controller
void setup() {
  // put your setup code here, to run once:
Serial1.begin(115200);
pinMode(9,INPUT);
Serial1.println("Test connection");
}

void loop() {
  // put your main code here, to run repeatedly:  
  if(digitalRead(9)==0){
    Serial1.print("Button 1 is pressed");
    Serial1.println();
  }
  
  delay(200);
}
