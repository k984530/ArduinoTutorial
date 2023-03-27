#define RED_LED D4
#define YELLOW_LED D3
#define GREEN_LED D2

#define LED_ON 1
#define LED_OFF 0

void setup() {
  // put your setup code here, to run once:
  pinMode(RED_LED,OUTPUT);
  pinMode(YELLOW_LED,OUTPUT);
  pinMode(GREEN_LED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  redLedOn();
  delay(1000);
  yellowLedOn();
  delay(1000);
  greenLedOn();
  delay(1000);
}

void redLedOn()
{
    digitalWrite(RED_LED,HIGH);
  digitalWrite(YELLOW_LED,LOW);
  digitalWrite(GREEN_LED,LOW); 
}

void yellowLedOn()
{
  digitalWrite(RED_LED,LOW);
  digitalWrite(YELLOW_LED,HIGH);
  digitalWrite(GREEN_LED,LOW); 
}

void greenLedOn()
{
  digitalWrite(RED_LED,LOW);
  digitalWrite(YELLOW_LED,LOW);
  digitalWrite(GREEN_LED,HIGH); 

}
