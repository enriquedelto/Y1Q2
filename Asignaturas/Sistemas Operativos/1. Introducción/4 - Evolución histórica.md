---
tags:
  - asignaturas/sistemas_operativos/introducción
---
En las primeras computadoras, que no tenían sistema operativo, cada programa necesitaba la más detallada especificación del hardware para [ejecutarse](https://es.wikipedia.org/wiki/Ejecutable "Ejecutable") correctamente y desarrollar [tareas](https://es.wikipedia.org/wiki/Hilo_$inform%C3%A1tica$ "Hilo (informática)") estándares, y sus propios [drivers](https://es.wikipedia.org/wiki/Controlador_de_dispositivos "Controlador de dispositivos") para los dispositivos [periféricos](https://es.wikipedia.org/wiki/Perif%C3%A9ricos "Periféricos") como [impresoras](https://es.wikipedia.org/wiki/Impresoras "Impresoras") y lectores de [tarjetas perforadas](https://es.wikipedia.org/wiki/Tarjeta_perforada "Tarjeta perforada"). El incremento de la complejidad del hardware y de los programas de aplicaciones finalmente hicieron del sistema operativo una necesidad.

Los primeros sistemas operativos fueron desarrollados por cada usuario para el uso de su propia [computadora central](https://es.wikipedia.org/wiki/Computadora_central "Computadora central"), y es en 1956 cuando la [General Motors](https://es.wikipedia.org/wiki/General_Motors "General Motors") desarrolla lo que es hoy considerado el primer sistema, el [GM-NAA I/O](https://es.wikipedia.org/wiki/GM-NAA_I/O "GM-NAA I/O"), para su [IBM 704](https://es.wikipedia.org/wiki/IBM_704 "IBM 704").

## La década de 1940

En esta primera generación, los computadores como el ENIAC (1945), Colossus (1944) y el Mark I se programaban directamente mediante conexiones físicas en tableros y ajustes manuales en la consola. La interacción se realizaba a través de micro interruptores y otros dispositivos de control directo, lo que limitaba la ejecución a tareas secuenciales y la participación exclusiva de un programador a la vez.

## La década de 1950 ([Sistema Batch](https://es.wikipedia.org/wiki/Procesamiento_por_lotes))

Con la introducción de tarjetas perforadas y cintas magnéticas, la aparición del transistor permitió que las máquinas pasaran de ser manipuladas directamente por el usuario a contar con un sistema básico de control, conocido como el **monitor residente**.  
- **Monitor residente:**  
  Se encargaba de cargar programas desde tarjetas o cintas a la memoria y ejecutarlos en secuencia. La optimización de los intervalos entre la finalización de un trabajo y la carga del siguiente fue uno de los primeros retos a resolver.  
- **Almacenamiento temporal:**  
  Técnicas como el [buffering](https://es.wikipedia.org/wiki/Buffer_de_datos "Buffer de datos") y el [spooling](https://es.wikipedia.org/wiki/Spooling "Spooling") permitieron que mientras se realizaban operaciones de entrada/salida, se preparara simultáneamente la siguiente tarea, reduciendo los tiempos muertos del procesador.

Esta generación, parte de la **segunda generación** (1955-1965) según estudios de [Tanenbaum](https://es.wikipedia.org/wiki/Tanenbaum) y [Stallings](https://es.wikipedia.org/wiki/Stallings), marcó el inicio de la separación entre el usuario y el manejo directo del hardware, al introducir lenguajes de programación como FORTRAN y ensamblador.

## La década de 1960

El avance en la fabricación de circuitos integrados impulsó una nueva era en la computación:
- **Multiprogramación:**  
  La [memoria principal](https://es.wikipedia.org/wiki/Memoria_principal "Memoria principal") empezó a albergar múltiples programas de usuario. La CPU, al detectar operaciones de E/S lentas, cambiaba a la ejecución de otro programa. Este mecanismo permitía aprovechar de forma óptima el tiempo del procesador, reduciendo los tiempos de espera y aumentando la eficiencia.  
- **Tiempo compartido:**  
  Con la aparición del [tiempo compartido](https://es.wikipedia.org/wiki/Tiempo_compartido_$inform%C3%A1tica$ "Tiempo compartido (informática)"), se dio un paso más hacia la interactividad, permitiendo que varios usuarios con sus respectivos [terminales](https://es.wikipedia.org/wiki/Terminal_de_computadora "Terminal de computadora") accedieran simultáneamente a la máquina. Cada usuario recibía un "cuanto" de tiempo de procesamiento, simulando un entorno en paralelo y sentando las bases de la interactividad moderna.

Esta etapa, considerada parte de la **tercera generación** (1965-1980), consolidó técnicas que permitieron que, a pesar de ser sistemas de procesamiento por lotes, se optimizara el uso de recursos y se abriera el camino para sistemas operativos más interactivos y robustos.

## La década de 1970

La aparición de sistemas operativos como el [Atlas Supervisor](https://es.wikipedia.org/wiki/Atlas_Supervisor "Atlas Supervisor"), el [OS/360](https://es.wikipedia.org/wiki/OS/360 "OS/360") y posteriormente **UNIX** y **Multics** marcaron un hito en la historia de los sistemas operativos.  
- **UNIX** destacó por estar escrito en un lenguaje de alto nivel, lo que facilitó su portabilidad y evolución, y por introducir conceptos que hoy forman parte del diseño de la mayoría de los SO modernos.  
- Paralelamente, surgieron nuevos paradigmas como la [programación lógica](https://es.wikipedia.org/wiki/Programaci%C3%B3n_l%C3%B3gica "Programación lógica") y la [orientación a objetos](https://es.wikipedia.org/wiki/Orientaci%C3%B3n_a_objetos "Orientación a objetos") con lenguajes como [Smalltalk](https://es.wikipedia.org/wiki/Smalltalk "Smalltalk").

## La década de 1980

El auge de los circuitos LSI y la popularización de los microprocesadores transformaron la computación:
- **Computadores personales:**  
  Los microcomputadores, al ser más económicos, permitieron que la computación se extendiera al hogar. Los sistemas operativos de esta época, como [MS-DOS](https://es.wikipedia.org/wiki/MS-DOS "MS-DOS"), se diseñaron para ser amigables, introduciendo menús e [interfaces gráficas](https://es.wikipedia.org/wiki/Interfaz_gr%C3%A1fica "Interfaz gráfica").  
- **Redes y sistemas operativos distribuidos:**  
  A mediados de los 80, el desarrollo de redes de computadoras personales impulsó la creación de sistemas operativos capaces de operar en entornos conectados, lo que facilitó la colaboración y el intercambio de información.

## La evolución según generaciones

Según el temario estudiado (Universidad Internacional de La Rioja), la evolución histórica de los sistemas operativos se puede resumir en las siguientes generaciones:

- **Primera generación (1945-1955):**  
  Computadores basados en tubos al vacío, programados directamente mediante conexiones físicas y sin lenguajes de programación estandarizados.  
- **Segunda generación (1955-1965):**  
  Introducción del transistor y la consolidación de técnicas de procesamiento por lotes (sistemas batch) mediante tarjetas perforadas y cintas magnéticas. Se inicia el concepto de mainframe y el sistema monitor rudimentario.  
- **Tercera generación (1965-1980):**  
  Uso de circuitos integrados que permiten la multiprogramación y el tiempo compartido, optimizando el uso del procesador y permitiendo la interacción de múltiples usuarios, a pesar de seguir operando en gran parte como sistemas de procesamiento por lotes.  
- **Cuarta generación (1980 en adelante):**  
  El auge de los computadores personales y la integración a gran escala de transistores en circuitos LSI hacen posible el desarrollo de sistemas operativos con interfaces gráficas, mayor interactividad y soporte para redes y sistemas distribuidos.

Esta evolución histórica muestra cómo la necesidad de optimizar el uso de recursos y facilitar la interacción con el hardware llevó a la creación y mejora progresiva de los sistemas operativos, transformándolos en la pieza fundamental que conocemos hoy en día.

Para profundizar más sobre estos temas, se recomienda revisar las notas de [[Gestión de memoria]], [[Gestión de procesos]] y [[Sistema Operativo]].
