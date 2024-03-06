<h1 align="center"> Juego de memoria </h1>
<p align="center"><img src="https://i.imgur.com/W14ktOv.png"/></p> 


## Descripción  📋
---
El proyecto consiste en la implementación de un juego de memoria en el cual el usuario deberá replicar una secuencia de encendido de luces led generada aleatoriamente, pudiendo interactuar con el dispositivo al acercar su mano a los sensores correspondientes.  
Como ayuda adicional, el juego consta con un altavoz que reproduce una melodía de acuerdo al color que se está activando; esto con el fin de que el usuario asocie un sonido determinado con cada uno de los colores mostrados y aumentar las probabilidades de culminar con éxito el juego.  
La secuencia se vuelve más larga y más rápida a medida que el usuario avanza de nivel en el juego, lo cual se obtiene al reproducir el patrón de luces mostrado de manera correcta.


## Pre-requisitos  📋

* Arduino IDE

Descargar desde la página oficial en el siguiente enlace.
```
https://www.arduino.cc/en/software
```
* Librería LiquidCrystalIO
Esta librería permite controlar y programar la pantalla LCD. Instalar la librería en Arduino IDE, luego incluir la siguiente línea al inicio del código.

```
#include <LiquidCrystalIO.h>
```
## Materiales  📦
A continuación se muestra una lista de los materiales requeridos, junto con la cantidad y el precio de cada uno:

| MATERIAL                       | CANTIDAD | PRECIO UNIT. | TOTAL INVERTIDO |
|------------------------------|----------|--------------|-----------------|
| Microcontrolador Arduino UNO | 1        | 16.00        | 16.00           |
| Resistor 220 Ω               | 4        | 0.05         | 0.20            |
| LED                          | 4        | 0.10         | 0.40            |
| Buzzer pasivo                | 1        | 1.00         | 1.00            |
| Sensor ultrasónico           | 4        | 3.00         | 12.00           |
| Protoboard                   | 1        | 4.50         | 4.50            |
| Cables jumpers macho-macho   | 20       | 0.05         | 1.00            |
| Cables jumpers macho-hembra  | 20       | 0.05         | 1.00            |
| Pantalla LCD 16x2            | 1        | 10.00        | 10.00           |
| Potenciómetro                | 1        | 0.50         | 0.50            |

## Total estimado  💰

El costo total estimado del proyecto se calcula sumando los precios de todos los materiales:

Total Estimado: $46.60 USD 💲

## Esquemas 📊

Diagrama esquemático de conexiones electrónicas.

![Imagen](https://i.imgur.com/7IyBcdv.jpeg)

Diagrama esquemático de conexiones en protoboard.

![Imagen](https://i.imgur.com/wQC87cJ.png)

Placa de circuito impreso.

![Imagen](https://i.imgur.com/8Aeeiib.jpeg)

## Instalación y simulación  🔧

Dentro de Arduino IDE, seleccionar el modelo de la placa Arduino utilizada, el puerto en el cual la placa está conectada, y dar al botón "Cargar". Esperar que el código sea subido a la placa. _

![Imagen 1](https://i.imgur.com/mkR073Q.png)

Realizar las conexiones electrónicas de acuerdo al diagrama mostrado. También se puede simular el funcionamiento del proyecto en línea mediante Tinkercad desde [aquí](https://www.tinkercad.com/things/aRTDOBalVUa-juego-de-memoria?sharecode=uhs8TexrqDih92qX-ilAlyZ47JBOxGS82nI4j31XkrI).

![Imagen 2](https://i.imgur.com/wQC87cJ.png)

## Autores ✒️

_Menciona a todos aquellos que ayudaron a crear el proyecto_

* **Brank Jobeth Malatay Muñoz** - *Programación, conexiones electrónicas, diseño de case, diseño de PCB*
* **Irving Ricardo Macias Garzon** - *Programación, conexiones electrónicas*
* **Beatriz Aurora Quizhpi Torres** - *Programación, conexiones electrónicas*


## Video demostrativo 🎥

Puedes encontrar un video demostrativo de este proyecto en [este enlace](https://youtu.be/4xrLBoZ2P94).

## Imágenes 📊

A continuación, se muestran algunas imágenes del proyecto:

![Imagen 1](https://i.imgur.com/W14ktOv.png)