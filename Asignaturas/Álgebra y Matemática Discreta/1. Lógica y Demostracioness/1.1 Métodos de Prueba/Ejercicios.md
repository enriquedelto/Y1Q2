---
tags:
  - asignaturas/algebra_y_matematica_discreta/logica_y_demostraciones/metodos_de_prueba/ejercicios
---
# Ejercicio 1

Demuestra que es cierta la siguiente afirmación de números enteros:
$$\forall x,\exists y,x+y=0$$

Para demostrar que 
$$
\forall x \in \mathbb{Z}, \; \exists y \in \mathbb{Z} \text{ tal que } x+y=0,
$$
procedemos de la siguiente manera. Sea $x$ un número entero arbitrario. Definimos $y = -x$. Observamos que, al sumar $x$ y $-x$, obtenemos
$$
x + (-x) = 0.
$$
Como $-x$ es un entero (por el hecho de que los enteros son cerrados bajo la negación), hemos encontrado para cada $x$ un correspondiente $y$ que satisface $x+y=0$. Por lo tanto, se cumple la afirmación.

# Ejercicio 2

El predicado $p(x)$ es cierto si y solo si x es un número primo. Demuestra que la siguiente afirmación de números naturales es falsa:
$$\forall n,p(n)\to p(2^n-1)$$
**Demostración:**

Queremos evaluar la siguiente afirmación:

$$
\forall n \in \mathbb{N}, \; \big(p(n) \to p(2^n-1)\big),
$$

donde $p(n)$ es cierto si y solo si $n$ es primo.

Recordemos que esta afirmación dice: "Para todo número natural $n$, si $n$ es primo, entonces $2^n-1$ es primo."

Para demostrar que esta afirmación es **falsa**, basta con encontrar un contraejemplo, es decir, un número primo $n$ para el cual $2^n-1$ no sea primo.

**Contraejemplo:**

1. Sea $n = 11$.  
   - **Verificación de $p(11)$:**  
     $11$ es un número primo, por lo que $p(11)$ es verdadero.
     
2. Calculamos $2^{11} - 1$:
   $$
   2^{11} - 1 = 2048 - 1 = 2047.
   $$
   
3. Comprobamos si $2047$ es primo:  
   Se puede factorizar:
   $$
   2047 = 23 \times 89.
   $$
   Como $2047$ tiene divisores distintos de $1$ y $2047$, no es primo. Esto implica que $p(2047)$ es falso.

Dado que para $n = 11$ se cumple que $p(11)$ es verdadero pero $p(2^{11}-1)$ es falso, la implicación
$$
p(11) \to p(2^{11}-1)
$$
no se cumple.

Por lo tanto, hemos encontrado al menos un caso en el que la implicación falla, lo que demuestra que la afirmación
$$
\forall n \in \mathbb{N}, \; \big(p(n) \to p(2^n-1)\big)
$$
es **falsa**.

# Ejercicio 3

Indicar si las siguientes fórmulas proposicionales son tautologías, contingencias o contradicciones.

- $\neg p \land \neg q$
- $\neg(p \to q) \land (q \to p)$
- $((p \to q) \to q) \to (p \lor q)$

**$\neg p \land \neg q$  (CONTINGENCIA)**

| p   | q   | $\neg p$ | $\neg q$ | $\neg q \land \neg p$ |
| --- | --- | -------- | -------- | --------------------- |
| 0   | 0   | 1        | 1        | 1                     |
| 0   | 1   | 1        | 0        | 0                     |
| 1   | 0   | 0        | 1        | 0                     |
| 1   | 1   | 0        | 0        | 0                     |
$\neg(p \to q) \land (q \to p)$ **(CONTINGENCIA)**

| p   | q   | $p\to q$ | $\neg(p\to q)$ | $(q \to p)$ | $\neg(p \to q) \land (q \to p)$ |
| --- | --- | -------- | -------------- | ----------- | ------------------------------- |
| 0   | 0   | 1        | 0              | 1           | 0                               |
| 0   | 1   | 1        | 0              | 0           | 0                               |
| 1   | 0   | 0        | 1              | 1           | 1                               |
| 1   | 1   | 1        | 0              | 1           | 0                               |
$((p \to q) \to q) \to (p \lor q)$ **(TAUTOLOGÍA)**

| p   | q   | $p\to q$ | $((p \to q) \to q)$ | $(p \lor q)$ | $((p \to q) \to q) \to (p \lor q)$ |
| --- | --- | -------- | ------------------- | ------------ | ---------------------------------- |
| 0   | 0   | 1        | 0                   | 0            | 1                                  |
| 0   | 1   | 1        | 1                   | 1            | 1                                  |
| 1   | 0   | 0        | 1                   | 1            | 1                                  |
| 1   | 1   | 1        | 1                   | 1            | 1                                  |
# Ejercicio 4

**Enunciado:**  
Demuestra la existencia de infinitos números primos, es decir, muestra que para todo número natural $n$ existe un número primo $p$ mayor que $n$:

$$
\forall n \in \mathbb{N},\; \exists p \in \mathbb{P} \text{ tal que } p > n.
$$

**Demostración (por contradicción):**

1. **Suposición inicial:**  
   Supongamos, en búsqueda de una contradicción, que sólo existen un número finito de números primos. Sea  
   $$
   p_1,\, p_2,\, \dots,\, p_k
   $$
   la lista completa de números primos.

2. **Construcción de un nuevo número:**  
   Considera el número:
   $$
   N = p_1 \cdot p_2 \cdots p_k + 1.
   $$

3. **Análisis del número $N$:**  
   - Dado que cada $p_i$ divide exactamente al producto $p_1 \cdot p_2 \cdots p_k$, tenemos que  
     $$
     p_i \mid (p_1 \cdot p_2 \cdots p_k) \quad \text{para cada } i=1,2,\dots,k.
     $$
   - Por lo tanto, al dividir $N$ por cualquiera de los $p_i$, se cumple que:
     $$
     N = p_1 \cdot p_2 \cdots p_k + 1 \equiv 1 \pmod{p_i}.
     $$
     Esto implica que **ningún** $p_i$ divide a $N$.

4. **Conclusión:**  
   Existen dos posibilidades:
   - **Si $N$ es primo:** Entonces $N$ es un número primo que no está en la lista $\{p_1, p_2, \dots, p_k\}$, lo que contradice la hipótesis de finitud de los primos.
   - **Si $N$ es compuesto:** Entonces $N$ debe tener al menos un divisor primo $q$. Sin embargo, como se ha demostrado, ninguno de los primos $p_i$ divide a $N$, por lo que $q$ no pertenece a la lista inicial, lo que nuevamente contradice la suposición de que la lista era completa.

En ambos casos se obtiene una contradicción. Por lo tanto, la hipótesis de que existen sólo un número finito de primos es falsa. Concluimos que **existen infinitos números primos**.
