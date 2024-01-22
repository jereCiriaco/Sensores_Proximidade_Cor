int trig =2;
int echo =10;
int distance;
long duration;

void setup() {
  // put your setup code here, to run once:
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(echo,LOW); //Envia a frequencia 
  delayMicroseconds(2);

  digitalWrite(trig, HIGH); // Recebe a frequencia

  delayMicroseconds(10);

  digitalWrite(trig,LOW); // Apos recebido a frequencia desliga

  duration= pulseIn(echo, HIGH);
  distance = duration * 0.034/2;


  Serial.print("Distance:");
  Serial.println(distance);

  if(distance < 20){
    Serial.println("ESTA PROXIMMO");
  }
  delay(1000);

}
