int a = 1 ;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
while(a<100)
{
  Serial.println(a);
  if(a % 3 == 0 && a % 5 == 0)
  {
    Serial.println("FizzBuzz");
  }
  else if (a % 5 == 0)
  {
    Serial.println("Buzz");
  }
  else if(a % 3 == 0)
  {
    Serial.println("Fizz");
  }
  
  a++;
}
}

void loop(){
 

   }
