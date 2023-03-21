int valor1;
int valor2;
int valor3;
void setup() {
  Serial.begin(9600); // Inicializa el puerto serial a 9600 baudios
  Serial1.begin(9600); // Inicializa el puerto serial a 9600 baudios
}
void loop() {
  if (Serial1.available()) {
    String datos = Serial1.readStringUntil('\n'); // Lee la cadena de caracteres hasta el salto de línea
    sscanf(datos.c_str(), "%d,%d,%d", &valor1, &valor2, &valor3); // Convierte la cadena a tres enteros separados por comas
    Serial.print("x ");
    Serial.print(valor1);
    Serial.print(" y ");
    Serial.print(valor2);
    Serial.print(" p ");   
    Serial.println(valor3);

  }
}