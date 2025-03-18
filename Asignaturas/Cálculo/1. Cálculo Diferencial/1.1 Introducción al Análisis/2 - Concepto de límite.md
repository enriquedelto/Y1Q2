---
tags:
  - asignaturas/calculo/calculo_diferencial/introducción_al_análisis
---
# Idea Intuitiva del Límite

La idea central del límite es entender el comportamiento de una función **cerca** de un punto, sin necesidad de que la función esté definida exactamente en ese punto.

## Concepto Intuitivo

Cuando decimos que:


$$
\lim_{x\rightarrow a} f(x) = b
$$


estamos afirmando que, a medida que $x$ se acerca al valor $a$ (sin necesariamente ser $a$), los valores de $f(x)$ se aproximan cada vez más a $b$. Es decir:

- **Cercanía en $x$:** No es necesario conocer el valor exacto de $f$ en $a$. Lo importante es lo que sucede en los valores de $x$ **próximos** a $a$.
- **Aproximación en $f(x)$:** Aunque $f(x)$ pueda no estar definida en $a$, la función puede tener un comportamiento estable cerca de $a$ que la hace tender a $b$.

Esta idea nos permite estudiar el comportamiento de las funciones en puntos críticos y analizar su continuidad, sin depender exclusivamente del valor en el punto de interés.

---

## Definición Formal: La Definición Épsilon-Delta

La definición formal del límite de una función en un punto utiliza dos conceptos clave: $\varepsilon$ (épsilon) y $\delta$ (delta). Se establece de la siguiente manera:


$$
\lim_{x\rightarrow a}f(x) = b \Leftrightarrow \forall\varepsilon > 0, \, \exists\delta > 0 \quad \text{tal que si} \quad 0 < |x - a| < \delta \Rightarrow |f(x) - b| < \varepsilon
$$


### Desglose de la Definición

- **$\varepsilon$ (épsilon):** Representa el radio de un entorno (o "ventana") alrededor de $b$. Indica qué tan cerca deben estar los valores de $f(x)$ de $b$.
- **$\delta$ (delta):** Es el radio de un entorno alrededor de $a$. Determina qué tan cerca debe estar $x$ de $a$ para garantizar que $f(x)$ esté dentro del entorno de $b$.

En palabras, la definición significa que:

> **Para cualquier entorno centrado en $b$ (por muy pequeño que sea, definido por $\varepsilon$), se puede encontrar un entorno centrado en $a$ (definido por $\delta$) de modo que, siempre que $x$ esté en ese entorno (excepto en $a$ mismo, si es que $f(a)$ no está definido), la imagen $f(x)$ caerá dentro del entorno alrededor de $b$.**

Esta definición formal es la base para demostrar propiedades de límites y es esencial en el estudio del análisis matemático.

---

## Representación Gráfica

A menudo se utiliza una imagen para ilustrar la definición épsilon-delta. En la siguiente figura se observa cómo se relacionan los entornos en $a$ y $b$:
![[Definición de límite de una función.png|300]]

*La imagen muestra dos intervalos: uno alrededor de $b$ (con radio $\varepsilon$) y otro alrededor de $a$ (con radio $\delta$). La condición es que, si $x$ está dentro del intervalo de $a$ (excluyendo $a$ mismo), entonces $f(x)$ estará dentro del intervalo de $b$.*
