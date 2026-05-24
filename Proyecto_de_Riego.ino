int water; //Creamos la variable para la humedad a medir 
void setup() {
  pinMode(3,OUTPUT); //Decidimos el pin de salida para el relé, encargado de darle señal
  pinMode(6,INPUT); //El pin de entrada, cuya información vendrá desde el sensor
}

void loop() { 
  water = digitalRead(6);  // Leemos la señal proveniente del sensor
  if(water == HIGH) // Si el nivel del agua es alto, se debe detener el relé
  {
  digitalWrite(3,LOW); // Low es para detener el relé
  }
  else
  {
  digitalWrite(3,HIGH); // High es para continuar la señal y la salida del agua
  }
  delay(400); 
}
