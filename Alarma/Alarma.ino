
const int reedSwitch = 2;  // Asignacion de pin 2 a reed switch
int led= 13;               // Asignacion de pin 13 para led
int estado = HIGH;         // Estado de salida del pin
int indicador;             // Indicador de entrada del pin
int lectura = LOW;         // Lectura del indicador de entrada del pin

void setup() {
  pinMode(reedSwitch, INPUT);        // Modo de entrada a reed switch
  pinMode (led, OUTPUT);             // Modo de salida a led
  digitalWrite(reedSwitch, HIGH);    // Activacion del resisteor en el reed switch
  Serial.begin(9600);
  pinMode(8, OUTPUT);                // Modo de salida al pin 8 (Buzzer)
}

void loop() {  
  int indicador = digitalRead(reedSwitch);       // Lectura del indicador para reed switch
  Serial.println(digitalRead(reedSwitch));       // Muestra el valor actual (prueba)
  if (indicador == HIGH && lectura == LOW) {     // Si el indicador del reed switch es positivo y la lectura d entrada del pin esta apagado entra al ciclo
    if (estado == HIGH){                         // Si el estado es positivo, la puerta se ha cerrado
        estado = LOW;                            // Apagar led
        noTone(8);                               // Apagar alarma
      }
      
    else { 
      estado = HIGH;                             // Si el estado es negativo, la puerta se ha abierto
      tone(8, 6);                                // Alarma encendida
    }
      
  }

  digitalWrite(led, estado);          // Escribe el valor del pin y su estado
  lectura = indicador;                // Reinicio de lectura 
}
