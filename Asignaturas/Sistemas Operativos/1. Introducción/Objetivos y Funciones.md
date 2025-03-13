---
tags:
  - asignaturas/sistemas_operativos/introducción
---

## Objetivos

- **Gestionar eficientemente los recursos hardware del sistema** (memoria, CPU, periféricos, almacenamiento).
- **Proporcionar una interfaz entre el usuario, las aplicaciones y el hardware**, simplificando la interacción y abstrayendo detalles técnicos.
- **Garantizar la seguridad, protección y estabilidad del sistema**, asegurando integridad y privacidad de la información.
- **Optimizar el rendimiento global del sistema**, garantizando rapidez, eficiencia y buena respuesta ante múltiples procesos simultáneos.

## Funciones Principales

Algunas de las funciones principales y técnicas que realiza un sistema operativo son:

1. **Gestión eficiente de memoria RAM:**  
    El sistema operativo administra la memoria principal mediante técnicas como paginación, segmentación y asignación dinámica, garantizando que las aplicaciones reciban la cantidad necesaria de memoria física o virtual. Asimismo, se encarga del reciclaje de memoria, liberando espacios ocupados por procesos que ya han terminado o que han dejado de utilizar determinados bloques de memoria.
2. **Administración del procesador mediante algoritmos de planificación:**  
    Utiliza algoritmos específicos como Round-Robin, prioridades, planificación por lotes o multitarea cooperativa y preemptiva para asignar tiempos de CPU a los diferentes procesos o hilos. Esto garantiza la optimización del rendimiento y el uso equitativo de la CPU entre procesos simultáneos.
3. **Gestión de dispositivos periféricos y E/S:**  
    El sistema operativo maneja la interacción entre las aplicaciones y los dispositivos mediante controladores específicos (drivers) que permiten realizar operaciones de entrada/salida con dispositivos como discos duros, teclados, impresoras, unidades USB y tarjetas gráficas. Gestiona la comunicación a bajo nivel mediante interrupciones, buffering y DMA (acceso directo a memoria).
4. **Gestión interna de datos para control operativo:**  
    Mantiene estructuras críticas como la tabla de procesos, la tabla de archivos abiertos, índices de sistemas de archivos y registros de rendimiento. Además, lleva a cabo monitoreo constante del sistema a través de logs, control de errores, métricas de rendimiento y mecanismos de prevención y recuperación ante fallos.
5. **Control de acceso y seguridad del sistema:**  
    Implementa mecanismos avanzados de autenticación y autorización (usuarios, grupos y permisos), asegurando la privacidad e integridad mediante técnicas como listas de control de acceso (ACL), autenticación multifactor, cifrado de datos y auditoría de actividades de usuario y procesos.
6. **Administración avanzada del sistema de archivos:**  
    El sistema operativo proporciona funcionalidades complejas para gestionar archivos y directorios, incluyendo creación, eliminación, búsqueda eficiente, asignación de bloques, control de accesos concurrentes, prevención de corrupción de datos y recuperación ante fallos mediante sistemas de archivos con journaling, snapshots y cifrado de archivos.

