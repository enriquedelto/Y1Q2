---
tags:
  - asignaturas/algoritmia/introducción/estrategias_diseño_algoritmos
---
# Recursividad

La **recursividad** es una técnica esencial en el diseño de algoritmos que permite abordar problemas complejos dividiéndolos en subproblemas más sencillos y de naturaleza similar. Se basa en el principio de que una función puede llamarse a sí misma para resolver instancias más pequeñas del mismo problema, hasta llegar a un caso base que se puede resolver de manera directa.

---

## Propósito

- **Descomponer problemas complejos:**  
  La recursividad permite dividir un problema grande en partes más pequeñas y manejables, facilitando su análisis y resolución.

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
  - **Optimización:** La técnica de memorización (almacenamiento de resultados intermedios) puede transformar algoritmos recursivos en soluciones más eficientes.

---

## Tipos de Recursividad

- **Recursividad Simple:**  
  Se produce cuando el procedimiento se llama a sí mismo directamente.

- **Recursividad Indirecta o Mutua:**  
  Se produce cuando un procedimiento A() llama a otro procedimiento B() y este, a su vez, llama al procedimiento A().

---

## Comparación con la Iteración y Consideraciones Adicionales

- **Alternativa a la Iteración:**  
  Aunque todo algoritmo recursivo se puede reescribir de forma iterativa, la recursividad modela de forma más natural los problemas definidos recursivamente. Sin embargo, esta técnica suele consumir más tiempo y memoria debido al manejo de la pila de llamadas.

- **Parametrización:**  
  Los algoritmos recursivos están inherentemente parametrizados; es decir, la parte variable del problema se transmite mediante los parámetros en cada llamada recursiva.

- **Condiciones para la Resolución Recursiva:**  
  Para que un problema se pueda resolver recursivamente deben cumplirse dos condiciones fundamentales:
  1. **Caso Base:** Debe existir una condición clara que permita detener la recursión.
  2. **Reducción del Problema:** Cada llamada recursiva debe trabajar sobre una versión reducida o simplificada del problema original.

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

Además, es importante destacar que, aunque la recursividad puede ser menos eficiente en términos de tiempo y uso de memoria frente a la iteración, su capacidad para modelar problemas de forma natural la hace especialmente útil en situaciones donde la claridad del algoritmo es prioritaria.
