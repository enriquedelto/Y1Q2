---
tags:
  - asignaturas/algoritmia/análisis_de_algoritmos
---
El análisis de complejidad computacional busca identificar cómo crece el coste de
ejecución $C(n)$ cuando el tamaño de la entrada crece. La **notación asintótica**
captura el orden de crecimiento de la operación básica según el tamaño de los datos
de entrada $n$ se va haciendo grande.

En la siguiente discusión C(n) y g(n) son funciones no negativas definidas sobre los
números naturales. Además, t(n) representa el tiempo de ejecución, normalmente
representado por la cuenta de operaciones básicas C(n), y g(n) es una función
simple a comparar con C(n).

Para comparar las órdenes de crecimiento se utilizan **tres notaciones:**
- **Big O (o cota superior asintótica)**. $O(g(n))$ es el conjunto de todas las funciones con menor o igual orden de crecimiento que $g(n)$.  Por ejemplo: 
$$C(n)=2n, C(n)\in O(n^2)$$
El valor $n_0$ es esencial en la definición de la notación asintótica. Se considera un umbral a partir del cual se cumple que la función $C(n)$ está acotada superiormente por $g(n)$ (multiplicada por alguna constante) para todos los $n \geq n_0$. En otras palabras, aunque $C(n)$ pueda ser mayor que $g(n)$ para valores pequeños, lo importante es que a partir de cierto punto $n_0$, la desigualdad $C(n) \leq c \, g(n)$ se cumple siempre, lo que permite ignorar el comportamiento en rangos pequeños y centrarse en el crecimiento para entradas grandes. En el ejemplo, se toma $n_0 = 2$ ya que para $n \geq 2$ se verifica que $2n \leq n^2$.


```functionplot
---
title: Comparación de 2n y n²
xLabel: n
yLabel: Valor de la función
bounds: [0,10,0,100]
disableZoom: false
grid: true
---
f(x) = 2x
f(x) = x^2
```
- **Big $\Omega$ (o cota inferior asintótica)**. $\Omega(g(n))$ es el conjunto de todas las funciones con mayor o igual orden de crecimiento que g(n). Por ejemplo:
$$C(n) = n^3, C(n)\in \Omega(n2)$$
```functionplot
---
title: Comparación de n^3 y n2
xLabel: n
yLabel: Valor de la función
bounds: [0,10,0,100]
disableZoom: false
grid: true
---
f(x) = x^3
f(x) = 2x
```
- **Big $\Theta$ (o cota ajustada asintótica)**. $\Theta(g(n))$ es el conjunto de todas las funciones que tienen el mismo orden de crecimiento que $g(n)$. Por ejemplo:
$$C(n)=2n^2+n, C(n)\in \Theta(n^2)$$
```functionplot
---
title: Comparación de n^3 y n2
xLabel: n
yLabel: Valor de la función
bounds: [0,10,0,100]
disableZoom: false
grid: true
---
f(x) = 2x^2
f(x) = x^2
```

Obsérvese que:
$$C(n)\in\Theta(g(n))\leftrightarrow C(n)\in\Theta(g(n))\land C(n)\in\Omega(g(n))$$
Además de la notación big O, big $\Omega$ y big $\Theta$, tenemos las notaciones little o, little $\omega$ y little $\theta.$ 

La notación big O permite que g(n) esté multiplicada por una constante c, es decir:
$$C(n)\in O(g(n))\leftrightarrow\forall n \geq 0C(n)\le cg(n) \ \text{para algún c positivo}$$
La notación little o obliga a que la relación anterior se cumpla para cualquier valor de c positivo, es decir:
