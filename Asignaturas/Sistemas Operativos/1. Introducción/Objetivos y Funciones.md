---
tags:
  - asignaturas/sistemas_operativos/introducción
---
## Objetivos de los Sistemas Operativos

Los sistemas operativos tienen como finalidad principal gestionar de manera óptima los recursos de hardware y facilitar la interacción entre el usuario y la máquina. Podemos distinguir tres objetivos fundamentales (Stallings, 2012, p. 48):

- **Facilitar el uso del computador:**  
  El sistema operativo actúa como un intermediario entre el usuario y la máquina, ofreciendo una interfaz amigable que oculta la complejidad del hardware. Esta función se apoya en una jerarquía de capas en la que interactúan distintos tipos de usuarios:
  - **Usuarios finales:** Utilizan programas de aplicación para resolver tareas específicas, tanto en ámbitos laborales como de ocio.
  - **Programadores:** Además de usar aplicaciones, aprovechan herramientas de desarrollo (editores, compiladores, depuradores) ofrecidas por el sistema, sin necesidad de conocer a fondo el hardware.
  - **Diseñadores del sistema operativo:** Requieren un conocimiento profundo del hardware para desarrollar soluciones que gestionen los recursos de forma eficiente.  

- **Favorecer el uso eficiente de los recursos:**  
  El sistema operativo es responsable de repartir y administrar los recursos limitados (memoria, CPU, dispositivos de E/S, almacenamiento) entre todos los procesos que se ejecutan en un momento dado. Esto incluye:
  - La gestión compartida de la memoria principal, en la que el kernel y el hardware de gestión colaboran para mantener los programas en ejecución.
  - La asignación de tiempos de CPU a cada proceso, permitiendo que múltiples aplicaciones se ejecuten de forma concurrente.
  - La regulación del acceso a dispositivos de E/S y ficheros almacenados en disco.  

- **Evolucionar incorporando nuevas funcionalidades:**  
  La capacidad de adaptación y evolución del sistema operativo permite:
  - **Mantenimiento correctivo:** Corrección de errores y vulnerabilidades identificadas a lo largo del tiempo.
  - **Mantenimiento perfectivo:** Introducción de nuevos servicios y mejoras en respuesta a las necesidades de los usuarios.
  - **Mantenimiento adaptativo:** Soporte para nuevos tipos de hardware y aplicaciones, ampliando las posibilidades del sistema sin comprometer los servicios ya prestados.

---

## Funciones y Servicios Principales

Para alcanzar estos objetivos, los sistemas operativos ofrecen una amplia gama de funciones y servicios que se pueden agrupar en dos grandes áreas: la gestión de recursos y la provisión de un entorno de uso adecuado.

### Gestión Eficiente de Recursos

1. **Gestión de la memoria RAM:**  
   - Administración de la memoria principal mediante técnicas como paginación, segmentación y asignación dinámica.
   - Liberación y reciclaje de la memoria ocupada por procesos finalizados o inactivos.

2. **Administración del procesador:**  
   - Utilización de algoritmos de planificación (Round-Robin, prioridades, planificación por lotes, multitarea cooperativa y preemptiva) para distribuir equitativamente el tiempo de CPU entre los procesos.

3. **Gestión de dispositivos periféricos y E/S:**  
   - Manejo de la comunicación entre aplicaciones y dispositivos a través de controladores (drivers).
   - Uso de mecanismos como interrupciones, buffering y acceso directo a memoria (DMA) para optimizar operaciones de entrada/salida.

4. **Gestión interna de datos para el control operativo:**  
   - Mantenimiento de estructuras críticas como la tabla de procesos, la tabla de archivos abiertos, índices de sistemas de archivos y registros de rendimiento.
   - Monitoreo constante a través de logs, control de errores y métricas para la prevención y recuperación ante fallos.

### Provisión de Servicios y Entorno de Uso

1. **Entorno de ejecución para programas:**  
   - Planificación y coordinación del uso de la CPU y la memoria.
   - Organización de procesos y orquestación de operaciones de E/S hacia dispositivos y ficheros.

2. **Servicios y utilidades para el desarrollo de programas:**  
   - Herramientas de desarrollo como editores, compiladores y depuradores, que facilitan la creación de aplicaciones sin necesidad de conocer en profundidad el hardware.

3. **Gestión de dispositivos de E/S:**  
   - Provisión de una interfaz de programación uniforme para interactuar con diversos dispositivos, permitiendo la integración y el manejo coherente de periféricos.

4. **Gestión del acceso a ficheros:**  
   - Facilita la manipulación de la información almacenada en ficheros, controlando el acceso en sistemas multiusuario mediante técnicas como listas de control de acceso (ACL) y cifrado.

5. **Control de acceso y seguridad del sistema:**  
   - Implementación de mecanismos de autenticación y autorización (usuarios, grupos, permisos).
   - Uso de técnicas de auditoría, autenticación multifactor y cifrado para salvaguardar la integridad y la privacidad de la información.

6. **Detección y gestión de errores:**  
   - Identificación temprana de errores durante la ejecución del sistema.
   - Aplicación de respuestas automáticas para minimizar el impacto y permitir la continuidad operativa.

7. **Contabilidad y auditoría:**  
   - Registro y análisis del uso de recursos para anticipar necesidades, optimizar el sistema e incluso facturar en entornos compartidos.

8. **Administración avanzada del sistema de archivos:**  
   - Gestión completa de la creación, eliminación, búsqueda y asignación de bloques en archivos y directorios.
   - Implementación de sistemas de archivos robustos que soporten journaling, snapshots y cifrado para prevenir la corrupción de datos y facilitar la recuperación ante fallos.

---

Esta nota consolidada integra tanto la visión tradicional de los objetivos y funciones de los sistemas operativos como las aportaciones del temario de Stallings, ofreciendo un panorama completo que abarca desde la eficiencia en el uso de recursos hasta la evolución y ampliación de las capacidades del sistema operativo.