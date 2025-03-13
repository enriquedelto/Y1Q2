---
tags:
  - asignaturas/tecnología_de_computadores/información_y_sistemas_de_numeración
---
# Computadores y Sistemas de Numeración

Los computadores son máquinas diseñadas para realizar exclusivamente **operaciones matemáticas, aritméticas y lógicas**. La característica fundamental que los diferencia de otras máquinas es que están construidos con dispositivos digitales basados en **circuitos electrónicos**, los cuales procesan información codificada en dos estados: **0** y **1**.

---

## Digital vs. Analógico

- **Entorno analógico:**  
  Las magnitudes que percibimos en la vida diaria son continuas.

- **Entorno digital (computadores):**  
  La información es discreta, es decir, los datos son contables y pueden separarse o aislarse.  
  - La **unidad más pequeña** de información en un circuito es el **bit** (acrónimo de *binary digit*), que puede representar solo dos valores: **0** o **1**.
  - Se puede considerar que un computador es una máquina construida con millones de interruptores, donde cada interruptor almacena un bit.

---

## Procesamiento de la Información

El computador utiliza una secuencia de bits como dato de entrada, que es manipulada mediante operaciones aritméticas y lógicas, para finalmente devolver una secuencia de bits como resultado.  
Dado que los humanos no interpretamos directamente secuencias de unos y ceros, se emplean dispositivos de **entrada/salida** que traducen estas secuencias en formatos inteligibles, tales como:
- Sonido
- Imágenes
- Texto
- Vibraciones

**Nota:** La interpretación de una secuencia de bits depende del sistema de representación binaria que se esté utilizando.

---

## Sistemas de Numeración

Un **sistema de numeración** es un conjunto de símbolos y reglas que se utilizan para representar cantidades.  
Ejemplo clásico:  
- **Sistema decimal:** Utiliza diez símbolos (0, 1, 2, 3, 4, 5, 6, 7, 8 y 9).  
  - La posición de cada dígito determina su valor (unidades, decenas, centenas, etc.), lo que convierte al sistema decimal en un **sistema posicional**.

### Teorema Fundamental de la Numeración

El teorema fundamental de la numeración relaciona una cantidad expresada en cualquier sistema con su equivalente en el sistema decimal. Se define mediante la siguiente expresión:

$$
N_i = \sum_{i=-d}^{n} (\text{dígito})_i \cdot b^i
$$

Donde:
- **i:** Posición del dígito respecto a la coma.  
  - Dígitos a la derecha usan valores negativos (comenzando por -1).  
  - Dígitos a la izquierda usan valores positivos (comenzando por 0).
- **d:** Número de dígitos a la derecha de la coma.
- **n:** Número de dígitos a la izquierda de la coma menos uno.
- **b:** Base del sistema de numeración.

En otras palabras, un número se representa como la suma del producto de cada dígito por la base elevada a la potencia de su posición. Si el número tiene parte fraccionaria, los dígitos después de la coma tendrán exponentes negativos.

Dado una base **b** y **n** dígitos, se pueden formar un total de **$b^n$** combinaciones diferentes.

Para convertir un número decimal a otro sistema (por ejemplo, binario), se pueden utilizar divisiones sucesivas por la base correspondiente.

---

## Ejemplo de Conversión: Binario, Decimal y Hexadecimal

| Binario | Decimal | Hexadecimal |
| ------- | ------- | ----------- |
| 0000    | 0       | 0           |
| 0001    | 1       | 1           |
| 0010    | 2       | 2           |
| 0011    | 3       | 3           |
| 0100    | 4       | 4           |
| 0101    | 5       | 5           |
| 0110    | 6       | 6           |
| 0111    | 7       | 7           |
| 1000    | 8       | 8           |
| 1001    | 9       | 9           |
| 1010    | 10      | A           |
| 1011    | 11      | B           |
| 1100    | 12      | C           |
| 1101    | 13      | D           |
| 1110    | 14      | E           |
| 1111    | 15      | F           |

Además del sistema binario, los computadores utilizan otros códigos intermedios, como el **hexadecimal**, que facilita la representación y conversión a binario. Otros ejemplos incluyen el **octal**, **ASCII**, **EBCDIC** y **UNICODE**.
