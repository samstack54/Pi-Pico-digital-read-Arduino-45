
 int LED = 15 ;
 int Button = 16 ;
 
 void setup() {
  pinMode(LED, OUTPUT) ;
  pinMode(Button, INPUT) ;
 }

 void loop() {
  
 int val = digitalRead(Button) ;

  if ( val == 1)
  {
    digitalWrite(LED, HIGH) ;
  }
  else
  {
    digitalWrite(LED, LOW) ;
  }
 }
