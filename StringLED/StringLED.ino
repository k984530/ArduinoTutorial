#define RED_LED D4
#define YELLOW_LED D3
#define GREEN_LED D2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    String StrData = Serial.readStringUntil('\n');
    if(StrData.indexOf("RED_ON") != -1) digitalWrite(RED_LED,HIGH);
    else if(StrData.indexOf("YELLOW_ON") != -1) digitalWrite(YELLOW_LED,HIGH);
    else if(StrData.indexOf("GREEN_ON") != -1) digitalWrite(GREEN_LED,HIGH);
    else if(StrData.indexOf("RED_OFF") != -1) digitalWrite(RED_LED,LOW);
    else if(StrData.indexOf("YELLOW_OFF") != -1) digitalWrite(YELLOW_LED,LOW);
    else if(StrData.indexOf("GREEN_OFF") != -1) digitalWrite(GREEN_LED,LOW);
  }    
}
