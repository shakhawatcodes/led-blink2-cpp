// LED Blink Example

int ledPin = 13; // built-in LED (Arduino UNO)

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // ON
  delay(1000);                // 1 second wait
  digitalWrite(ledPin, LOW);  // OFF
  delay(1000);                // 1 second wait
}