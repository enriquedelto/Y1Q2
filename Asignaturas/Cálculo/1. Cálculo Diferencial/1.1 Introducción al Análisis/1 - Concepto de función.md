---
tags:
  - asignaturas/calculo/calculo_diferencial/introducción_al_análisis
---
# Definición de Función

Una **función** $f$ es una regla que asigna exactamente un elemento $y$ del conjunto $B$ a cada elemento $x$ del conjunto $A$. Esta relación se denota por:
$$y = f(x)$$

## Conceptos clave relacionados:

- **Dominio**: Es el conjunto $A$, formado por todos los elementos $x$ a los cuales se les asigna un valor.
- **Codominio**: Es el conjunto $B$, que contiene todos los posibles valores que podrían tomar los elementos $y = f(x)$.
- **Rango o Imagen**: Es el conjunto de todos los valores efectivamente alcanzados por la función dentro del codominio.

## Condición importante (unicidad):

Para que una regla sea considerada una función, cada valor $x$ del dominio debe asociarse con **exactamente un valor** $y$. Es decir, no puede ocurrir que un mismo valor de $x$ tenga asignados dos valores distintos de $y$.

## Ejemplos ilustrativos:

La función lineal:
$$f(x) = 2x + 3$$
```functionplot
---
title: 
xLabel: 
yLabel: 
bounds: [-10,10,-10,10]
disableZoom: false
grid: true
---
f(x) = 2x + 3
```

Por ejemplo:
- $f(1) = 2(1) + 3 = 5$
- $f(2) = 2(2) + 3 = 7$
- $f(-1) = 2(-1) + 3 = 1$

---
# Función real de variable real

Una **función real de variable real** es una aplicación cuyo dominio es un subconjunto $D$ de los números reales $\mathbb{R}$ y cuyo codominio está contenido en los números reales. Esta definición se expresa formalmente como:

$$
f: D \subseteq \mathbb{R} \rightarrow \mathbb{R}
$$

Esto significa que, para cada número real $x$ perteneciente al dominio $D$, la función asigna exactamente un número real $y$, llamado **imagen de $x$**, que se denota por $f(x)$.

Es decir, una función real establece una relación entre dos variables reales $x$ e $y$, cumpliendo que cada valor $x$ tiene asociada una única imagen $y = f(x)$.

## Tipos de funciones reales:

Las funciones reales se clasifican habitualmente en dos grandes grupos:

- **Funciones algebraicas:** Son funciones construidas mediante operaciones algebraicas básicas como suma, resta, multiplicación, división y extracción de raíces.
  - Ejemplos:
    - Polinómicas: $f(x) = x^2 + 3x - 5$.
    - Racionales: $f(x) = \frac{x-1}{x+2}$.
    - Irracionales: $f(x) = \sqrt{x+4}$.

```functionplot
---
title: 
xLabel: x
yLabel: f(x)
bounds: [-10,10,-10,10]
disableZoom: false
grid: true
---
Polinomica(x) = x^2 + 3*x - 5
Racional(x) = (x - 1) / (x + 2)
Irracional(x) = sqrt(x + 4)
```

- **Funciones trascendentes:** Son funciones que no se pueden expresar exclusivamente mediante operaciones algebraicas simples.
  - Ejemplos:
    - Exponenciales: $f(x) = e^x$.
    - Logarítmicas: $f(x) = \ln(x)$.
    - Trigonométricas: $f(x) = \sin(x), \cos(x), \tan(x)$.


```functionplot
---
title: Función Exponencial y Logarítmica
xLabel: 
yLabel: 
bounds: [-10,10,-10,10]
disableZoom: false
grid: true
---
Exponencial(x) = E^x
Logarítmica(x) = log(x)
```

```functionplot
---
title: Funciones trigonométricas
xLabel: x
yLabel: f(x)
bounds: [-10, 10, -10, 10]
disableZoom: false
grid: true
---
Seno(x) = sin(x)
Coseno(x) = cos(x)
Tangente(x) = tan(x)
```

# Elementos de una Función

## Dominio de definición

Sea $f:R\rightarrow R$, se llama **dominio de definición** de $f$ al conjunto de los números reales para los cuales existe imagen de función, es decir:

$$D_f = \{x\in R/f(x)estádefinica\}$$
Ejemplos:
1. $f(x) = \sqrt{x^3 - x^2 - 2x} \quad\Rightarrow\quad D_f = (-1,0)\cup(2,+\infty)$
2. $g(x) = 2^{\frac{1}{x^2 - 1}} \quad\Rightarrow\quad D_g = \mathbb{R}-\{-1,1\}$
3. $h(x) = \tan(x) \quad\Rightarrow\quad D_h = \mathbb{R}-\left\{ x_k = \frac{\pi}{2}\pm k\pi,\forall k\in\mathbb{Z}\right\}$

```functionplot
---
title: 
xLabel: 
yLabel: 
bounds: [-10,10,-10,10]
disableZoom: false
grid: true
---
f(x) = sqrt(x^3 - x^2 - 2*x)
g(x) = 2^(1 / x^2 - 1)
h(x) = tan(x)
```

## Imagen o recorrido de función

Sea $f: \mathbb{R} \rightarrow \mathbb{R}$. Se llama **imagen** o **recorrido** de $f$ al conjunto de los números reales que la función $f$ alcanza al evaluar todos los valores de su dominio. En forma simbólica:

$$
\mathrm{Im}_f = \{\,t \in \mathbb{R} \mid \exists\, x \in D_f : f(x) = t \}.
$$

En otras palabras, $\mathrm{Im}_f$ agrupa todos los resultados posibles de la expresión $f(x)$ cuando $x$ recorre el **dominio** $D_f$.

**Ejemplos**:

1. **Función** $f(x) = \sqrt{x^3 - x^2 - 2x}$

   - **Dominio**: $D_f = (-1,0) \cup (2, +\infty)$.  
   - **Imagen**: Al analizar el comportamiento de la raíz y los intervalos donde la expresión $x^3 - x^2 - 2x$ es no negativa, se obtiene que la función puede tomar todos los valores desde 0 hasta $+\infty$. Por tanto,  
     $$
     \mathrm{Im}_f = [0, +\infty).
     $$

2. **Función** $g(x) = 2^{\frac{1}{x^2 - 1}}$

	- **Dominio**:  $D_g = \mathbb{R} \setminus \{-1, 1\}$.
	- **Imagen**:  La función presenta dos comportamientos según el valor de $x$:	  
		- Cuando $x^2 - 1 > 0$ (es decir, $|x| > 1$), el exponente $\frac{1}{x^2-1}$ es positivo y varía desde valores muy grandes (al acercarse a $\pm 1$) hasta 0 (cuando $|x|$ tiende a infinito). Por tanto, en este caso:	$$
		    \mathrm{Im}_{g_1} = (1, +\infty).$$
		    
		- Cuando $x^2 - 1 < 0$ (es decir, $|x| < 1$), el exponente es negativo y varía desde $-\infty$ (al acercarse a $\pm 1$ desde el interior) hasta $-1$ (en $x=0$), produciendo valores en:$$
		    \mathrm{Im}_{g_2} = (0, 0.5].
		    $$
		    
		En consecuencia, la imagen completa de $g$ es:$$
  \mathrm{Im}_g = (0, 0.5] \cup (1, +\infty).$$
  
3. **Función** $h(x) = \tan(x)$

   - **Dominio**:  $D_h = \mathbb{R} \setminus \Bigl\{ \frac{\pi}{2} + k\pi \,\Big|\; k \in \mathbb{Z} \Bigr\}$.  
   - **Imagen**: La función tangente, en cada uno de sus intervalos de definición, puede tomar cualquier valor real, por lo que  
     $$
     \mathrm{Im}_h = \mathbb{R}.
     $$
# Composición de Funciones

La composición de funciones es una operación fundamental en matemáticas que permite combinar dos funciones para formar una nueva. Se denota por $(f \circ g)(x)$ y se lee “**f compuesta con g**”. Es importante notar que, en la composición, **la función que se aplica primero es g**, y luego el resultado se usa como entrada para f.

---

## Definición Formal

Sean $f:\mathbb{R}\rightarrow \mathbb{R}$ y $g:\mathbb{R}\rightarrow \mathbb{R}$. La composición de f y g es la función $h:\mathbb{R}\rightarrow \mathbb{R}$ definida por:


$$
h(x) = (f \circ g)(x) = f(g(x))
$$


### Interpretación del Proceso

1. **Aplicación de g:** Se toma un valor $x$ y se evalúa en $g$, obteniendo $g(x)$.
2. **Aplicación de f:** Luego, se evalúa $f$ en el resultado anterior, es decir, se calcula $f(g(x))$.

---

## Consideraciones del Dominio

Para que la expresión $f(g(x))$ esté definida, deben cumplirse dos condiciones:

- **Condición 1:** $x$ debe pertenecer al dominio de $g$. Es decir, $x \in D_g$.
- **Condición 2:** El resultado $g(x)$ debe pertenecer al dominio de $f$. Es decir, $g(x) \in D_f$.

Por lo tanto, el dominio de la composición $f \circ g$ es el conjunto de todos los $x$ que cumplen estas condiciones.

---

## Propiedades Importantes

- **No Conmutatividad:**  
  La composición de funciones no es, en general, conmutativa. Esto significa que:
  
$$
f \circ g \neq g \circ f
$$

  El orden en que se componen las funciones es crucial, ya que aplicar primero $g$ y luego $f$ puede dar un resultado distinto a aplicar primero $f$ y luego $g$.

---

## Ejemplo Práctico

Consideremos las siguientes funciones:


$$
f(x)=x^2+1 \quad \text{y} \quad g(x)=\sqrt{x-2}
$$


### 1. Composición $f \circ g$

#### Cálculo de $(f \circ g)(x)$:


$$
(f \circ g)(x)=f(g(x))=f(\sqrt{x-2})
$$


Sustituyendo en $f(x)=x^2+1$:


$$
f(\sqrt{x-2}) = (\sqrt{x-2})^2+1 = x-2+1 = x-1
$$


#### Dominio de $f \circ g$:

- **Primero:** Se requiere que $x$ pertenezca al dominio de $g$.  
  Dado que $g(x)=\sqrt{x-2}$ está definida cuando $x-2\geq 0$, se tiene:
  
$$
D_g = [2, +\infty)
$$

- **Luego:** No se agregan restricciones adicionales por $f$ ya que $f(x)=x^2+1$ está definida para todo $x \in \mathbb{R}$.

Por ello, el dominio de $f \circ g$ es:


$$
D_{f\circ g}=\{ x \in \mathbb{R} \mid x \ge 2 \}
$$


---

### 2. Composición $g \circ f$

#### Cálculo de $(g \circ f)(x)$:


$$
(g \circ f)(x)=g(f(x))=g(x^2+1)
$$


Sustituyendo en $g(x)=\sqrt{x-2}$:


$$
g(x^2+1)=\sqrt{(x^2+1)-2}=\sqrt{x^2-1}
$$


#### Dominio de $g \circ f$:

Para que $\sqrt{x^2-1}$ esté definida, se requiere que:


$$
x^2-1 \geq 0
$$


Resolviendo la inecuación:


$$
x^2-1\geq 0 \quad \Longrightarrow \quad (x-1)(x+1)\geq 0
$$


La solución es:


$$
D_{g\circ f} = (-\infty,-1] \cup [1,+\infty)
$$


---

## Resumen

- La **composición de funciones** se define como:
  
$$
(f \circ g)(x)=f(g(x))
$$

- Para que $f(g(x))$ esté definida, es necesario que:
  - $x \in D_g$ (el dominio de $g$).
  - $g(x) \in D_f$ (el dominio de $f$).
- La composición **no es conmutativa**: $f \circ g$ puede diferir de $g \circ f$.
- En el ejemplo, se analizaron las composiciones $f \circ g$ y $g \circ f$, calculando tanto las expresiones resultantes como sus dominios.