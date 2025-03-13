---
tags:
  - asignaturas/algoritmia/introducción/estrategias_diseño_algoritmos
---
La **programación dinámica** es una técnica de optimización que se utiliza para resolver problemas que presentan **subproblemas solapados** y **subestructura óptima**. Esta técnica se fundamenta en evitar el cálculo repetido de los mismos subproblemas mediante el almacenamiento de sus soluciones en una tabla, lo que permite reutilizarlas cuando sean necesarias.

---

## Contexto en Estrategia "Divide y Vencerás"

En algunos casos, la estrategia «divide y vencerás» puede generar un gran número de subproblemas idénticos o solapados. Si estos subproblemas se resuelven de forma independiente sin tener en cuenta la repetición, el algoritmo se vuelve ineficiente. La programación dinámica se presenta como una solución a este inconveniente.

---

## Principios Clave

### 1. Evitar el Cálculo Redundante
- **Objetivo:**  
  No resolver dos veces el mismo subproblema.
- **Método:**  
  Cada vez que se resuelve un subproblema, se guarda su solución en una tabla (estructura de datos), lo que permite reutilizarla en lugar de recalcularla.

### 2. Enfoque Ascendente
- **Proceso:**  
  Se comienza resolviendo los subproblemas más elementales.  
  A partir de estas soluciones básicas, se combinan para resolver subproblemas mayores, hasta llegar a resolver el problema original.
- **Beneficio:**  
  Este método garantiza que se dispone de las soluciones necesarias cuando se requieren en niveles superiores.

### 3. Subestructura Óptima
- **Definición:**  
  Un problema posee subestructura óptima si, en una secuencia óptima de decisiones, toda subsecuencia de decisiones también es óptima.
- **Implicación:**  
  Esta propiedad es esencial para que la programación dinámica pueda aplicarse, ya que permite que la solución del problema completo se derive de las soluciones óptimas de sus subproblemas.

---

## Resumen

La programación dinámica es especialmente útil cuando:
- Los subproblemas se repiten (solapados).
- Se requiere optimizar el rendimiento evitando cálculos redundantes.
- El problema original tiene una subestructura óptima, permitiendo que la solución global se construya a partir de las soluciones óptimas de cada subproblema.

Esta técnica representa un enfoque ascendente para la resolución de problemas, en el que primero se resuelven los casos más simples y, posteriormente, se combinan para resolver problemas más complejos, garantizando una solución eficiente y óptima.

---

> Nota: Este documento es parte de la colección de notas sobre algoritmos y técnicas de optimización en [Obsidian](obsidian://).  
