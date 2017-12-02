/****************************************************************************************************************************\
 * Creado por Omar Rincon (Ingeniero electronico y cientifico de datos)
 *  
 * El siguiente codigo limpia la señal recibida por el sensor de corriente ASC712
 * esta versión esta diseñada para una lectura maxima de 5A
 * se opta por usar el error cuadratico en la regresión lineal para garantizar el muestreo
 * ecuacion regresion lineal Y = m*X + b
 * los valores m y b determinaran el comportamiento lineal de nuestra lectura
 * se trabajó con las caracteristicas encontradas en la hoja del fabricante https://www.sparkfun.com/datasheets/BreakoutBoards/0712.pdf
 * 
 * Discussion      : oxanderv@gmail.com
 *
\*************************************************************************************************************************/


float CeroSensor = 629.0;  // Punto cero, sin carga
float sensorValue = 0;
float m = 0.02857;
float b = 0.001;
float average= 0;
float current = 0;
int avgSamples = 20;
int avgSamples2 = 50;

void setup() 
{
Serial.begin(9600);
}

void loop() 
{
 for(int j = 0; j < avgSamples2; j++)
    {
     for(int i = 0; i < avgSamples; i++)
         {
          sensorValue += analogRead(A0);
          delay(2);
         }
     sensorValue = sensorValue / avgSamples;
     sensorValue -= CeroSensor;
     average += (sensorValue * m) + b;  
    }
   current = average / avgSamples2;
   average = 0;
   Serial.print(current);
   Serial.println(" A");
   delay(100);
}
