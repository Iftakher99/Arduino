char BluetoothData; 
#include <Wire.h> 

void setup() {

  Serial.begin(9600);
  
  
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  
  
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(8,0);
  digitalWrite(9,0);

}

void loop() {

  if (Serial.available()){
  
    BluetoothData=Serial.read(); 
  Serial.println(BluetoothData);
    if(BluetoothData=='f'){ 
      digitalWrite(4,1); 
      digitalWrite(5,0); 
      digitalWrite(8,0); 
      digitalWrite(9,1); 
    }
     else if(BluetoothData=='s'){ 
      digitalWrite(4,1); 
      digitalWrite(5,1); 
      digitalWrite(8,1); 
      digitalWrite(9,1); 
    }
   else if(BluetoothData=='b'){ 
      digitalWrite(4,0); 
      digitalWrite(5,1); 
      digitalWrite(8,1);
      digitalWrite(9,0); 
    }
    
   else if(BluetoothData=='r'){ 
      digitalWrite(4,0);
      digitalWrite(5,1);
      digitalWrite(8,0);
      digitalWrite(9,1);
    }
   else if(BluetoothData=='l'){ 
      digitalWrite(4,1);
      digitalWrite(5,0);
      digitalWrite(8,1);
      digitalWrite(9,0);
   }
   else if(BluetoothData=='i'){ 
      digitalWrite(4,1); 
      digitalWrite(5,1); 
      digitalWrite(8,0); 
      digitalWrite(9,1); 
    }
    else if(BluetoothData=='g'){ 
      digitalWrite(4,1); 
      digitalWrite(5,0); 
      digitalWrite(8,1); 
      digitalWrite(9,1); 
    }
    else if(BluetoothData=='h'){ 
      digitalWrite(4,0); 
      digitalWrite(5,1); 
      digitalWrite(8,1); 
      digitalWrite(9,1); 
    }
    else if(BluetoothData=='j'){ 
      digitalWrite(4,1); 
      digitalWrite(5,1); 
      digitalWrite(8,1); 
      digitalWrite(9,0); 
    }
  }}
