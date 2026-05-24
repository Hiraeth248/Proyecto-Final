# Proyecto Final Sistemas Embebidos
## Sistema Embebido de Riego Automático

Sistema de riego automático basado en un sensor de humedad del suelo, un microcontrolador y un módulo relé.  
El proyecto permite monitorear continuamente la humedad de la tierra y activar automáticamente una bomba de agua cuando el suelo se encuentra seco.

---

# Descripción del proyecto
Este sistema fue diseñado como una solución simple y de bajo costo para automatizar el riego de plantas utilizando principios básicos de sistemas embebidos.

El sensor de humedad mide continuamente las condiciones del suelo y envía los datos al microcontrolador.  
El software procesa la información y decide si es necesario activar el sistema de riego mediante un relé que controla una bomba de agua o una electroválvula.

El objetivo principal del proyecto es:
- Reducir el desperdicio de agua
- Automatizar el cuidado de plantas
- Implementar una arquitectura básica de adquisición y control de datos
- Servir como proyecto educativo de electrónica y programación embebida

---

# Características
- Lectura de humedad del suelo en tiempo real
- Activación automática del riego
- Control mediante módulo relé
- Sistema de monitoreo continuo
- Arquitectura modular y escalable
- Compatible con Arduino y otros microcontroladores

---

# Componentes utilizados

| Componente | Cantidad |
|---|---|
| Arduino UNO (o similar) | 1 |
| Sensor de humedad del suelo | 1 |
| Módulo relé de 5V | 1 |
| Mini bomba de agua / electroválvula | 1 |
| Fuente de alimentación | 1 |
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
