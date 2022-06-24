char BluetoothData; 
#include <Wire.h> 

void setup() {

  Serial.begin(9600);
  
  
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
  
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
  digitalWrite(7,0);

}

void loop() {

  if (Serial.available()){
  
    BluetoothData=Serial.read(); 
  Serial.println(BluetoothData);
    if(BluetoothData=='b'){ 
      digitalWrite(4,1); 
      digitalWrite(5,0); 
      digitalWrite(6,1); 
      digitalWrite(7,0); 
    }
     else if(BluetoothData=='s'){ 
      digitalWrite(4,1); 
      digitalWrite(5,1); 
      digitalWrite(6,1); 
      digitalWrite(7,1); 
    }
   else if(BluetoothData=='f'){ 
      digitalWrite(4,0); 
      digitalWrite(5,1); 
      digitalWrite(6,0);
      digitalWrite(7,1); 
    }
    
   else if(BluetoothData=='r'){ 
      digitalWrite(4,0);
      digitalWrite(5,0);
      digitalWrite(6,0);
      digitalWrite(7,1);
    }
   else if(BluetoothData=='l'){ 
      digitalWrite(4,0);
      digitalWrite(5,1);
      digitalWrite(6,0);
      digitalWrite(7,0);
   }
//   else if(BluetoothData=='h'){ 
//      digitalWrite(4,0); 
//      digitalWrite(5,1); 
//      digitalWrite(6,0); 
//      digitalWrite(7,0); 
//    }
//    else if(BluetoothData=='J'){ 
//      digitalWrite(4,0); 
//      digitalWrite(5,0); 
//      digitalWrite(6,0); 
//      digitalWrite(7,1); 
//    }
//    else if(BluetoothData=='I'){ 
//      digitalWrite(4,0); 
//      digitalWrite(5,0); 
//      digitalWrite(6,1); 
//      digitalWrite(7,0); 
//    }
//    else if(BluetoothData=='G'){ 
//      digitalWrite(4,1); 
//      digitalWrite(5,0); 
//      digitalWrite(6,0); 
//      digitalWrite(7,0); 
//    }
  }}
