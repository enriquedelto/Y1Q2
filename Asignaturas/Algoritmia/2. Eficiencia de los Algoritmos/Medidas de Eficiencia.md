---
tags:
  - asignaturas/algoritmia/eficiencia_de_los_algoritmos
---
Existen dos estrategias para comparar la eficiencia de algoritmos diseñados para resolver el mismo problema:
- **Análisis empírico:** Consiste en programar ambos algoritmos y ejecutarlos en un ordenador con un juego de datos de prueba, para ver lo que tarda cada uno.
- **Análisis matemático:** Consiste en determinar matemáticamente la cantidad de recursos que necesita el algoritmo en función de los datos de entrada.

En el análisis matemático existen dos formas de medir los recursos consumidos:
- **Eficiencia temporal** (también llamada complejidad temporal). Indica lo rápido que el algoritmo ejecuta. Dado que puede variar en función del número de cores que pueden trabajar en paralelo, vamos a suponer que existe un solo core.
- **Eficiencia espacial** (también llamada complejidad espacial). Indica la cantidad de memoria que el algoritmo consume. Dentro de esta memoria no se incluye la memoria necesaria para representar los datos de entrada y de salida.

La experiencia ha demostrado que, para la mayoría de los problemas, la selección
del algoritmo que se va a usar influye mucho más en la eficiencia temporal que en la
espacial. Por ello, nos centraremos en estudiar la eficiencia temporal, pero teniendo
en cuenta que el mismo framework de análisis se puede usar para estudiar la
eficiencia espacial.