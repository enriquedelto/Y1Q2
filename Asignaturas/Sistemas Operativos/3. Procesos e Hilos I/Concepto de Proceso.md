---
tags:
  - asignaturas/sistemas_operativos/procesos_e_hilos_I
---
3.2. Concepto de proceso
Informalmente, un proceso no es más que un programa en ejecución (Silberschatz et
al., 2011, p. 106). El término «proceso» se utilizó por primera vez por los diseñadores
del sistema Multics en los años 60. En primera aproximación podemos entender un
proceso como (Stallings, 2005, p. 68):
Una instancia de un programa que se ejecuta en un computador.
Una unidad de actividad caracterizada por la ejecución de una secuencia de
instrucciones, un estado actual y un conjunto de recursos del sistema asociados.
También podemos pensar en un proceso como una entidad que se puede asignar y
ejecutar en un procesador, que está formada por código de programa y un conjunto
de datos asociados a ese proceso.
Un programa es una entidad pasiva que se materializa en un archivo (o
archivo ejecutable) que contiene una lista de instrucciones. Un
programa se convierte en un proceso cuando el archivo ejecutable es
cargado en memoria. Un proceso es una entidad activa que tiene
asociado un contador de programa y otra información de contexto.A-->B

El contexto de ejecución
La multiprogramación permite que tanto el procesador como otros recursos de la
máquina, como los dispositivos de E/S, puedan ser compartidos por varios procesos
maximizando su aprovechamiento. Como estudiaremos con mayor profundidad, esto
es posible gracias a dos herramientas fundamentales (Stallings, 2005, p. 68):

Las interrupciones. Son señales que el procesador recibe cuando se produce un
evento importante. Por ejemplo, la finalización de una operación de E/S que un
proceso estaba esperando.
La información de contexto de cada proceso, que es indispensable para guardar el
estado de ejecución de un proceso que se ve interrumpido, para más adelante poder
restaurar su ejecución en el mismo punto.
Este último elemento es fundamental para poder monitorizar y controlar la ejecución
simultánea de varios programas en el procesador. Por tanto, podemos considerar
que los tres componentes fundamentales de un proceso son:
Un programa ejecutable.
Los datos asociados a ese programa (variables, buffers, etc.).
El contexto de ejecución del programa.
El contexto de ejecución está separado del propio proceso y contiene toda la
información que el sistema operativo necesita para gestionarlo y el procesador
necesita para ejecutarlo. Esta idea se representa en la Figura 1 que ofrece una visión
general del problema de la gestión de procesos:

Existen dos procesos, A y B, alojados en la memoria principal, cada uno con un
bloque que contiene el programa, sus datos y la información de contexto.
Además, el sistema operativo dentro de su espacio de memoria mantiene una lista
de procesos en ejecución. Cada entrada de esta lista contiene un puntero a la
ubicación del bloque de memoria que aloja cada proceso. También se puede
guardar aquí total o parcialmente el contexto de ejecución de cada proceso.
Dentro del procesador, el índice de procesos contiene el identificador del proceso
que actualmente se ejecuta, dentro de la lista de procesos. El contador de programa
(PC) apunta a la siguiente instrucción que debe ejecutarse. Además, el registro base
contiene la dirección de memoria donde comienza el proceso, y el registro límite el
tamaño de la región ocupada. Así, el contador de programa contiene una dirección
relativa al registro base, de manera que nunca puede superar el valor del registro
límite, garantizando así que no se interfiere en la región de memoria asignada a otro
proceso.
