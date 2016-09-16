int ledRed = 12;
int ledYellow = 13;
int ledBlue = 15;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledRed,OUTPUT);
  pinMode(ledYellow,OUTPUT);
  pinMode(ledBlue,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledRed,LOW);
  digitalWrite(ledBlue,LOW);
  delay(500);
  digitalWrite(ledRed,HIGH);
  delay(3000);
  digitalWrite(ledRed,LOW);
  delay(500);
  digitalWrite(ledYellow,HIGH);
  delay(2000);
  digitalWrite(ledYellow,LOW);
  digitalWrite(ledBlue,HIGH);
  delay(5000);
  
}
