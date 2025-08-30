// IG|| a.vishwa_07
// E.mail - akvishwa17@gmail.com
// Led Blink (Hello World)
int ledPin = 13; // LED pin is connected to the pin no 13

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  
  delay(1000); //Wait for 1 secound                
  digitalWrite(ledPin, LOW);   
  delay(1000);                
}
