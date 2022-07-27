int lsrpwm=11;// left front
int lslpwm=10;// left back
int rsrpwm=5;// right front
int rslpwm=6;// right back


char val;

void setup() 
{  
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);


Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }

  if( val == 'F') // Back
    {
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
       
      analogWrite(lsrpwm, 255);
      analogWrite(lslpwm, 0);
      analogWrite(rslpwm, 0);
      analogWrite(rsrpwm,235);

    }
    
  if( val == 'B') // Back
    {
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
       
      analogWrite(lsrpwm, 0);
      analogWrite(lslpwm, 250);
      analogWrite(rslpwm, 250);
      analogWrite(rsrpwm,0);

    }

    
  if( val == 'R') // Back
    {
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
       
      analogWrite(lsrpwm, 250);
      analogWrite(lslpwm, 0);
      analogWrite(rslpwm, 250);
      analogWrite(rsrpwm,0);

    }
    if( val == 'L') 
    {
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
       
      analogWrite(lsrpwm, 0);
      analogWrite(lslpwm, 250);
      analogWrite(rslpwm, 0);
      analogWrite(rsrpwm,250);
    
    }
     
     if( val == 'J') 
    {
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
       
      analogWrite(lsrpwm, 0);
      analogWrite(lslpwm, 250);
      analogWrite(rslpwm, 180);
      analogWrite(rsrpwm,0);
    
    }
    if( val == 'H') 
    {
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
       
      analogWrite(lsrpwm, 0);
      analogWrite(lslpwm, 140);
      analogWrite(rslpwm, 250);
      analogWrite(rsrpwm,0);
    
    }
    if( val == 'I') 
    {
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
       
      analogWrite(lsrpwm, 250);
      analogWrite(lslpwm, 0);
      analogWrite(rslpwm, 0);
      analogWrite(rsrpwm,110);
    
    }
    if( val == 'G') 
    {
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
       
      analogWrite(lsrpwm, 150);
      analogWrite(lslpwm, 0);
      analogWrite(rslpwm, 0);
      analogWrite(rsrpwm,255);
    
    }
     if( val == 'S') 
    {
      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
       
      analogWrite(lsrpwm, 0);
      analogWrite(lslpwm, 0);
      analogWrite(rslpwm, 0);
      analogWrite(rsrpwm,0);
    
    }






}