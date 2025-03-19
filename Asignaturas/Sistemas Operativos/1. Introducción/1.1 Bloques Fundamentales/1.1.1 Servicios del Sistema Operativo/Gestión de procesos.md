---
tags:
  - asignaturas/sistemas_operativos/introducción/bloques_fundamentales/servicios_del_sistema_operativo
---
Un [proceso](https://es.wikipedia.org/wiki/Proceso_\(inform%C3%A1tica\) "Proceso (informática)") es simplemente, un programa en ejecución que necesita recursos para realizar su tarea: [tiempo de CPU](https://es.wikipedia.org/wiki/Tiempo_de_CPU "Tiempo de CPU"), memoria, archivos y dispositivos de E/S. El SO es el responsable de lo siguiente:

- Crear y destruir procesos.
- Parar y reanudar procesos.
- Ofrecer mecanismos para que los procesos puedan comunicarse y se sincronicen.

La gestión de procesos podría ser similar al trabajo de oficina. Se puede tener una lista de tareas a realizar y a estas fijarles prioridades: alta, media, baja, por ejemplo. Debemos comenzar haciendo las tareas de prioridad alta primero y cuando se terminen seguir con las de prioridad media y después las de baja. Una vez realizada la tarea se tacha.

Esto puede traer un problema que las tareas de baja prioridad pueden que nunca lleguen a ejecutarse y permanezcan en la lista para siempre. Para solucionar esto, se puede asignar alta prioridad a las tareas más antiguas.