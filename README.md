# ACS712-5A
Current reading with ACS712
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
