---
tags:
  - asignaturas/sistemas_operativos/introducción
---
Un computador es un sistema complejo. Si los desarrolladores de aplicaciones tuvieran que conocer en detalle el funcionamiento de todas estas partes, sería muy difícil que escribieran código funcional de manera eficiente.

Afortunadamente, los computadores disponen de una capa de software, conocida como **[[Sistema Operativo]]**, que ofrece a las aplicaciones —y a los desarrolladores— un modelo simplificado de la máquina. Este software se encarga de la administración de los recursos hardware, permitiendo a los programas operar sin tener que lidiar con la complejidad inherente del hardware.

El [[Sistema Operativo]] se ejecuta en **modo [[Kernel]]** o supervisor, lo que le confiere acceso completo al hardware para ejecutar cualquier instrucción soportada por la máquina. En cambio, el resto de las aplicaciones se ejecutan en **modo [[Usuario]]**, y tienen restringido el acceso directo a instrucciones críticas, especialmente aquellas que afectan el control de la máquina o realizan operaciones de [[Entrada/Salida (E/S)]].

Otro componente importante es el programa de **[[Interfaz de Usuario]]**, ya sea una shell de línea de comandos o una interfaz gráfica, que facilita la ejecución de programas de manera cómoda.

---

## Definición y Concepto de Sistema Operativo

Stallings define el sistema operativo como:

> «un programa que controla la ejecución de otros programas y actúa como interfaz entre las aplicaciones y el hardware del computador»  
> *(Stallings, 2012, p. 48)*

El sistema operativo es esencial en cualquier sistema de computación, ya que ofrece el servicio fundamental de gestionar el hardware y de proporcionar una interfaz simplificada para que otros programas puedan acceder a los recursos del sistema.

Así, el [[Sistema Operativo]] cumple dos funciones principales (Tanenbaum, 2009):

1. **Máquina Extendida:**  
   La arquitectura de un computador y el conjunto de instrucciones del lenguaje máquina son complejos. El sistema operativo crea una **[[Máquina Extendida]]** o máquina virtual, más sencilla de manejar, que abstrae la complejidad del hardware. Algunos autores hacen referencia a la **[[Máquina Desnuda]]** para describir un computador sin sistema operativo, resaltando que la máquina en sí no ejecuta acciones por sí sola, sino que requiere de un programa para indicar qué instrucciones ejecutar.

2. **Administrador de Recursos:**  
   Los sistemas operativos modernos permiten la ejecución simultánea de varios programas. Para ello, se debe asignar de manera eficiente los recursos computacionales limitados. La administración de recursos incluye la **multiplexación** tanto en el tiempo (para el procesador) como en el espacio (en la memoria principal o en el almacenamiento secundario). El [[Sistema Operativo]] garantiza que todos los programas tengan acceso a los recursos que necesitan, adoptando un enfoque que va de abajo hacia arriba.

---

## Operaciones de Entrada/Salida

Las operaciones de lectura y escritura en disco, por ejemplo, requieren el uso de comandos básicos como **read** y **write**. Cada uno de estos comandos necesita parámetros específicos (como dirección de bloque, número de sectores por pista, espacio de separación entre sectores, etc.) para realizar la operación correctamente. Además, el chip del dispositivo controlador devuelve información sobre el estado y posibles errores.  
El [[Sistema Operativo]] enmascara esta complejidad ofreciendo una abstracción de alto nivel, permitiendo realizar operaciones de [[E/S]] de manera más sencilla y eficiente.

---

Esta capa de software, el [[Sistema Operativo]], es fundamental para que los desarrolladores puedan crear aplicaciones sin tener que preocuparse por la gestión directa y compleja del hardware. Con ella, se logra un entorno de desarrollo más accesible y eficiente.