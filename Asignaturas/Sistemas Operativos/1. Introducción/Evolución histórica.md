---
tags:
  - asignaturas/sistemas_operativos/introducción
---
En las primeras computadoras, que no tenían sistema operativo, cada programa necesitaba la más detallada especificación del hardware para [ejecutarse](https://es.wikipedia.org/wiki/Ejecutable "Ejecutable") correctamente y desarrollar [tareas](https://es.wikipedia.org/wiki/Hilo_\(inform%C3%A1tica\) "Hilo (informática)") estándares, y sus propios [drivers](https://es.wikipedia.org/wiki/Controlador_de_dispositivos "Controlador de dispositivos") para los dispositivos [periféricos](https://es.wikipedia.org/wiki/Perif%C3%A9ricos "Periféricos") como [impresoras](https://es.wikipedia.org/wiki/Impresoras "Impresoras") y lectores de [tarjetas perforadas](https://es.wikipedia.org/wiki/Tarjeta_perforada "Tarjeta perforada"). El incremento de la complejidad del hardware y los programas de aplicaciones finalmente hicieron del sistema operativo una necesidad.

Los primeros sistemas operativos fueron desarrollados por cada usuario para el uso de su propia [computadora central](https://es.wikipedia.org/wiki/Computadora_central "Computadora central"),[1](https://es.wikipedia.org/wiki/Historia_de_los_sistemas_operativos#cite_note-bozemanlugHistoryOfLinux-1)​ y es en 1956 que la [General Motors](https://es.wikipedia.org/wiki/General_Motors "General Motors") desarrolla lo que es hoy considerado el primer sistema, el [GM-NAA I/O](https://es.wikipedia.org/wiki/GM-NAA_I/O "GM-NAA I/O"),[2](https://es.wikipedia.org/wiki/Historia_de_los_sistemas_operativos#cite_note-2)​ para su [IBM 704](https://es.wikipedia.org/wiki/IBM_704 "IBM 704").[3](https://es.wikipedia.org/wiki/Historia_de_los_sistemas_operativos#cite_note-CHM-1956-SW-3)​

## La década de 1940

Se accedía directamente a la consola de la computadora desde la cual se actuaba sobre una serie de micro interruptores que permitían introducir directamente el programa en la memoria de la computadora.

## La década de 1950 ([Sistema Batch](https://es.wikipedia.org/wiki/Procesamiento_por_lotes))

Con el objetivo de facilitar la interacción entre persona y computadora, los sistemas operativos hacen una aparición discreta y bastante simple, con conceptos tales como el monitor residente y el almacenamiento temporal.

### [Monitor residente](https://es.wikipedia.org/wiki/Monitor_residente)

Su funcionamiento era bastante simple, se limitaba a cargar programas a la memoria, leyéndolos de una cinta o de [tarjetas perforadas](https://es.wikipedia.org/wiki/Tarjeta_perforada "Tarjeta perforada"), y ejecutarlos. El problema era encontrar una forma de optimizar el tiempo entre la retirada de un trabajo y el montaje del siguiente.

### Almacenamiento temporal

Su objetivo era disminuir el tiempo de carga de los programas, haciendo simultánea la carga del programa o la salida de datos con la ejecución de la siguiente tarea. Para ello se utilizaban dos técnicas, el _[buffering](https://es.wikipedia.org/wiki/Buffer_de_datos "Buffer de datos")_ y el _[spooling](https://es.wikipedia.org/wiki/Spooling "Spooling")_.

## La década de 1960

Con la aparición del [circuito integrado](https://es.wikipedia.org/wiki/Circuito_integrado "Circuito integrado") la mayoría orientados a seguir incrementando el potencial de los ordenadores. Para ello se utilizaban técnicas de lo más diversas.

### Sistema operativo multiprogramación

En un sistema "multiprogramado" la [memoria principal](https://es.wikipedia.org/wiki/Memoria_principal "Memoria principal") alberga a más de un programa de usuario. La [CPU](https://es.wikipedia.org/wiki/CPU "CPU") ejecuta instrucciones de un programa, cuando el que se encuentra en ejecución realiza una operación de E/S; en lugar de esperar a que termine la operación de E/S, se pasa a ejecutar otro programa. Si este realiza, a su vez, otra operación de E/S, se mandan las órdenes oportunas al controlador, y pasa a ejecutarse otro. De esta forma es posible, teniendo almacenado un conjunto adecuado de tareas en cada momento, utilizar de manera óptima los recursos disponibles.

### Tiempo compartido

Artículo principal: _[Tiempo compartido](https://es.wikipedia.org/wiki/Tiempo_compartido_\(inform%C3%A1tica\) "Tiempo compartido (informática)")_

En este punto tenemos un sistema que hace buen uso de la electrónica disponible, pero adolece la falta de [interactividad](https://es.wikipedia.org/wiki/Interactividad "Interactividad"); para conseguirla debe convertirse en un sistema [multiusuario](https://es.wikipedia.org/wiki/Multiusuario "Multiusuario"), en el cual existen varios usuarios con un [terminal](https://es.wikipedia.org/wiki/Terminal_de_computadora "Terminal de computadora") en línea, utilizando el modo de operación de [tiempo compartido](https://es.wikipedia.org/wiki/Tiempo_compartido_\(inform%C3%A1tica\) "Tiempo compartido (informática)"). En estos sistemas igual que en la [multiprogramación](https://es.wikipedia.org/wiki/Multiprogramaci%C3%B3n "Multiprogramación"). Pero, a diferencia de esta, cuando un programa lleva cierto tiempo ejecutándose el sistema operativo lo detiene para que se ejecute otra aplicación.

### Tiempo real

Estos sistemas se usan en entornos donde se deben aceptar y procesar en tiempos muy breves un gran número de sucesos, en su mayoría externos al ordenador. Si el sistema no respeta las restricciones de tiempo en las que las operaciones deben entregar su resultado se dice que ha fallado. El tiempo de respuesta a su vez debe servir para resolver el problema o hecho planteado. El procesamiento de archivos se hace de una forma continua, pues se procesa el archivo antes de que entre el siguiente, sus primeros usos fueron y siguen siendo en telecomunicaciones.

### Multiprocesador

Diseño que no se encuentra en ordenadores monoprocesador. Estos problemas derivan del hecho de que dos programas pueden ejecutarse simultáneamente y, potencialmente, pueden interferirse entre sí. Concretamente, en lo que se refiere a las lecturas y escrituras en memoria. Existen dos arquitecturas que resuelven estos problemas:

La arquitectura [NUMA](https://es.wikipedia.org/wiki/NUMA "NUMA"), donde cada procesador tiene acceso y control exclusivo a una parte de la memoria; la arquitectura [SMP](https://es.wikipedia.org/wiki/SMP "SMP"), donde todos los procesadores comparten toda la [memoria](https://es.wikipedia.org/wiki/Memoria_\(inform%C3%A1tica\) "Memoria (informática)"). Esta última debe lidiar con el problema de la [coherencia de caché](https://es.wikipedia.org/wiki/Coherencia_de_cach%C3%A9 "Coherencia de caché"). Cada microprocesador cuenta con su propia memoria caché local. De manera que cuando un microprocesador escribe en una dirección de memoria, lo hace únicamente sobre su copia local en caché. Si otro microprocesador tiene almacenada la misma dirección de memoria en su caché, resultará que trabaja con una copia obsoleta del dato almacenado.

## La década de 1970

### Sistemas operativos desarrollados

Además del [Atlas Supervisor](https://es.wikipedia.org/wiki/Atlas_Supervisor "Atlas Supervisor") y el [OS/360](https://es.wikipedia.org/wiki/OS/360 "OS/360"), los años 1970 marcaron el inicio de UNIX, a mediados de los 70 aparece [Multics](https://es.wikipedia.org/wiki/Multics "Multics"), sistema operativo multiusuario - multitarea desarrollado por los laboratorios Bell de [AT&T](https://es.wikipedia.org/wiki/AT%26T "AT&T") y [Unix](https://es.wikipedia.org/wiki/Unix "Unix"), convirtiéndolo en uno de los pocos SO escritos en un lenguaje de alto nivel. En el campo de la [programación lógica](https://es.wikipedia.org/wiki/Programaci%C3%B3n_l%C3%B3gica "Programación lógica") se dio a luz la primera implementación de [Prolog](https://es.wikipedia.org/wiki/Prolog "Prolog"), y en la revolucionaria [orientación a objetos](https://es.wikipedia.org/wiki/Orientaci%C3%B3n_a_objetos "Orientación a objetos") con [Smalltalk](https://es.wikipedia.org/wiki/Smalltalk "Smalltalk").

### Inconvenientes de los Sistemas operativos

Se trataba de sistemas grandes, complejos y costosos, pues antes no se había construido nada similar y muchos de los proyectos desarrollados terminaron con costos muy por encima del presupuesto y mucho después de lo que se marcaba como fecha de la finalización. Además, aunque formaban una capa entre el hardware y el usuario, este debía conocer un complejo lenguaje de control para realizar sus trabajos. Otro de los inconvenientes es el gran consumo de recursos que ocasionaban, debido a los grandes espacios de memoria principal y secundaria ocupados, así como el tiempo de procesador consumido. Es por esto que se intentó hacer hincapié en mejorar las técnicas ya existentes de multiprogramación y tiempo compartidos.

## La década de 1980

Con la creación de los circuitos LSI (integración a gran escala), chips que contenían miles de [transistores](https://es.wikipedia.org/wiki/Transistores "Transistores") en un centímetro cuadrado de silicio, empezó el auge de los ordenadores personales. En éstos se dejó un poco de lado el rendimiento y se buscó más que el sistema operativo fuera amigable, surgiendo menús, e [interfaces gráficas](https://es.wikipedia.org/wiki/Interfaz_gr%C3%A1fica "Interfaz gráfica"). Esto reducía la rapidez de las aplicaciones, pero se volvían más prácticos y simples para los usuarios. En esta época, siguieron utilizándose lenguajes ya existentes, como [Smalltalk](https://es.wikipedia.org/wiki/Smalltalk "Smalltalk") o [C](https://es.wikipedia.org/wiki/C_\(lenguaje_de_programaci%C3%B3n\) "C (lenguaje de programación)"), y nacieron otros nuevos, de los cuales se podrían destacar: [C++](https://es.wikipedia.org/wiki/C%2B%2B "C++") y [Eiffel](https://es.wikipedia.org/wiki/Eiffel_\(lenguaje_de_programaci%C3%B3n\) "Eiffel (lenguaje de programación)") dentro del paradigma de la orientación a objetos, y [Haskell](https://es.wikipedia.org/wiki/Haskell "Haskell") y [Miranda](https://es.wikipedia.org/wiki/Miranda_\(lenguaje_de_programaci%C3%B3n\) "Miranda (lenguaje de programación)") en el campo de la [programación declarativa](https://es.wikipedia.org/wiki/Programaci%C3%B3n_declarativa "Programación declarativa"). Un avance importante que se estableció a mediados de la década de 1980 fue el desarrollo de redes de computadoras personales que corrían sistemas operativos en red y sistemas operativos distribuidos. En esta escena, dos sistemas operativos eran los mayoritarios: [MS-DOS](https://es.wikipedia.org/wiki/MS-DOS "MS-DOS") (Micro Soft Disk Operating System), escrito por [Microsoft](https://es.wikipedia.org/wiki/Microsoft "Microsoft") para [IBM PC](https://es.wikipedia.org/wiki/IBM_PC "IBM PC") y otras computadoras que utilizaban la CPU [Intel 8088](https://es.wikipedia.org/wiki/Intel_8088 "Intel 8088") y sus sucesores, y [UNIX](https://es.wikipedia.org/wiki/UNIX "UNIX"), que dominaba en los ordenadores personales que hacían uso del [Motorola 68000](https://es.wikipedia.org/wiki/Motorola_68000 "Motorola 68000").

- **SunOS**:
  - Introdujo el sistema de ficheros virtual (VFS), permitiendo que varios tipos de sistemas de archivos coexistieran bajo una misma estructura jerárquica.
  - Desarrolló NFS (Network File System), fundamental para compartir archivos en redes.

- **MS-DOS**:
  - Popularizó el sistema operativo en computadoras personales basadas en la arquitectura Intel.
  - Introdujo una estructura simple de archivos y directorios que sentó las bases del estándar posterior FAT.

- **Mac OS (Macintosh)**:
  - Pionero en popularizar la interfaz gráfica de usuario (GUI) con iconos, ventanas y menús.
  - Introdujo el ratón como dispositivo estándar de entrada en la informática personal.

- **AmigaOS**:
  - Innovador en la multitarea por apropiación (preemptive multitasking) en ordenadores personales.
  - Introdujo el uso eficiente de hardware multimedia, gráficos avanzados y audio integrado.

- **OS/2**:
  - Aportó multitarea real, multitarea preemptiva y un sistema robusto de protección de memoria.
  - Se anticipó al soporte extendido de redes integradas en sistemas operativos personales.

## La década de 1990

- **BeOS**:
  - Introdujo un enfoque hacia el rendimiento multimedia mediante multitarea eficiente y rápida respuesta del sistema operativo en tiempo real.
  - Destacó por su arquitectura basada en threads (hilos) desde su núcleo.

- **GNU/Linux**:
  - Revolucionó el concepto de sistema operativo libre y de código abierto.
  - Aportó estabilidad, seguridad mediante permisos rigurosos y capacidades avanzadas para servidores, gracias al modelo de desarrollo abierto y modular.

- **Solaris**:
  - Introdujo características avanzadas como ZFS (en versiones posteriores), DTrace para monitoreo de rendimiento y soporte a multiprocesamiento simétrico (SMP) eficiente.
  - Contribuyó con estándares robustos de UNIX y optimización para estaciones de trabajo y servidores.

- **Windows NT**:
  - Primera implementación sólida de Microsoft con multitarea preemptiva completa, protección robusta de memoria y estabilidad del sistema.
  - Introdujo arquitectura híbrida entre kernel monolítico y micronúcleo, diferenciándose de Windows basado en DOS.

- **FreeBSD**:
  - Destacó en redes, rendimiento, y seguridad, siendo una alternativa UNIX libre.
  - Proporcionó un sistema sólido de gestión de memoria y acceso eficiente a la red mediante pila TCP/IP optimizada.

- **ReactOS**:
  - Proyecto orientado a lograr compatibilidad con aplicaciones de Windows NT mediante ingeniería inversa, ilustrando la viabilidad del desarrollo abierto compatible con sistemas privativos.

- **FreeDOS**:
  - Aportó un sistema operativo compatible con MS-DOS libre, mostrando la viabilidad de mantener compatibilidad retro con hardware antiguo y sistemas embebidos.

## la década de 2000

- **SymbOS**:
  - Ejemplo excepcional de optimización, mostrando que sistemas operativos gráficos pueden ejecutarse con fluidez sobre hardware limitado, promoviendo el concepto de eficiencia extrema del código.

- **MorphOS**:
  - Integró un micronúcleo modular (Quark), favoreciendo la modularidad y la estabilidad en sistemas tipo escritorio con procesadores PowerPC.

- **Darwin (Mac OS X)**:
  - Combinó un núcleo híbrido (XNU), combinando microkernel Mach y componentes BSD, mejorando estabilidad, multitarea preemptiva avanzada y gestión segura de memoria protegida.
  - Se convirtió en el estándar moderno de estabilidad y rendimiento para los sistemas Mac posteriores.

- **Haiku**:
  - Continuó con la filosofía técnica de BeOS, destacando en multitarea fluida, respuesta rápida e integración multimedia eficiente, manteniendo viva la innovación en sistemas ligeros y rápidos.

- **OpenSolaris**:
  - Aportó al mundo del software libre tecnologías avanzadas como ZFS (un sistema de archivos que garantizaba integridad y capacidad de almacenamiento extremo), y DTrace para depuración y análisis avanzado en tiempo real.

## La década de 2010

- **Illumos**:
  - Mantuvo y mejoró tecnologías heredadas de OpenSolaris (ZFS, DTrace), fortaleciendo la base técnica de sistemas operativos UNIX libres orientados a rendimiento y estabilidad.

- **OpenIndiana**:
  - Consolidó la comunidad alrededor del código de OpenSolaris/Illumos, ofreciendo una plataforma abierta sólida y confiable en entornos críticos y de producción.
