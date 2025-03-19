---
tags:
  - asignaturas/sistemas_operativos/introducción/bloques_fundamentales/idx
---


> [!example] Asignaturas / Sistemas operativos / Introducción / Bloques fundamentales
> - [[Núcleo del Sistema Operativo (Kernel)]]
> - [[Shell o Intérprete de Comandos]]
> - **Servicios del sistema operativo**
> 	- [[Gestión de comunicaciones y sincronización entre procesos]]
> 	- [[Gestión de Entrada-Salida]]
> 	- [[Gestión de la Seguridad y protección]]
> 	- [[Gestión de memoria]]
> 	- [[Gestión de procesos]]
> 	- [[Gestión del almacenamiento]]
> 	- [[Gestión del sistema de archivos]]
> 
> ^indexof-asignaturas-sistemas-operativos-introducci-n-bloques-fundamentales

Los **bloques fundamentales** de un sistema operativo son los componentes básicos o módulos esenciales que permiten realizar sus principales funciones. Generalmente se consideran los siguientes:

1. **[[Núcleo del Sistema Operativo (Kernel)]]**
   - Es la parte central y fundamental del sistema.
   - Se encarga de comunicarse directamente con el hardware de la máquina.
   - Contiene procesos encargados de la gestión de recursos, el tratamiento de interrupciones y otros mecanismos esenciales para el funcionamiento del sistema.

2. **Servicios del Sistema Operativo**
   - **[[Gestión de procesos]]**
     - Administración y control de procesos e hilos.
     - Planificación y ejecución eficiente de los procesos, que incluyen la generación y gestión de los mismos para ofrecer las funciones al usuario final.
   - **[[Gestión de memoria]]**
     - Administración de la memoria principal (RAM).
     - Asignación, protección y optimización del uso de la memoria, garantizando que los procesos en ejecución dispongan de los recursos necesarios.
   - **Gestión de almacenamiento y del sistema de archivos**
     - **[[Gestión del almacenamiento]]**
       - Administración del espacio en discos y otros medios de almacenamiento secundario.
       - Control de la asignación física de bloques en el dispositivo.
     - **[[Gestión del sistema de archivos]]**
       - Organización lógica y física de archivos.
       - Administración de directorios, ficheros y permisos, facilitando la lectura y escritura de información en el almacenamiento.
   - **[[Gestión de Entrada-Salida]] (E/S)**
     - Control y administración de dispositivos periféricos.
     - Coordinación de las operaciones de entrada/salida para garantizar un acceso ordenado a los recursos hardware.
   - **[[Gestión de comunicaciones y sincronización entre procesos]]**
     - Proporciona mecanismos que permiten a los procesos intercambiar información y coordinarse en la ejecución.
     - Facilita la colaboración entre procesos y ayuda a evitar condiciones de carrera.
   - **[[Gestión de la Seguridad y protección]]**
     - Control de accesos y asignación de privilegios.
     - Garantiza que cada usuario y proceso solo pueda acceder a los recursos que le están permitidos.

1. **Interfaz de Usuario ([[Shell o Intérprete de Comandos]])**
   - Actúa como el medio de comunicación entre el usuario y el sistema operativo.
   - Puede presentarse en forma de interfaces gráficas (GUI) o de texto (CLI), entre otras.
