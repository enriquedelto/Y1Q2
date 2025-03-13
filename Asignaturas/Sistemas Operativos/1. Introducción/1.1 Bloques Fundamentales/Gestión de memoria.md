---
tags:
  - asignaturas/sistemas_operativos/introducción/bloques_fundamentales
---
La [gestión de memoria](https://es.wikipedia.org/wiki/Gesti%C3%B3n_de_memoria "Gestión de memoria") o administración de memoria es el acto de gestionar la [memoria](https://es.wikipedia.org/wiki/Memoria_\(inform%C3%A1tica\) "Memoria (informática)") de un dispositivo informático. El proceso de [asignación de memoria](https://es.wikipedia.org/wiki/Asignaci%C3%B3n_de_memoria "Asignación de memoria") a los programas que la solicitan.[9](https://es.wikipedia.org/wiki/Sistema_operativo#cite_note-10)​

Los sistemas de [memoria virtual](https://es.wikipedia.org/wiki/Memoria_virtual "Memoria virtual") separan las [direcciones de memoria](https://es.wikipedia.org/wiki/Direcci%C3%B3n_de_memoria "Dirección de memoria") utilizadas por un [proceso](https://es.wikipedia.org/wiki/Proceso_\(inform%C3%A1tica\) "Proceso (informática)") de las direcciones físicas reales, permitiendo la separación de procesos e incrementando la cantidad efectiva de [memoria de acceso aleatorio](https://es.wikipedia.org/wiki/Memoria_de_acceso_aleatorio "Memoria de acceso aleatorio") utilizando la [paginación](https://es.wikipedia.org/wiki/Paginaci%C3%B3n_de_memoria "Paginación de memoria"). La calidad de la gestión de la memoria es crucial para las prestaciones del sistema.

El [recolector de basura](https://es.wikipedia.org/wiki/Recolector_de_basura "Recolector de basura") es la asignación y liberación automática de los recursos de memoria para un programa. La implementación suele ser a nivel del lenguaje de programación en contraposición a la gestión manual de memoria, que asigna y libera los recursos de memoria de una computadora de forma explícita.

La administración de memoria se refiere a los distintos métodos y operaciones que se encargan de obtener la máxima utilidad de la [memoria](https://es.wikipedia.org/wiki/Memoria_\(inform%C3%A1tica\) "Memoria (informática)"), organizando los procesos y programas que se ejecutan de manera tal que se aproveche de la mejor manera posible el espacio disponible.

Para poder lograrlo, la operación principal que realiza es trasladar la información que deberá ser ejecutada por la [unidad central de procesamiento](https://es.wikipedia.org/wiki/Unidad_central_de_procesamiento "Unidad central de procesamiento") o procesador, a la [memoria principal](https://es.wikipedia.org/wiki/Memoria_principal "Memoria principal"). Actualmente esta administración se conoce como [memoria virtual](https://es.wikipedia.org/wiki/Memoria_virtual "Memoria virtual"), porque no es la memoria física del procesador sino una memoria virtual que la representa. Entre algunas ventajas, esta memoria permite que el sistema cuente con una memoria más extensa teniendo la misma memoria real, por lo que esta se puede utilizar de manera más eficiente. Y por supuesto, que los programas que son utilizados no ocupen lugar innecesario.

Las técnicas que existen para la carga de programas en la memoria son: partición fija, que es la división de la memoria libre en varias partes (de igual o distinto tamaño) y la partición dinámica, que son las particiones de la memoria en tamaños que pueden ser variables, según la cantidad de memoria que necesita cada proceso.

Entre las principales operaciones que desarrolla la administración de memoria se encuentran la reubicación, que consiste en trasladar procesos activos dentro y fuera de la memoria principal para maximizar la utilización del procesador; la protección, mecanismos que protegen los procesos que se ejecutan de interferencias de otros procesos; uso compartido de códigos y [datos](https://es.wikipedia.org/wiki/Datos "Datos"), con lo que el mecanismo de protección permite que ciertos procesos de un mismo programa que comparten una tarea tengan memoria en común.

## Requisitos

Los sistemas de gestión de memoria de [sistemas operativos multitarea](https://es.wikipedia.org/wiki/Multitarea "Multitarea") normalmente tratan con las siguientes tareas.

### Reasignación

En los sistemas con memoria virtual, los programas durante su ejecución pueden salir por un tiempo de la memoria y luego regresar, de modo que no pueden colocarse en el lugar que ocupaban previamente. Por ello debe ser posible que residan en diferentes partes de la memoria en diferentes momentos. Así, la gestión de memoria en el sistema operativo debe ser capaz de trasladar los programas en memoria y manejar referencias a la memoria y las direcciones en el código del programa para que siempre apunten a la ubicación correcta. La unidad de gestión de memoria virtual también debe hacer frente a la concurrencia.

### Protección

Artículo principal: _[Protección de memoria](https://es.wikipedia.org/wiki/Protecci%C3%B3n_de_memoria "Protección de memoria")_

Los procesos no deberían poder referenciar la memoria de otros procesos sin permiso, para evitarlo existe la [protección de memoria](https://es.wikipedia.org/wiki/Protecci%C3%B3n_de_memoria "Protección de memoria"), que evita que código malicioso o erróneo de un programa interfiera con la operación de otros programas en ejecución.

### Memoria compartida

Aunque la memoria utilizada por diferentes procesos suele estar protegida, algunos procesos puede que sí tengan que compartir información y, para ello, han de acceder la misma sección de memoria. La memoria compartida es una de las técnicas más rápidas para posibilitar la [comunicación entre procesos](https://es.wikipedia.org/wiki/Comunicaci%C3%B3n_entre_procesos "Comunicación entre procesos").

### Organización lógica

Los programas a menudo están organizados en módulos, algunos de los cuales pueden ser compartidos por diferentes programas, algunos son de solo-lectura y otros contienen datos que se pueden modificar. Se escriben y se compilan independientemente. La gestión de memoria es responsable de manejar esta organización lógica, que se contrapone al espacio de direcciones físicas lineales. Una forma de lograrlo es mediante la [segmentación de memoria](https://es.wikipedia.org/wiki/Segmentaci%C3%B3n_de_memoria "Segmentación de memoria").

### Organización física

La memoria suele dividirse en un almacenamiento primario de alta velocidad y uno secundario de menor velocidad. La gestión de memoria del sistema operativo se ocupa de trasladar la información entre estos dos niveles de memoria.