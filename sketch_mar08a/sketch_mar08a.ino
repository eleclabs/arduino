

void setup() {
pinMode(13, OUTPUT);
pinMode(2, INPUT);
Serial.begin(9600);

}

void loop() {
int LDR_Value = analogRead(2);

if (LDR_Value <800) {
digitalWrite(13,HIGH);
Serial.println("HIGH");
}
else {
digitalWrite(13,LOW);
Serial.println("LOW");
}
delay(10);
}
