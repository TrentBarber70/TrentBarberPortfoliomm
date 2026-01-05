const int buttonPin = 2;
const int ledPin = 13;

int buttonState = HIGH;        // current state of button
int lastButtonState = HIGH; // previous state of button  
int sum = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);  // use internal pull-up resistor
  Serial.begin(9600);
}

void loop() {

  // Read current button state
  buttonState = digitalRead(buttonPin);
  // Check if the button was just pressed (HIGH -> LOW)
  if (buttonState == LOW && lastButtonState == HIGH) {
    sum += 67;
    Serial.print("Points: ");
    Serial.println(sum);      // Print once on press
  }

  // Control LED: ON when button pressed, OFF when not
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  // Save the current state for next loop comparison
  lastButtonState = buttonState;

  // Optional small delay to prevent excessive CPU usage
  delay(20);  // 20 ms is still responsive, but smoother
}
