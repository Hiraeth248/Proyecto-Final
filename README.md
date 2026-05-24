# Proyecto Final Sistemas Embebidos
## Sistema Embebido de Riego Automático

Sistema de riego automático basado en un sensor de humedad del suelo, un microcontrolador y un módulo relé.  
El proyecto permite monitorear continuamente la humedad de la tierra y activar automáticamente una bomba de agua cuando el suelo se encuentra seco.

## Descripción del Proyecto
Este sistema fue diseñado como una solución simple y de bajo costo para automatizar el riego de plantas utilizando principios básicos de sistemas embebidos.

El sensor de humedad mide continuamente las condiciones del suelo y envía los datos al microcontrolador.  
El software procesa la información y decide si es necesario activar el sistema de riego mediante un relé que controla una bomba de agua.

Los objetivos principales del proyecto son:
- Reducir el desperdicio de agua
- Automatizar el cuidado de plantas

## Problemática Abordada
La problemática abordada surge de la necesidad de optimizar el uso del agua en procesos de riego doméstico o agrícola a pequeña escala, evitando tanto el exceso como la falta de agua en el suelo. De manera adicional, también se maneja la necesidad específica de manejar el proceso del riego sin necesidad de la constante intervención humana; que ocasionalmente tiene dificultades no solo para manejar correctamente los horarios y las veces que una planta requiere de riego, sino también la cantidad de agua utilizada en cada ocasión.

## Características del Sistema
- Lectura de humedad del suelo en tiempo real
- Activación automática del riego
- Control mediante módulo relé
- Sistema de monitoreo continuo

## Componentes utilizados

| Componente | Cantidad |
|---|---|
| Arduino MEGA (o similar) | 1 |
| Sensor de humedad del suelo | 1 |
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

## Diagrama general
![Conexiones Base](https://github.com/Hiraeth248/Proyecto-Final/blob/main/Diagrama%20de%20Conexiones%20B%C3%A1sico.png)

## Instrucciones de Uso
1. Definir el microcontrolador (en este caso se eligió el Arduino debido a que es sencillo de utilizar) y pensar en los componentes a utilizar para que el sistema funcione, esto para equilibrar la funcionalidad y la fácil adquisición de los implementos.
2. Conectar el Arduino al computador haciendo uso del cable A-B, y conectar la batería de 9V a la salida de información del relé y la bomba de agua.
3. Comprobar el funcionamiento del sensor y la bomba, asegurando que la señal enviada hacia el Arduino sea correctamente interpretada por el relé y este active o desactive la bomba de agua.
4. En cuanto el circuito esté funcionando correctamente, será posible colocar el sensor en el lugar deseado para darle uso.
