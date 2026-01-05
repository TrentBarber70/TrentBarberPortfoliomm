const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int ledPin1 = 13;
const int ledPin2 = 12;
const int ledPin3 = 11;

int buttonState1 = HIGH;
int buttonState2 = HIGH; 
int buttonState3 = HIGH;         // current state of button
int lastButtonState1 = HIGH;
int lastButtonState2 = HIGH; 
int lastButtonState3 = HIGH;  // previous state of button  
int sum = 0;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);  // use internal pull-up resistor
  Serial.begin(9600);
}

void loop() {

  // Read current button state
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  // Check if the button was just pressed (HIGH -> LOW)
  if (buttonState1 == LOW && lastButtonState1 == HIGH) {
    sum += 1000;
    Serial.print("Points: ");
    Serial.println(sum);      // Print once on press
  }
  if (buttonState2 == LOW && lastButtonState2 == HIGH) {
    sum += 10000;
    Serial.print("Points: ");
    Serial.println(sum);      // Print once on press
  }
  if (buttonState3 == LOW && lastButtonState3 == HIGH) {
    sum += 2000;
    Serial.print("Points: ");
    Serial.println(sum);      // Print once on press
  }

  // Control LED: ON when button pressed, OFF when not
  if (buttonState1 == LOW) {
    digitalWrite(ledPin1, HIGH);
  } else {
    digitalWrite(ledPin1, LOW);
  }
   if (buttonState2 == LOW) {
    digitalWrite(ledPin2, HIGH);
  } else {
    digitalWrite(ledPin2, LOW);
  }
   if (buttonState3 == LOW) {
    digitalWrite(ledPin3, HIGH);
  } else {
    digitalWrite(ledPin3, LOW);
  }

  // Save the current state for next loop comparison
  lastButtonState1 = buttonState1;
  lastButtonState2 = buttonState2;
  lastButtonState3 = buttonState3;

  // Optional small delay to prevent excessive CPU usage
  delay(20);  // 20 ms is still responsive, but smoother
}
