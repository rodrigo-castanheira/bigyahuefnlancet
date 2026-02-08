const int LedRed = 8;
const int LedGreen = 2;
const int LedYellow = 12;
const int trafficButton = 4;

int trafficDelay = 1000;

void setup() {
  pinMode(LedRed, OUTPUT);
  pinMode(LedGreen, OUTPUT);
  pinMode(LedYellow, OUTPUT);
  pinMode(trafficButton, INPUT_PULLUP);

  digitalWrite(LedRed, HIGH);
}

void loop() {
  if(digitalRead(trafficButton) == LOW){
    delay(50);
    digitalWrite(LedRed, LOW);
    delay(trafficDelay);
    digitalWrite(LedGreen, HIGH);
    delay(3 * trafficDelay);
    digitalWrite(LedGreen, LOW);
    digitalWrite(LedYellow, HIGH);
    delay(trafficDelay);
    digitalWrite(LedYellow, LOW);
    digitalWrite(LedRed, HIGH);
    }
}
