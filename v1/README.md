# Juego de memoria
Proyecto asignado al grupo 3 de aspirantes a miembros del club Phycom de ESPOL.

## Integrantes
- Brank Jobeth Malatay Muñoz
- Irving Ricardo Macias Garzon
- Beatriz Aurora Quizhpi Torres
- Jordy Steven Zamora Cedeño
- Andrea Ivanna Vasquez Reyes
- Ivan Andres Salinas Castillo

## Definición del proyecto
El proyecto consiste en la implementación de un juego de memoria en el cual el usuario deberá replicar una secuencia de encendido de luces led generada aleatoriamente, pudiendo interactuar con el dispositivo al acercar su mano a los sensores correspondientes.  
Como ayuda adicional, el juego consta con un altavoz que reproduce una melodía de acuerdo al color que se está activando; esto con el fin de que el usuario asocie un sonido determinado con cada uno de los colores mostrados y aumentar las probabilidades de culminar con éxito el juego.  
La secuencia se vuelve más larga y más rápida a medida que el usuario avanza de nivel en el juego, lo cual se obtiene al reproducir el patrón de luces mostrado de manera correcta.

## Tabla de materiales y precios
| MATERIAL                       | CANTIDAD | PRECIO UNIT. | TOTAL INVERTIDO |
|------------------------------|----------|--------------|-----------------|
| Microcontrolador Arduino UNO | 1        | 16.00        | 16.00           |
| Resistor 220 Ω               | 4        | 0.05         | 0.20            |
| LED                          | 4        | 0.10         | 0.40            |
| Buzzer pasivo                | 1        | 1.00         | 1.00            |
| Sensor ultrasónico           | 4        | 3.00         | 12.00           |
| Protoboard                   | 1        | 4.50         | 4.50            |
| Cables jumpers macho-macho   | 9        | 0.05         | 0.45            |
| Cables jumpers macho-hembra  | 16       | 0.05         | 0.80            |

**COSTO TOTAL DE PROYECTO:**  
$35.35

## Posibles mejoras
Para mejorar la experiencia de juego, sería factible implementar una pantalla LCD que indique en todo momento el nivel en el cual se encuentra el jugador, además de servir como una realimentación adicional cuando la secuencia fue replicada correctamente o cuando se finaliza el juego. Adicionalmente, esta misma pantalla serviría para mostrar la puntuación máxima alcanzada.  
Asimismo, podrían incorporarse nuevos leds con otros colores y con sus respectivos sensores, aumentando notablemente la cantidad de patrones que pueden generarse, elevando la dificultad del juego.  
Por otra parte, respecto a la jugabilidad, pueden implementarse características adicionales tales como configurar la velocidad o seleccionar el número de leds que serán utilizados para generar la secuencia previo a iniciar el juego.

## Diseño del circuito
Circuito del proyecto realizado en [Tinkercad](https://www.tinkercad.com/things/6RoOQ8HJYBm-as3-simon-dice/editel?sharecode=3kepTkKk5qYd0h33U5yoPZrCmGtkJIzTuV7GD3veXUM).
![](https://i.imgur.com/Yb4GK2Z.png)