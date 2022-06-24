
char t;  
 #define m1 4
 #define m2 5
 #define m3 6
 #define m4 7
 void setup() {  
 Serial.begin(9600);  
 pinMode(m1,OUTPUT);  //right motors forward  
 pinMode(m2,OUTPUT);  //right motors reverse  
 pinMode(m3,OUTPUT);  //left motors forward  
 pinMode(m4,OUTPUT);  //left motors reverse  
 }  
 void loop() {  
 if(Serial.available()){  
  t = Serial.read();  
 }  
 if(t == 'F'){      //move forward(all motors rotate in forward direction)  
  digitalWrite(m1,HIGH);  
  digitalWrite(m2,LOW);  
  digitalWrite(m3,HIGH);  
  digitalWrite(m4,LOW);  
 }  
 else if(t == 'B'){   //move reverse (all motors rotate in reverse direction)  
  digitalWrite(m1,LOW);  
  digitalWrite(m2,HIGH);  
  digitalWrite(m3,LOW);  
  digitalWrite(m4,HIGH);  
 }  
 else if(t == 'L'){   //turn right (left side motors rotate in forward direction, right side motors rotate in reverse direction for 100ms & stop)  
  digitalWrite(m1,HIGH);  
  digitalWrite(m2,LOW);  
  digitalWrite(m3,LOW);  
  digitalWrite(m4,HIGH);  
  delay(100);  
   
 }  
 else if(t == 'R'){   //turn left (right side motors rotate in forward direction, left side motors rotate in reverse direction for 100ms & stop)  
  digitalWrite(m1,LOW);  
  digitalWrite(m2,HIGH);  
  digitalWrite(m3,HIGH);  
  digitalWrite(m4,LOW);  
  delay(100);  
    
 }  
 else if((t == 'f')||(t == 'b')||(t == 'l')||(t == 'r')){   //STOP (all motors stop)  
  digitalWrite(m1,LOW);  
  digitalWrite(m2,LOW);  
  digitalWrite(m3,LOW);  
  digitalWrite(m4,LOW);  
 }  
 delay(100);  
 }
