
#define BUTTON_PIN D5
#define RED_PIN D4

int prevBtn = 0;
int currBtn = 0;
int ledState = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(BUTTON_PIN,INPUT_PULLUP);
  pinMode(RED_PIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  currBtn =! digitalRead(BUTTON_PIN);

  if(currBtn != prevBtn){
    prevBtn = currBtn;
    if(currBtn == 1){
      ledState = !ledState;
      digitalWrite(RED_PIN,ledState);
    }
    delay(50);
  }
}