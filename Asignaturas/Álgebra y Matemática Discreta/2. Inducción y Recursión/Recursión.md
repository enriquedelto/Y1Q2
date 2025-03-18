---
tags:
  - asignaturas/algebra_y_matematica_discreta/inducción_y_recursión
---
La **recursión** es un método para definir objetos o funciones en términos de sí mismos, comenzando con uno o más casos base y definiendo los casos posteriores a partir de ellos. Se utiliza ampliamente en matemáticas, informática y lógica, permitiendo definir funciones, sucesiones y conjuntos de forma clara y concisa.

La recursión guarda gran similitud con la inducción matemática: ambas comienzan con casos base claramente definidos y construyen progresivamente resultados más complejos.

---

## Definición Recursiva de Funciones

Para definir funciones recursivamente, se siguen estos dos pasos:

### 1. Paso Base

Se especifica el valor inicial (generalmente el valor en cero o en el primer término).

### 2. Paso Recursivo

Se proporciona una regla que permite calcular el valor de la función en términos de valores anteriores ya conocidos.

### Ejemplo 1

Dada la función definida recursivamente:

$$
\begin{aligned}
f(0) &= 3 \\[5pt]
f(n+1) &= 3f(n) - 1
\end{aligned}
$$

Calculemos:
- $f(1) = 3 \cdot f(0) - 1 = 3 \cdot 3 - 1 = 8$
- $f(2) = 3 \cdot f(1) - 1 = 3 \cdot 8 - 1 = 23$
- $f(3) = 3 \cdot f(2) - 1 = 3 \cdot 23 - 1 = 68$

Es importante señalar que una función recursiva debe alcanzar eventualmente el paso base; de lo contrario, podría producir un bucle infinito.

---

### Ejemplo 2: Función Factorial

Definir recursivamente la función factorial $F(n) = n!$:

- **Paso base:** $F(0) = 1$
- **Paso recursivo:** $F(n+1) = (n+1) \cdot F(n)$

Esta definición permite calcular factoriales partiendo del caso base:

- $F(1) = 1 \cdot F(0) = 1$
- $F(2) = 2 \cdot F(1) = 2$
- $F(3) = 3 \cdot F(2) = 6$, y así sucesivamente.

---

## Sucesión de Fibonacci

En algunos casos, la definición recursiva puede incluir más de un caso base:

### Definición

La sucesión de Fibonacci $\{f_n\}$ se define como:

$$
\begin{aligned}
f_0 &= 0,\quad f_1 = 1 \\[5pt]
f_n &= f_{n-1} + f_{n-2},\quad \text{para } n \geq 2
\end{aligned}
$$




### Ejemplo de cálculo:

- $f(2) = f(1) + f(0) = 1 + 0 = 1$
- $f(3) = f(2) + f(1) = 1 + 1 = 2$
- $f(4) = f(3) + f(2) = 2 + 1 = 3$
- $f(5) = f(4) + f(3) = 3 + 2 = 5$
- $f(6) = f(5) + f(4) = 5 + 3 = 8$

---

## Conjuntos Definidos Recursivamente

Además de funciones, los conjuntos también pueden definirse recursivamente. Un conjunto definido recursivamente permite decidir en un número finito de pasos si un elemento pertenece o no al conjunto.

### Ejemplo:

La sucesión de los múltiplos de 2 se puede definir como:


$$
\begin{aligned}
a_1 &= 2 \\ 
a_n &= 2a_{n-1} \quad \text{para } n > 1
\end{aligned}
$$


Una función definida recursivamente sobre $\mathbb{N}$ podría ser:


$$
\begin{aligned}
f_1 &= 0, \\ f_{n+1} &= 2f_n + 3 \quad \text{para } n \geq 1
\end{aligned}
$$


---

## Definición Recursiva de Estructuras (Árboles)

Las estructuras complejas como árboles también pueden definirse recursivamente:

**Árbol con raíz:**

- **Paso base:** Un vértice único $r$ es un árbol con raíz.
- **Paso recursivo:** Si $T_1, T_2, \dots, T_n$ son árboles con raíces $r_1, r_2, \dots, r_n$, entonces el grafo formado por una nueva raíz $r$, conectada por una arista a cada una de las raíces anteriores, también es un árbol con raíz.

---

## Demostraciones por Inducción Estructural

La validez de definiciones recursivas se demuestra usando **inducción estructural**, similar al método de inducción matemática:

- **Paso base:** Verificar la propiedad para elementos definidos en el paso base.
- **Paso inductivo:** Asumir que la propiedad es cierta para elementos previos y demostrar que la propiedad sigue siendo cierta en los elementos generados en el paso recursivo.

### Ejemplo: Fórmulas bien construidas en lógica proposicional

Proposición: En cualquier fórmula bien construida, el número de paréntesis abiertos es igual al número de cerrados.

- **Paso base:** Las fórmulas básicas (variables proposicionales, valores de verdad $V$ y $F$) no contienen paréntesis, por lo que cumplen la propiedad trivialmente.
- **Paso inductivo:** Asumiendo fórmulas $p$ y $q$ correctas, se puede comprobar fácilmente que las fórmulas derivadas como $(\neg p)$, $(q \vee p)$, $(q \wedge p)$, $(q \rightarrow p)$, $(q \leftrightarrow p)$ también mantienen la propiedad, ya que se agregan y cierran paréntesis en igual número.

Así queda demostrada la propiedad mediante inducción estructural.

---

## Conclusión

La recursión es una herramienta fundamental en matemáticas y computación, facilitando la definición clara y estructurada de funciones, sucesiones, conjuntos y estructuras complejas. La inducción estructural respalda formalmente la validez de estas definiciones recursivas.