// C++ code
//
int BARON1 = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  BARON1 = 400;
  digitalWrite(13, HIGH);
  delay(BARON1); // Wait for BARON1 millisecond(s)
  digitalWrite(13, LOW);
  delay(BARON1); // Wait for BARON1 millisecond(s)
  digitalWrite(12, HIGH);
  delay(BARON1); // Wait for BARON1 millisecond(s)
  digitalWrite(12, LOW);
  delay(BARON1); // Wait for BARON1 millisecond(s)
  digitalWrite(11, HIGH);
  delay(BARON1); // Wait for BARON1 millisecond(s)
  digitalWrite(11, LOW);
}