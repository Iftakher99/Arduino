const int IN1 = 9; //left BTS RPWM  
const int IN2 = 9; //LEFT BTS LPWM
const int IN3 = 5; //RIGHT BTS RPWM
const int IN4 = 6; //RIGHT BTS LPWM
const int ENA = 3; //LEFT BTS , RIGHT BTS R_EN , L_EN

char t;




void setup() {

  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  pinMode (ENA, OUTPUT);
  
   
 analogWrite(ENA, 255);
  


  

Serial.begin(9600);
}

void loop() {

  if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
if(t == 'B'){      
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4,LOW );
 
  
} 
else if(t == 'S'){     
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  
  
} 
 else if(t == 'F'){      
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  
  
} 
  else if(t == 'R'){     
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
 
  
} 
else if(t == 'L'){      
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  
  
} 
   else if(t == 'G'){      

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH); 
  
} 
 else if(t == 'I'){     

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH); 
  
} 
 
   else if(t == 'J'){     

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);  
  
} 
 
   
 
   else if(t == 'H'){      

  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  
} 
 else if(t == '0'){      
 analogWrite(ENA, 0);
  
  
} 
 
   
 
   else if(t == '1'){    
  analogWrite(ENA, 55);
  
  
} 
 
  else if(t == '2'){     
 analogWrite(ENA, 80);
  
  
} 
 
   else if(t == '3'){     
 analogWrite(ENA, 105);
  
  
} 

    else if(t == '4'){     
 analogWrite(ENA, 130);
  
  
} 
 
   else if(t == '5'){     
 analogWrite(ENA, 155);
  
  
} 
 
   else if(t == '6'){      
 analogWrite(ENA, 175);
  
  
} 
 
   else if(t == '7'){      
  analogWrite(ENA, 195);
 
  
} 
 
  else if(t == '8'){      
 analogWrite(ENA, 215);
 
  
} 
 
   else if(t == '9'){     
 analogWrite(ENA, 235);
   
  
} 

    else if(t == 'q'){     
 analogWrite(ENA, 255);
  
  
} 
if(t == 'x'){      
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4,LOW);
 
 
  
} 
 

}
