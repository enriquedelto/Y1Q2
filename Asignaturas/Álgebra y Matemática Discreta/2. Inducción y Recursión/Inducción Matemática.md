---
tags:
  - asignaturas/algebra_y_matematica_discreta/inducción_y_recursión
---
# Inducción Matemática

La **inducción matemática** es un método de demostración utilizado para probar proposiciones que dependen de números naturales. Se basa en el quinto axioma de Peano, el cual establece:

> Si el número 0 pertenece a un conjunto, y cada vez que un número natural pertenece al conjunto, su sucesor también pertenece a él, entonces todos los números naturales pertenecen al conjunto.

Formalmente, si $P(n)$ es una proposición matemática que depende de un número entero $n$, la inducción matemática establece lo siguiente:

Si:
- $P(0)$ es verdadera (**Paso base**)
- De la verdad de $P(n)$ se deduce la verdad de $P(n+1)$ (**Paso inductivo**)

Entonces, podemos afirmar que $P(n)$ es cierta para todos los números naturales.

---

## Proceso de Demostración por Inducción

La inducción matemática se lleva a cabo en dos pasos fundamentales:

### 1. Paso Base

Se verifica la verdad de la proposición para el primer número natural (generalmente 0 o 1).

### 2. Paso Inductivo

Se asume que la proposición es verdadera para un número natural arbitrario $k$ (hipótesis inductiva), y bajo esta suposición se demuestra que también es verdadera para $k+1$.

Es importante notar que no es necesario probar explícitamente $P(k)$; solamente se asume su veracidad para demostrar la implicación $P(k) \Rightarrow P(k+1)$.

---

## Tipos de Inducción Matemática

Existen dos tipos principales:

- **Inducción Ordinaria:** se asume la verdad únicamente de $P(k)$ para probar $P(k+1)$.
- **Inducción Fuerte:** se asume la verdad de todas las proposiciones desde el paso base hasta $P(k)$ para demostrar $P(k+1)$.

Ambos métodos son equivalentes y pueden utilizarse para resolver los mismos problemas.

---

## Ejemplos de Inducción Matemática

### Ejemplo 1: Demostración Directa

**Proposición:** Si un entero $n$ es impar, entonces $n^2$ también es impar.

**Definiciones:**
- Un número entero es par si puede escribirse como $2k$.
- Un número entero es impar si puede escribirse como $2k + 1$.

**Demostración:**

Supongamos que $n$ es impar. Entonces:

$$
n = 2k + 1 \quad \text{con } k \in \mathbb{Z}
$$

Calculamos $n^2$:

$$
n^2 = (2k + 1)^2 = 4k^2 + 4k + 1 = 2(2k^2 + 2k) + 1
$$

El resultado es claramente un número impar.

---

### Ejemplo 2: Inducción Fuerte (Existencia de factorización en números primos)

**Proposición:** Todo número entero mayor que uno puede escribirse como un producto de números primos.

**Demostración:**

- **Paso Base:** Para $n=2$, es trivial porque 2 es primo.
- **Hipótesis de Inducción:** Supongamos que todo número entero desde 2 hasta $n$ puede factorizarse en primos.
- **Paso Inductivo:** Consideramos $n+1$. Si es primo, la afirmación es trivial. Si no, puede escribirse como producto de dos números menores $(r, s \leq n)$, que según la hipótesis inductiva ya tienen una factorización en primos. Por tanto, $n+1$ también se factoriza en primos.

---

### Ejemplo 3: Franqueo postal (Inducción Ordinaria y Fuerte)

**Proposición:** Todo franqueo postal de 12 céntimos o más puede realizarse con sellos de 4 y 5 céntimos.

- **Inducción Ordinaria:**
  - **Paso Base:** 12 céntimos (tres sellos de 4).
  - **Paso Inductivo:** Asumiendo válido para $k$, demostramos para $k+1$ reemplazando adecuadamente los sellos según sean usados.

- **Inducción Fuerte:**
  - **Paso Base:** 12, 13, 14, 15 céntimos pueden realizarse con combinaciones de sellos de 4 y 5.
  - **Paso Inductivo:** Dado un franqueo de $k \geq 15$, se obtiene el franqueo para $k+1$ usando el franqueo de $k-3$ céntimos más un sello adicional de 4 céntimos.

Ambas formas son equivalentes, pero la inducción fuerte facilita ciertos tipos de demostraciones.

---

## Relación con el Principio del Buen Orden

La validez de la inducción matemática se apoya en el **principio del buen orden**, que afirma que:

> Todo conjunto no vacío de números naturales tiene un elemento mínimo.

Este principio garantiza que no puede existir un "mínimo contraejemplo", por lo cual la inducción matemática es un método sólido para demostraciones en números naturales.

---

## Aplicaciones en Geometría Computacional

La inducción matemática también se aplica en áreas como la **geometría computacional**, encargada de resolver problemas geométricos mediante algoritmos computacionales.

**Ejemplo:** Demostrar que cualquier polígono con $n \geq 3$ lados puede triangularse en $n-2$ triángulos.

- **Paso Base:** Para $n=3$, un triángulo ya está triangulado.
- **Paso Inductivo:** Supuesto válido para $n$ lados, se añade un lado formando un polígono de $n+1$ lados, que al dividirse genera un triángulo más y un polígono con $n$ lados. Por hipótesis inductiva, esto es válido, y queda demostrada la proposición.

---

**Conclusión:**

La inducción matemática es una técnica poderosa que permite abordar proposiciones que implican secuencias infinitas o conjuntos amplios de números naturales. Su validez y aplicabilidad radican en el principio fundamental del buen orden de los números naturales.

