

// the setup function runs once when you press reset or power the board
int sensorRead=0;
int ledblink = 0;
void setup() {
  pinMode(A0, INPUT); 
  pinMode(11, OUTPUT); 
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  int sensorRead = analogRead(A0);
  Serial.println(sensorRead);
 if(sensorRead<500) sensorRead=500;
 else if(sensorRead>860) sensorRead=860;
 int ledblink = map(sensorRead, 500, 860, 0, 255);
 analogWrite(11,ledblink );
 delay(1);
}
