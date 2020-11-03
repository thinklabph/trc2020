/*  Conditional AND Switch for LED

    Turn LED ON when both switchPin1 and switchPin2 are pushed.
    Color code your wires and LEDs.
    
    SETUP:
    Connect 2 Switch circuits to Pin 8 and 9.
    Switch Circuit: Pin > Wire > Switch > Wire > Ground
    LED Circuit: Pin 7 > LED(+) > LED(-) > Resistor > Ground

    by ThinkLab 2020
*/

int LEDPin = 7;                             // set LEDPins in the array
int switchPin1 = 8;                         // momentary switch on pin 8, other side connected to ground
int switchPin2 = 9;                         // momentary switch on pin 9, other side connected to ground

void setup() {

  pinMode (LEDPin, OUTPUT);                 // set all LEDPins as output
  digitalWrite (LEDPin, LOW);               // turn OFF all LEDs on startup
  pinMode(switchPin1, INPUT_PULLUP);        // sets the pin to use the onboard input resistor of the Bluno Mega
  pinMode(switchPin2, INPUT_PULLUP);        // sets the pin to use the onboard input resistor of the Bluno Mega
}

void loop() {
  //if (((digitalRead(switchPin1) == LOW) && (digitalRead(switchPin2) == HIGH)) ||  ((digitalRead(switchPin1) == HIGH) && (digitalRead(switchPin2) == LOW)))    // both switches are pressed
  if ((digitalRead(switchPin1) == LOW) && (digitalRead(switchPin2) == LOW)) // if switchPin is LOW, it is pressed
    digitalWrite (LEDPin, HIGH);            // turn ON LEDPin
  else
    digitalWrite (LEDPin, LOW);             // turn OFF LEDPin

}
