
int out = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(out, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  Serial.println(analogRead(out));

}
