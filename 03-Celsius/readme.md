• Etapa #1: Análisis del Problema.

Se requiere hallar la formula para convertir de grados Fareheit a grados Celsius.

Matematicamente podemos pensarlo: necesitamos un valor que "viva" en los Reales y que al reemplazarlo en la formula nos de otro número real.

Funcion Celsius: R --> R / F(F) = (5/9) * (F - 32)

Modelo IPO:

Entrada: Un valor de tipo flotante al que le atribuiremos el valor en Farenheit.
Proceso: Se utiliza la formula que se detallo anteriormente.
Salida: Se muestra el valor en Celsius, que se obtuvo por la formula.

• Etapa #2: Diseño de la solución

Debemos generar un algoritmo que reciba el valor en Farenheit que el usuario ingresa para saber su valor en Celsius.
Una vez que tenemos dicho valor, aplicamos la formula para realizar el pasaje y verificamos, con asserts, que la funcion este dando correctamente.
Por ultimo se muestra en pantalla el resultado esperado.

Tambien se tendra en cuenta la comparacion con tolerancia, para ello se utilizara una funcion de tipo bool que nos indicara si su tolerancia es mayor a 0.001
