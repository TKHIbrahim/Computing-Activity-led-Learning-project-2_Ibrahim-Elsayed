// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(9, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(6, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(6, LOW);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(5, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(5, LOW);
  delay(500);
}
