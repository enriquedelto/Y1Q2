---
tags:
  - asignaturas/algoritmia/introducción/estrategias_diseño_algoritmos
---
# Recursividad

La **recursividad** es una técnica esencial en el diseño de algoritmos que permite abordar problemas complejos dividiéndolos en subproblemas más sencillos y de naturaleza similar. Se basa en el principio de que una función puede llamarse a sí misma para resolver instancias más pequeñas del mismo problema, hasta llegar a un caso base que se puede resolver de manera directa.

---

## Propósito

- **Descomponer problemas complejos:**  
  La recursividad permite descomponer un problema grande en partes más pequeñas y manejables, facilitando su análisis y resolución.

- **Claridad y expresividad:**  
  Al expresar soluciones de forma natural y concisa, se logra que el algoritmo sea más legible y fácil de mantener.

- **Optimización potencial:**  
  En combinación con técnicas como la memorización, la recursividad puede evitar cálculos redundantes, mejorando así el rendimiento del algoritmo.

---

## Contenidos

- **Definición de recursividad:**  
  Es el proceso mediante el cual una función se invoca a sí misma para resolver una versión reducida del problema original.  
  - **Caso Base:** Condición que detiene la recursión, previniendo llamadas infinitas.  
  - **Caso Recursivo:** La parte del algoritmo que realiza la llamada recursiva, reduciendo progresivamente el problema.

- **Elementos clave a considerar:**  
  - **Convergencia:** Es fundamental asegurar que, en cada iteración, el problema se reduzca y se alcance el caso base.  
  - **Consumo de recursos:** Cada llamada recursiva utiliza espacio en la pila de llamadas, lo que puede llevar a problemas de desbordamiento si no se maneja adecuadamente.  
  - **Optimización:** La técnica de [[Memorización]] (almacenamiento de resultados intermedios) puede transformar algoritmos recursivos en soluciones más eficientes.

---

## Ejemplo de Aplicación

### Cálculo del Factorial de un Número

**Problema:** Calcular el factorial de un número $n$ (denotado $n!$).

**Definición Recursiva:**

- **Caso Base:**  
  Si $n = 0$, entonces $0! = 1$.

- **Caso Recursivo:**  
  Si $n > 0$, entonces $n! = n \times (n - 1)!$.

**Pseudocódigo:**
```matlab
function factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)
```

Este ejemplo demuestra cómo la recursividad descompone el problema en instancias cada vez más simples hasta alcanzar el caso base, permitiendo una solución elegante y comprensible.

---

