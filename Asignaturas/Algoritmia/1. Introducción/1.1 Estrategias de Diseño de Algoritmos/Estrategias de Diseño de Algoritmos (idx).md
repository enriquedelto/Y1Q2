---
tags:
  - asignaturas/algoritmia/introducción/estrategias_diseño_algoritmos/idx
---


> [!example] Asignaturas / Algoritmia / Introducción / Estrategias diseño algoritmos
> - [[Algoritmos Golosos (Greedy)]]
> - [[Backtracking]]
> - [[Branch and Bound]]
> - [[Asignaturas/Algoritmia/1. Introducción/1.1 Estrategias de Diseño de Algoritmos/Divide y Conquista|Divide y Conquista]]
> - [[Asignaturas/Algoritmia/1. Introducción/1.1 Estrategias de Diseño de Algoritmos/Introducción y Objetivos|Introducción y Objetivos]]
> - [[Programación Dinámica]]
> - [[Asignaturas/Algoritmia/1. Introducción/1.1 Estrategias de Diseño de Algoritmos/Recursividad|Recursividad]]
> - **Problemas**
> 	- [[Asignaturas/Algoritmia/1. Introducción/1.1 Estrategias de Diseño de Algoritmos/Problemas/Divide y Conquista|Divide y Conquista]]
> 	- [[Ejercicios - Recursividad]]
> 	- **Soluciones**
> 		- [[Asignaturas/Algoritmia/1. Introducción/1.1 Estrategias de Diseño de Algoritmos/Problemas/Soluciones/Recursividad|Recursividad]]
> 
> ^indexof-asignaturas-algoritmia-introducci-n-estrategias-dise-o-algoritmos

A continuación se presenta un desglose detallado de los contenidos para la sección **Estrategias de diseño de algoritmos** dentro de la etiqueta:

---

### 1. Introducción y Objetivos

- **Propósito:**
    - Presentar el concepto de estrategias de diseño de algoritmos y por qué son fundamentales para resolver problemas de manera eficiente.
    - Explicar la importancia de estructurar el proceso de solución de problemas complejos mediante técnicas sistemáticas.
- **Contenidos:**
    - Definición de estrategia de diseño.
    - Objetivos: optimización, claridad en la solución, mejora en el rendimiento y escalabilidad.
- **Ejemplo de aplicación:**
    - Cómo elegir una estrategia adecuada según la naturaleza del problema.

---

### 2. Recursividad

- **Definición:**
    - Técnica en la que una función se llama a sí misma para resolver subproblemas, hasta alcanzar casos base que detienen la recursión.
- **Aspectos clave:**
    - **Caso base:** Condición que finaliza la recursión.
    - **Caso recursivo:** Parte en la que la función se invoca a sí misma con una versión simplificada del problema.
- **Ventajas y consideraciones:**
    - Simplifica la codificación de problemas que tienen estructura autosemejante (por ejemplo, recorrer estructuras de datos jerárquicas).
    - Es esencial garantizar que la recursión converge (evitar recursiones infinitas).
- **Ejemplos típicos:**
    - Cálculo del factorial, secuencia de Fibonacci, búsqueda binaria.

---

### 3. Divide y Conquista

- **Definición:**
    - Estrategia que consiste en dividir el problema original en subproblemas más pequeños y similares entre sí, resolver cada uno de manera independiente y, posteriormente, combinar sus soluciones para obtener la solución final.
- **Fases del proceso:**
    1. **Dividir:** Se parte el problema en partes más manejables.
    2. **Conquistar:** Se resuelven los subproblemas de forma recursiva.
    3. **Combinar:** Se integran las soluciones de los subproblemas para formar la solución del problema original.
- **Ejemplos de algoritmos:**
    - **Merge Sort:** Divide la lista en mitades, ordena cada mitad y las combina.
    - **Quick Sort:** Selecciona un pivote y reorganiza el arreglo de manera que los menores estén a un lado y los mayores al otro, aplicando recursividad a cada parte.
- **Ventajas:**
    - Reduce la complejidad de problemas grandes, permitiendo algoritmos con un rendimiento mejorado en comparación con soluciones iterativas directas.

---

### 4. Otras Estrategias

Aunque el temario UNIR menciona de forma genérica "otras estrategias", en un marco más amplio se pueden considerar las siguientes técnicas complementarias:

- **Algoritmos Golosos (Greedy):**
    
    - **Concepto:** Selecciona en cada paso la opción que parece ser la mejor en ese momento, sin reconsiderar decisiones previas.
    - **Ejemplos:** Cambio de monedas, problema del viajante en ciertos casos, árbol de recubrimiento mínimo (Prim y Kruskal).
- **Programación Dinámica:**
    
    - **Concepto:** Resuelve problemas dividiéndolos en subproblemas que se solapan, almacenando resultados intermedios (memorización) para evitar cálculos repetidos.
    - **Ejemplos:** Problema de la mochila, subsecuencia común más larga, Floyd-Warshall para caminos mínimos.
- **Backtracking:**
    
    - **Concepto:** Explora todas las soluciones posibles de manera sistemática, deshaciendo decisiones (retroceso) cuando se detecta que una solución parcial no puede conducir a una solución completa.
    - **Ejemplos:** Problemas de laberintos, sudoku, generación de permutaciones y combinaciones.
- **Branch and Bound:**
    
    - **Concepto:** Técnica para problemas de optimización que descarta ramas del espacio de búsqueda cuando se determina que no pueden producir una solución mejor que la ya encontrada.
    - **Aplicaciones:** Problema del viajante, ciertos problemas de asignación.

---

Esta estructura proporciona un marco completo para abordar el tema de **Estrategias de diseño de algoritmos** y facilita la organización de los contenidos tanto para la enseñanza como para la consulta o la búsqueda de recursos adicionales. Puedes ampliar cada apartado con ejemplos prácticos, ejercicios y casos de estudio para reforzar la comprensión de cada estrategia.