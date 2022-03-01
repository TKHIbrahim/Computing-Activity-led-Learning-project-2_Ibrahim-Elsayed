int answer;
void setup() {
  // put your setup code here, to run onc
  Serial.begin(9600);
 Serial.println(sumDigits(0)); // Should be 0
 Serial.println(sumDigits(2)); // Should be 2
 Serial.println(sumDigits(28)); // Should be 10
 Serial.println(sumDigits(504)); // Should be 9
 Serial.println(sumDigits(2048)); // Should be 14
 Serial.println(sumDigits(32767)); 
}

void loop()
{
 
}
int sumDigits(int a)
{ int sum = 0, remainder;
  int t = a;
  while (t!= 0)
  {
    remainder = t% 10;
    sum = remainder + sum;
    t = t /10;
  }
  return sum;
  
}
