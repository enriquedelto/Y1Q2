---
tags:
  - asignaturas/algoritmia/introducción/estrategias_diseño_algoritmos
---
El **método de retroceso** es una técnica empleada principalmente para resolver problemas combinacionales, en la que se realiza una búsqueda sistemática de soluciones. Este enfoque genera un árbol de búsqueda en el que cada nivel representa la incorporación de un candidato a la solución.

---

## Proceso Básico

1. **Generación del Árbol de Búsqueda:**  
   Cada nodo del árbol representa un candidato que se añade a la solución parcial. La estructura del árbol refleja las distintas posibilidades de combinar los candidatos.

2. **Búsqueda Sistemática:**  
   Se exploran las distintas ramas del árbol en busca de soluciones válidas, evaluando sistemáticamente cada opción.

---

## Optimizaciones del Backtracking

Dado que la búsqueda sistemática puede resultar muy costosa, el método de retroceso incorpora dos optimizaciones clave para mejorar su eficiencia:

### 1. Poda

- **Definición:**  
  Cuando la función de viabilidad determina que un camino no conducirá a una solución válida, se descarta (se "poda") la continuación de esa rama del árbol.

- **Retroceso:**  
  Una vez podada una rama, se retrocede al último punto de decisión para explorar otras posibilidades. Este proceso de abandono y retroceso es el núcleo del método de retroceso.

### 2. Heurísticas

- **Objetivo:**  
  Utilizar reglas específicas del problema para identificar cuáles son las ramas más prometedoras.

- **Aplicación:**  
  Las heurísticas ayudan a priorizar la exploración de ramas que, según el criterio definido, tienen más probabilidades de conducir a una solución, optimizando así la búsqueda.

---

## Resumen

El método de retroceso es una técnica eficaz para la resolución de problemas combinacionales gracias a:

- La **generación sistemática** de soluciones mediante un árbol de búsqueda.
- La aplicación de **poda** para descartar caminos inviables y evitar el coste de evaluar todas las posibilidades.
- El uso de **heurísticas** para priorizar y guiar la búsqueda hacia las ramas más prometedoras.

Estas optimizaciones permiten que, a pesar de la naturaleza potencialmente costosa de la búsqueda sistemática, el método de retroceso sea una herramienta poderosa en la resolución de problemas complejos.
