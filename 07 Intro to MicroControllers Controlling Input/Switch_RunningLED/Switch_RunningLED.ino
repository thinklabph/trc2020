/*  Switch for LED Array

    Turn ON LEDArray when switch is pushed.
    LEDs will turn on and off with this sequence Pin 7, 6, 5, 4, 3 continuously.
    Color code your wires and LEDs.

    SETUP:
    Connect 5 LED circuits to Pin 3, 4, 5, 6, 7.
    LED Circuit: Pin > Wire > LED(+) > LED(-) > Resistor > Ground
    Switch Circuit:   Pin 9 > Wire > Switch > Wire > Ground

    by ThinkLab 2020
*/

int timer = 100;                            // set timer variable as delay
int LEDPin[] = {7, 6, 5, 4, 3};             // set LEDPins in the array
int switchPin = 9;                          // momentary switch on pin 12, other side connected to ground

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode (LEDPin[i], OUTPUT);          // set all LEDPins as output
    digitalWrite (LEDPin[i], LOW);        // turn OFF all LEDs on startup
  }
  pinMode(switchPin, INPUT_PULLUP);         // sets the pin to use the onboard input resistor of the Bluno Mega
  digitalWrite(switchPin, HIGH);            // turn on pullup resistor
}

void loop() {
  if (digitalRead(switchPin) == LOW) {       // switch is pressed - pullup keeps pin high normally
    for (int i = 0; i < 5; i++) {
      delay(timer);
      digitalWrite (LEDPin[i], HIGH);       // turn ON LEDPin
      delay(timer);                         // wait for timer milliseconds
      digitalWrite (LEDPin[i], LOW);        // turn OFF LEDPin
    }
  }
  else {
    for (int i = 0; i < 5; i++) {
      digitalWrite (LEDPin[i], LOW);        // turn OFF LEDPin
    }
  }
}
