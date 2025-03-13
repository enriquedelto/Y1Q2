---
tags:
  - asignaturas/tecnología_de_computadores/información_y_sistemas_de_numeración
---
# Representación Binaria de Números Naturales

En el sistema binario, la representación de los números naturales se basa en la posición de cada dígito, de modo similar al sistema decimal. Excepcionalmente, el **1** y el **0** se representan de la misma forma en ambos sistemas. Sin embargo, para representar números mayores se debe tener en cuenta que cada dígito en un número binario posee un valor que depende de su posición. Esto se expresa mediante la siguiente fórmula:

$$
N_i = \sum_{i=-d}^{n} (\text{dígito})_i \cdot b^i
$$

Donde:  
- *b* es la base del sistema (en binario, *b = 2*).  
- *n* representa el número de dígitos a la izquierda de la coma (con índices positivos, empezando por 0).  
- *d* es el número de dígitos a la derecha de la coma (con índices negativos, empezando por -1).
## Representación Signo-Magnitud

En la representación **signo-magnitud**, se utiliza el bit más significativo (el de mayor peso) para codificar el signo del número, mientras que los bits restantes representan la magnitud. Por ejemplo, en una palabra de **8 bits**:

- El **primer bit** indica el signo:  
  - **0** para números positivos.  
  - **1** para números negativos.
- Los **7 bits restantes** representan la magnitud del número.

Ejemplo para el número **20**:

- **+20** se representa como:

  $$
  +20 =
  \begin{array}{|c|c|c|c|c|c|c|c|}
  \hline
  0 & 0 & 0 & 1 & 0 & 1 & 0 & 0 \\
  \hline
  \end{array}
  $$

- **-20** se representa como:

  $$
  -20 =
  \begin{array}{|c|c|c|c|c|c|c|c|}
  \hline
  1 & 0 & 0 & 1 & 0 & 1 & 0 & 0 \\
  \hline
  \end{array}
  $$

Esta forma de representación se denomina **signo-magnitud** y es considerada la forma más sencilla de incluir un bit de signo en la representación de enteros. En una palabra de *n* bits, los *n-1* bits de la derecha se usan para representar la magnitud del entero.

### Limitaciones de la Representación Signo-Magnitud

Aunque es conceptualmente simple, este método presenta dos limitaciones importantes:

1. **Operaciones Aritméticas:**  
   Al realizar sumas o restas se deben tener en cuenta tanto los signos de los números como sus magnitudes, lo que complica el proceso de cálculo.

2. **Representación del Cero:**  
   Existe la ambigüedad de representar el número **0** de dos formas (positivo y negativo).

Debido a estas limitaciones, la representación en **complemento a dos** es la más utilizada para operaciones con enteros en la ALU.

## Rango de Representación en Signo-Magnitud

Para un sistema de *n* bits, el rango de representación en signo-magnitud se define como:

$$
-(2^{n-1}-1) \leq \text{Rango} \leq 2^{n-1}-1
$$

Esta fórmula establece los límites para los números representables utilizando *n* bits en el sistema signo-magnitud.

## Representación en Complemento a Dos

La representación en **complemento a dos** es la más habitual en la ALU, ya que se implementa de forma sencilla utilizando puertas lógicas. Aunque utiliza el bit más significativo para indicar el signo (0 para positivo, 1 para negativo), difiere de la representación signo-magnitud en cómo se interpretan los bits restantes.

En este sistema:
- **Números positivos:** Se representan de forma idéntica a su representación binaria.
- **Números negativos:** Se obtiene el complemento a dos mediante dos pasos:
  1. Invertir todos los bits del número (complemento a uno).
  2. Sumar 1 al resultado.

Este método presenta las siguientes ventajas:
- Un solo valor para representar el **cero**.
- Facilita la realización de operaciones aritméticas, ya que no es necesario tratar el signo de forma separada.

El rango de representatividad en complemento a dos para un sistema de *n* bits es:

$$
-2^{n-1} \leq \text{Valor} \leq 2^{n-1} - 1
$$

---

## Ejemplo: Representación del Número 20

Para ilustrar el proceso, consideremos una representación de 8 bits:

- **+20** se representa de la siguiente forma:

  $$
  +20 =
  \begin{array}{|c|c|c|c|c|c|c|c|}
  \hline
  0 & 0 & 0 & 1 & 0 & 1 & 0 & 0 \\
  \hline
  \end{array}
  $$

- **-20** se representa en complemento a dos de la siguiente manera:
  1. Se toma la representación de +20:  
     `00010100`
  2. Se invierten los bits (complemento a uno):  
     `11101011`
  3. Se suma 1 al resultado:  
     `11101011 + 1 = 11101100`

  Es decir:

  $$
  -20 =
  \begin{array}{|c|c|c|c|c|c|c|c|}
  \hline
  1 & 1 & 1 & 0 & 1 & 1 & 0 & 0 \\
  \hline
  \end{array}
  $$

---

## Rango de Representación

Para un sistema de *n* bits, el rango de números que se pueden representar en complemento a dos es:

$$
-2^{n-1} \leq \text{Valor} \leq 2^{n-1} - 1
$$

Esta fórmula garantiza que, a diferencia de la representación signo-magnitud, en complemento a dos existe una única representación para el cero y se simplifican las operaciones aritméticas.

