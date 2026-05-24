# Proyecto Final Sistemas Embebidos
## Sistema Embebido de Riego Automático

Sistema de riego automático en Arduino basado en un sensor de humedad de suelo, un microcontrolador y un módulo relé.  
El proyecto permite monitorear continuamente la humedad de la tierra y activar automáticamente una bomba de agua cuando el suelo se encuentra seco.

**Universidad de San Buenaventura - Ingeniería Multimedia**
**Autores:** Geraldine Ladino, Paula Casallas, Carlos Sandoval, Juan Álvarez

## Descripción del Proyecto
Este sistema fue diseñado como una solución simple y de bajo costo para automatizar el riego de plantas utilizando principios básicos de sistemas embebidos.

El sensor de humedad **YL-69** mide continuamente las condiciones del suelo y envía los datos al microcontrolador.  
El software procesa la información y decide si es necesario activar el sistema de riego mediante un **relé de 5V** que controla una bomba de agua.

Los objetivos principales del proyecto son:
- Reducir el desperdicio de agua
- Automatizar el cuidado de plantas

## Problemática Abordada
La problemática abordada surge de la necesidad de optimizar el uso del agua en procesos de riego doméstico o agrícola a pequeña escala, evitando tanto el exceso como la falta de agua en el suelo y a su vez disminuyendo la necesidad de una constante intervención humana en estos procesos.

## Características del Sistema
- Lectura de humedad del suelo en tiempo real
- Activación automática del riego
- Control mediante módulo relé
- Sistema de monitoreo continuo

## Componentes utilizados

| Componente | Cantidad |
|---|---|
| Arduino MEGA (o similar) | 1 |
| Sensor de humedad del suelo YL-69 | 1 |
| Módulo relé de 5V | 1 |
| Mini bomba de agua | 1 |
| Pila de 9V | 1 |
| Cables jumper | Varios |

## Arquitectura del Sistema
El sistema está dividido en cuatro partes fundamentales:

1. **Sensado**  
   El sensor de humedad mide las condiciones del suelo.

2. **Procesamiento**  
   El microcontrolador interpreta los datos del sensor.

3. **Control**  
   El relé actúa como interfaz de potencia.

4. **Actuación**  
   La bomba de agua realiza el riego automático.

## Diagrama general de Conexiones
| Sensor | Arduino|
| ------ | ---------------- |
| VCC    | VIN              |
| GND    | GND              |
| DO     | 6               |

| Relé | Arduino|
| ---- | -------------------- |
| VCC  | 5V                   |
| GND  | GND                  |
| IN   | 3 |

![Conexiones Base](https://github.com/Hiraeth248/Proyecto-Final/blob/main/Diagrama%20de%20Conexiones%20B%C3%A1sico.png)

## Instrucciones de Uso
1. Requisitos previos
- [Arduino IDE](https://www.arduino.cc/en/software) instalado (versión 1.8 o superior).
- Cable USB tipo A-B para conectar el Arduino al computador.
- Conexiones de los componentes según el diagrama anterior.
  
2. Instalación y carga del código
- Clonar o descargar este repositorio:
   ```bash
   git clone https://github.com/Manuel-Botk/Sistema-Embebido.git
   ```
- Abrir el archivo `Proyecto_de_Riego.ino` en el Arduino IDE.
- En el menú **Herramientas**, seleccionar:
   - **Placa:** Arduino MEGA (esto cambia según el microcontrolador que se use)
   - **Puerto:** el puerto COM que corresponda al Arduino conectado.
- Hacer clic en **Subir** (→) para cargar el firmware al Arduino.

3. Comprobar el funcionamiento del sensor y la bomba, asegurando que la señal enviada hacia el Arduino sea correctamente interpretada por el relé y este active o desactive la bomba de agua.
   
4. En cuanto el circuito esté funcionando correctamente, será posible colocar el sensor en el lugar deseado para darle uso.
