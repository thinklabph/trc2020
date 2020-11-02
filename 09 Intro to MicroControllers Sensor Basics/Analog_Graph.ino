float voltage;
int adc;

void setup()
{
    Serial.begin(9600);
}
 
void loop()
{
    adc =  analogRead(0);
    voltage = adc * (5.0/1023.0);
    Serial.println(voltage);
    delay(200);
}
