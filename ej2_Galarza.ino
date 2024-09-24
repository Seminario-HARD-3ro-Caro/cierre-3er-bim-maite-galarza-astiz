/* 2.  En el siguiente programa se deberá prender de a UN LED POR VEZ.
        Por cada pulsación se deberá apagar el LED prendido y prender el LED más próximo de la derecha.
        En caso de no haber, se deberá volver a empezar la vuelta, empezando desde el LED de la izquierda.*/

int buttonState=0; //declarar la variable buttonState
void prender(int buttonState){ //delclarar la funcion prender 
  if(buttonState==0){ // si buttonState es 0 preder led 1
  digitalWrite(3, HIGH); // prender led 1
  digitalWrite(4, LOW); //apagar led 2
  digitalWrite(5, LOW); //apagar led 3
  digitalWrite(6, LOW); //apagar led 4
  }else if(buttonState==1){ // si buttonState es 1 preder led 2
  digitalWrite(3, LOW);//apagar led 1
  digitalWrite(4, HIGH);// prender led 2
  digitalWrite(5, LOW);//apagar led 3
  digitalWrite(6, LOW);//apagar led 4
  }else if(buttonState==0){ // si buttonState es 0 preder led 3
  digitalWrite(3, LOW); //apagar led 1
  digitalWrite(4, LOW); //apagar led 2
  digitalWrite(5, HIGH); //prender led 3
  digitalWrite(6, LOW); //apagar led 4
  }else if(buttonState==1){ // si buttonState es 1 preder led 4
  digitalWrite(3, LOW);//apagar led 1
  digitalWrite(4, LOW);//apagar led 2
  digitalWrite(5, LOW);//apagar led 3
  digitalWrite(6,HIGH);//prender led 4
}
}
void setup()
{
  pinMode(2,INPUT_PULLUP); //definir pin 2 como input_pullup
  pinMode(3,OUTPUT); //definir pin 3  como OUTPUT
  pinMode(4,OUTPUT); //definir pin 4  como OUTPUT
  pinMode(5,OUTPUT); //definir pin 5  como OUTPUT
  pinMode(6,OUTPUT); //definir pin 6  como OUTPUT
}
