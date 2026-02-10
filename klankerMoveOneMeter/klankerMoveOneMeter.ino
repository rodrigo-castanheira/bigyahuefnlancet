const int LeftForward = 11;
const int RightForward = 5;
const int RotatorOne = 9;
const int RotatorTwo = 6;

const int LeftSpeed = 200;
const int RightSpeed = 255;

const unsigned long DriveTime = 5305; 

void setup() {
  delay(2500);

  analogWrite(LeftForward, LeftSpeed);
  analogWrite(RightForward, RightSpeed);
  pinMode(LeftForward, OUTPUT);
  pinMode(RightForward, OUTPUT);
  pinMode(RotatorOne, OUTPUT);
  pinMode(RotatorTwo, OUTPUT);
  digitalWrite(LeftForward, HIGH);
  digitalWrite(RightForward, HIGH);
  digitalWrite(RotatorOne, HIGH);
  digitalWrite(RotatorTwo, HIGH);

  delay(DriveTime);

  stopMotors();
}

void loop() {
  // Stay quiet
}

void stopMotors() {
  digitalWrite(LeftForward, LOW);
  digitalWrite(RightForward, LOW);
  digitalWrite(RotatorOne, LOW);
  digitalWrite(RotatorTwo, LOW);
}
