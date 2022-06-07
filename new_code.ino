int led = 13,sensor = 2,val = 0, led2 = 8;
void setup(){
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(sensor, INPUT);
}
void loop(){
  val = digitalRead(sensor);
  if(val == HIGH){
    digitalWrite(led2, LOW);
    digitalWrite(led, HIGH);
    Serial.println("Motion detected!");
  }else{
    digitalWrite(led, LOW);
    digitalWrite(led2, HIGH);
    Serial.println("Motion detected!");
  }
}
