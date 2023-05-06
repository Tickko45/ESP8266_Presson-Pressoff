int Button = D2;
int LED = D4;
int led_st =LOW;

void setup() {
  Serial.begin(115200);
  pinMode(Button,INPUT_PULLUP);
  pinMode(LED,OUTPUT);
}

void loop() {
  
 if (digitalRead(Button)==LOW){
  if (led_st == LOW){
    digitalWrite(LED,LOW);
    led_st=HIGH;
    Serial.println("ON");}
  }else {
     digitalWrite(LED,HIGH);
    led_st=LOW;
    Serial.println("OFF");}
    
  delay(1000);
}
