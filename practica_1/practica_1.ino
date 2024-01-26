int lectura = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(lectura,INPUT); 
  Serial.begin(9600);
  }

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(lectura);
  Serial.println(x);
  delay(200);
  
}
