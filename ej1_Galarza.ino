// Ejercicio evaluatorio 3er bimestre
/*
  Integrantes
    Nombre:Maite
    Apellido:Galarza Astiz 
    Curso:3D
   
  
Congisgnas
  Conexionado:
    En la protoboard, conectar 4 LEDs para que cada uno pueda ser controlado individualmente. Cada LED deberá tener su respectiva resistencia.
    Se debe conectar tambien, un pulsador que permita recibir información de un usuario.
    Indicar a continuación los pines a los cuales se conectó cada elemento y el valor de resistencias utilizado:
      Pines:
        Boton:2
        LED1:3
        LED2:4
        LED3:5
        LED4:6
      Valor:
        R_boton: no la use, ya que use input_pullup
        R_LEDs:330 ohms

  Progamas:
    Se deben entregar un programa distinto por cada punto. Los programas son una modificación entre ellos.
    El código deberá estar comentado indicando qué se propone hacer con cada línea de código
    1.  El primer programa sirve para corroborar la correcta conexión de los elementos de hardware.
        El mismo deberá encender TODOS los LEDs cuando se presione el pulsador y apagarlos cuando éste se suelte.*/
int buttonState=0; //declare la variable buttonState 
void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT_PULLUP); //le dije que el pin 2 es un input_pullup
pinMode(3,OUTPUT); // le dije que le pin 3 es un output
pinMode(4,OUTPUT); // le dije que le pin 4 es un output
pinMode(5,OUTPUT); // le dije que le pin 5 es un output
pinMode(6,OUTPUT); // le dije que le pin 6 es un output
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState=digitalRead(2); // le dije que cuando le pregunte por buttonState lee el pin 2
if(buttonState==LOW){ // si buttonState esta presionado entonces que se prendan los pines 3,4,5,6
digitalWrite(3,HIGH); //prender el led 1
digitalWrite(4,HIGH); //prender el led 2
digitalWrite(5,HIGH); //prender el led 3
digitalWrite(6,HIGH); //prender el led 4
}else if (buttonState==HIGH);{ // cuando buttonState no esta presionado que se apaguen los leds
  digitalWrite(3,LOW); // apagar el led 1
  digitalWrite(4,LOW); // apagar el led 2
  digitalWrite(5,LOW); // apagar el led 3
  digitalWrite(6,LOW); // apagar el led 4
}
}
