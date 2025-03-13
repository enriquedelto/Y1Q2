---
tags:
  - asignaturas/algoritmia/eficiencia_de_los_algoritmos
---
# Análisis Empírico vs. Análisis Matemático

Una comparación fundamental en el estudio de algoritmos es entre el **análisis empírico** y el **análisis matemático**. A continuación, se detallan sus principales características y cómo se evalúa el rendimiento de un algoritmo.

---

## Análisis Empírico

- **Medición en segundos:**  
  Se utiliza el tiempo de ejecución medido en segundos.
  
- **Dependencia de la plataforma:**  
  Los tiempos obtenidos son dependientes de la plataforma (hardware y entorno) donde se ejecuta el algoritmo.

---

## Análisis Matemático

- **Contabilización de operaciones:**  
  Se cuenta el número de veces que se ejecuta una determinada operación, lo que hace que la medición sea **independiente de la plataforma**.

- **Foco en la operación básica:**  
  Se identifica la *operación básica*, que es la que más contribuye al tiempo de ejecución y se ejecuta con mayor frecuencia en el bucle más interno.

---

### Identificación de la Operación Básica

- **Características:**
  - Es la operación que consume más tiempo dentro del bucle interior.
  - Debe tener un tiempo de ejecución acotado por una constante.

- **Ejemplos de operaciones básicas:**
  - Operaciones aritméticas.
  - Asignaciones.
  - Comparaciones.
  - Acceso indexado a elementos.
  - Llamadas a funciones con tiempo de ejecución acotado.

---

## Función de Complejidad Computacional

La **función de complejidad computacional** (también conocida como coste de ejecución o eficiencia $C(n)$) expresa los recursos (tiempo o espacio) que un algoritmo requiere en función del tamaño del problema, es decir, el número de veces que se ejecuta la operación básica para una entrada de tamaño n.

- Sea **$c_{op}$** el tiempo de ejecución de la operación básica.
- Sea **$C(n)$** la función que cuenta el número de veces que se ejecuta dicha operación para un tamaño de entrada n.

La estimación del tiempo de ejecución del algoritmo se expresa mediante la fórmula:

$$
T(n) \approx c_{op} \cdot C(n)
$$

> **Nota:** Esta fórmula es una estimación, ya que no considera el tiempo de ejecución de las operaciones no básicas.

---

## Consideraciones Finales

- **Eficiencia en grandes entradas:**  
  Con pocos datos de entrada, las diferencias entre los tiempos de ejecución de varios algoritmos pueden ser insignificantes.  
  La verdadera diferenciación se observa cuando se trabajan con tamaños de entrada grandes.