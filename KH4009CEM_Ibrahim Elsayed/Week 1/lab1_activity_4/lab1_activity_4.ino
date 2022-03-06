int answer=0;
void setup() {
  // put your setup code here, to run onc
  Serial.begin(9600);
  answer = power(3, 2);
 Serial.println(answer);
 // Should be 5
 answer = power(5, 1);
 Serial.println(answer);
 // Should be 1
 answer = power(9, 0);
 Serial.println(answer);
 // Should be 16384
 answer = power(2, 14);
 Serial.println(answer);
 // Should be 0
 answer = power(0, 4);
 Serial.println(answer);
}

void loop()
{
 
}
int power(int a, int b)
{
  int result = 1;
  while (b != 0 )
  {
    result *=a;
    b--;
  }
  return result;
}
