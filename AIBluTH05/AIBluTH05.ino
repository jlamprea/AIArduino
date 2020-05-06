// programa para comectar arduino por medio de Bluetooth HC05.
// aplicacion  en el smartphone ArdObjectTracker
// alarma que detecta un label especifico.

#include <SoftwareSerial.h>
SoftwareSerial BluT(4,3); // dedinimos pines 4 RX,3 TX


void setup() {
  
BluT.begin(9600); // iniciamoss el puerto serial bluetooth
Serial.begin(9600); // iniciamos el puerto USB serial de arduino
pinMode(13,OUTPUT); // iniciamos pin 13 como salida
digitalWrite(13,LOW); // iniciamos pin 13 apagado
}

void loop() {
  
if (BluT.available()){   // si llega un dato por el bluetooth 
   
  String objeto = "person"; // cualquier palabra de los label de modelo tensorflow para activar.
      
  char Label = BluT.read(); // al leerlo en readString se demora mucho el refresco del buffer
  Serial.print(Label); // se escribe lo que llegue del puerto blutooth.
  String Label1= Label+"\n"; // convierte char en string para poder comparar
  Label=""; // se limpia el buffer 
  digitalWrite(13,LOW);
  
    if (Label1.indexOf(objeto)>= 0){ // busca un string en otro string y devuelve el numero indice
    Serial.println(objeto+"Pin13 High");
    digitalWrite(13,HIGH);
    delay(100);
    
    Label1=""; // se limpia el buffer
  }


  }
}
