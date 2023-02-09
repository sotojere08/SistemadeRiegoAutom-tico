//Inicializar las variables

// Salida digital 8 para la señal del relé que activará la bomba de agua.
int bomba = 8;
// Lectura analógica del sensor de humedad
int humedad = 0;

void setup() {
  Serial.begin(9600);
  // Se define el pin A0 (de la bomba) como salida
  pinMode(bomba, OUTPUT);
}
void loop() {
  // Acá se coloca el codigo que se quiere correr repetidamente:
// La variable "humedad" se define como lectura analógica
humedad = analogRead(A0);

// Se define un rango de humedad entre 720 y 1024 para que la planta no esté ni muy humeda ni muy seca 
if (humedad>= 720 && humedad <=1024){
  digitalWrite(bomba, HIGH);
  }
else {
  digitalWrite(bomba, LOW);
  }
// Se imprime en el monitor serial la lectura de humedad
Serial.println(humedad);
// Se añade un retraso para retrasar la salida en el monitor serial
delay(1000); 
}
