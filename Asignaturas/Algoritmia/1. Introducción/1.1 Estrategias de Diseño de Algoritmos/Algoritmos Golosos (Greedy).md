---
tags:
  - asignaturas/algoritmia/introducción/estrategias_diseño_algoritmos
---
Los **algoritmos ávidos** toman decisiones a corto plazo, basadas en la información inmediatamente disponible, sin considerar las consecuencias futuras. Se emplean principalmente para encontrar la mejor combinación en problemas de optimización, aprovechando la propiedad de subestructura óptima en aquellos casos en los que la solución global se puede construir mediante la elección local óptima.

---

## Componentes Esenciales

Los algoritmos ávidos cuentan con dos componentes fundamentales:

- **Conjunto de Candidatos:**  
  Son los elementos que se evalúan para ir construyendo la solución.

- **Solución Parcial:**  
  Es la solución en formación, compuesta por los candidatos seleccionados hasta el momento.

---

## Funciones Clave

Para su correcta implementación, los algoritmos ávidos utilizan cuatro funciones principales:

1. **Función de Viabilidad:**  
   Determina si un candidato puede contribuir a la solución, es decir, verifica que al agregarlo, el problema siga siendo resoluble.

2. **Función de Selección:**  
   Selecciona el candidato más prometedor para ser añadido a la solución en cada paso.

3. **Función de Coste:**  
   Asigna un valor a la solución actual (ya sea parcial o completa) para evaluar su eficiencia o "costo".

4. **Función de Solución:**  
   Indica cuándo se ha alcanzado una solución completa, deteniendo así el proceso.

> *Figura 5. Funciones para un algoritmo ávido.*

---

## Propiedad de Subestructura Óptima

Cuando el problema posee **subestructura óptima**, es decir, cada subproblema óptimo contribuye a la solución global óptima, un algoritmo ávido garantiza encontrar la solución óptima. Esta propiedad es clave para el éxito de la estrategia ávida en problemas de optimización.

---

## Diferencias con la Programación Dinámica

- **Selección Irrevocable:**  
  En los algoritmos ávidos, una vez que un candidato es elegido, no se reconsidera; de igual forma, los descartados nunca vuelven a evaluarse.  
- **Enfoque Local vs. Global:**  
  La programación dinámica, en contraste, reconsidera en cada paso todas las subsoluciones previamente calculadas, lo que puede modificar la selección de candidatos en función de la evolución del problema.
  
Esta diferencia implica que, aunque ambos métodos abordan problemas con subproblemas solapados y subestructura óptima, la estrategia ávida es generalmente más rápida pero menos flexible que la programación dinámica.

---

## Resumen

Los algoritmos ávidos se caracterizan por:
- Tomar decisiones basadas en criterios locales sin retroceso.
- Utilizar un conjunto de candidatos y una solución parcial en formación.
- Incorporar funciones específicas (viabilidad, selección, coste y solución) que guían el proceso.
- Ser especialmente efectivos en problemas con subestructura óptima, donde la elección local conduce a la solución global óptima.

Esta estrategia resulta muy útil en problemas de optimización, donde la eficiencia y la simplicidad de la solución son prioritarias.
