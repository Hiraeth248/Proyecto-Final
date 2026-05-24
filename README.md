# Proyecto Final Sistemas Embebidos
## Sistema Embebido de Riego Automático

Sistema de riego automático basado en un sensor de humedad del suelo, un microcontrolador y un módulo relé.  
El proyecto permite monitorear continuamente la humedad de la tierra y activar automáticamente una bomba de agua cuando el suelo se encuentra seco.

---

# Descripción del proyecto
Este sistema fue diseñado como una solución simple y de bajo costo para automatizar el riego de plantas utilizando principios básicos de sistemas embebidos.

El sensor de humedad mide continuamente las condiciones del suelo y envía los datos al microcontrolador.  
El software procesa la información y decide si es necesario activar el sistema de riego mediante un relé que controla una bomba de agua.

Los objetivos principales del proyecto son:
- Reducir el desperdicio de agua
- Automatizar el cuidado de plantas

---

# Características
- Lectura de humedad del suelo en tiempo real
- Activación automática del riego
- Control mediante módulo relé
- Sistema de monitoreo continuo

---

# Componentes utilizados

| Componente | Cantidad |
|---|---|
| Arduino MEGA (o similar) | 1 |
| Sensor de humedad del suelo | 1 |
| Módulo relé de 5V | 1 |
| Mini bomba de agua | 1 |
| Pila de 9V | 1 |
| Cables jumper | Varios |

---

# Arquitectura del sistema
El sistema está dividido en cuatro bloques funcionales:

1. **Sensado**  
   El sensor de humedad mide las condiciones del suelo.

2. **Procesamiento**  
   El microcontrolador interpreta los datos del sensor.

3. **Control**  
   El relé actúa como interfaz de potencia.

4. **Actuación**  
   La bomba de agua realiza el riego automático.

---

# Diagrama general
