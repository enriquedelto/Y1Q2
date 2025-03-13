---
tags:
  - asignaturas/algoritmia/introducción/estrategias_diseño_algoritmos
---
La técnica de **ramificación y poda** es un método de búsqueda exhaustiva utilizado para resolver problemas de optimización. Aunque es similar al método de retroceso, se diferencia en que se aplica exclusivamente a problemas donde es posible establecer límites (bounds) en la función objetivo para descartar caminos que no pueden mejorar la solución.

---

## Características Principales

### Ramificación
- **Búsqueda en Anchura (BFS):**  
  A diferencia del backtracking, que suele utilizar una búsqueda en profundidad (DFS), en la ramificación y poda se explora el árbol de soluciones de manera más amplia, evaluando varios caminos simultáneamente.

### Poda
- **Criterio Basado en la Función Objetivo:**  
  Durante la expansión del árbol de búsqueda, se evalúan los caminos según la función objetivo que se busca minimizar o maximizar.  
- **Comparación de Límites:**  
  Para dos caminos, A y B, la poda se realiza cuando el valor mínimo de un camino B es mayor (o peor) que el valor máximo de un camino A. Esto implica que cualquier solución que se derive de B será inferior a la de A, permitiendo descartar el camino B y concentrar los esfuerzos en las ramas más prometedoras.

---

## Diferencias con el Método de Retroceso

- **Estrategia de Búsqueda:**  
  - **Retroceso (Backtracking):** Utiliza búsqueda en profundidad (DFS).  
  - **Ramificación y Poda:** Emplea búsqueda en anchura (BFS) para explorar múltiples caminos de manera simultánea.
  
- **Aplicación:**  
  - **Retroceso:** Se usa principalmente en problemas combinacionales donde se busca una solución válida.  
  - **Ramificación y Poda:** Se orienta a problemas de optimización, donde se pueden establecer límites que permitan descartar caminos no prometedores.

---

## Resumen

La ramificación y poda es una técnica poderosa para problemas de optimización, ya que:
- Permite descartar de forma temprana caminos que no pueden mejorar la solución actual mediante la comparación de límites en la función objetivo.
- Utiliza una estrategia de búsqueda en anchura para evaluar diversas opciones, optimizando el proceso de exploración.

Esta metodología resulta especialmente útil cuando el espacio de soluciones es grande y es necesario concentrarse únicamente en las ramas que pueden conducir a una mejora de la solución óptima.
