---
tags:
  - asignaturas/algoritmia/introducción/estrategias_diseño_algoritmos/problemas
---
Aquí tienes una serie de ejercicios prácticos en los que se puede aplicar la recursividad para resolver distintos problemas. Cada ejercicio incluye una breve descripción y, de ser necesario, se sugiere un esquema en pseudocódigo o una idea de implementación para guiarte:

---

### Ejercicio 1: Factorial de un Número

**Descripción:**  
Escribe una función recursiva que calcule el factorial de un número entero positivo.  
**Caso Base:** Si el número es 0, retorna 1.  
**Caso Recursivo:** Si $n > 0$, retorna $n \times \text{factorial}(n - 1)$.

**Pseudocódigo:**  
```python
function factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)
```

---

### Ejercicio 2: Secuencia de Fibonacci

**Descripción:**  
Desarrolla una función recursiva que devuelva el $n$-ésimo número de la secuencia de Fibonacci, donde:  
- $F(0) = 0$
- $F(1) = 1$
- $F(n) = F(n - 1) + F(n - 2)$ para $n \geq 2$.

**Pseudocódigo:**  
```python
function fibonacci(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)
```

---

### Ejercicio 3: Suma de los Dígitos de un Número

**Descripción:**  
Crea una función recursiva que reciba un número entero y retorne la suma de sus dígitos.  
**Caso Base:** Si el número es 0, retorna 0.  
**Caso Recursivo:** Suma el dígito menos significativo ($n \% 10$) y llama a la función con $n // 10$.

**Pseudocódigo:**  
```python
function suma_digitos(n):
    if n == 0:
        return 0
    return (n % 10) + suma_digitos(n // 10)
```

---

### Ejercicio 4: Invertir una Cadena

**Descripción:**  
Escribe una función recursiva que invierta una cadena de texto.  
**Caso Base:** Si la cadena está vacía o tiene un solo carácter, retorna la cadena.  
**Caso Recursivo:** Retorna la última letra concatenada con el resultado de invertir el resto de la cadena.

**Pseudocódigo:**  
```python
function invertir_cadena(cadena):
    if len(cadena) <= 1:
        return cadena
    return cadena[-1] + invertir_cadena(cadena[:-1])
```

---

### Ejercicio 5: Exponenciación (Potencia)

**Descripción:**  
Implementa una función recursiva que calcule la potencia $base^{exponente}$.  
**Caso Base:** Si el exponente es 0, retorna 1.  
**Caso Recursivo:** Multiplica la base por el resultado de la potencia con el exponente decrementado.

**Pseudocódigo:**  
```python
function potencia(base, exponente):
    if exponente == 0:
        return 1
    return base * potencia(base, exponente - 1)
```

---

### Ejercicio 6: Búsqueda Binaria Recursiva

**Descripción:**  
Desarrolla una función recursiva para realizar una búsqueda binaria en una lista ordenada.  
**Caso Base:** Si la lista está vacía o el elemento no se encuentra, retorna un indicador de “no encontrado” (por ejemplo, -1).  
**Caso Recursivo:** Compara el elemento central con el valor buscado y llama recursivamente a la función sobre la mitad correspondiente de la lista.

**Pseudocódigo:**  
```python
function busqueda_binaria(lista, valor, inicio, fin):
    if inicio > fin:
        return -1  # No encontrado
    medio = (inicio + fin) // 2
    if lista[medio] == valor:
        return medio
    elif valor < lista[medio]:
        return busqueda_binaria(lista, valor, inicio, medio - 1)
    else:
        return busqueda_binaria(lista, valor, medio + 1, fin)
```

---

### Ejercicio 7: Torre de Hanoi

**Descripción:**  
Resuelve el clásico problema de la Torre de Hanoi utilizando recursividad. El objetivo es mover un conjunto de discos de una varilla a otra, siguiendo estas reglas:
- Solo se puede mover un disco a la vez.
- No se puede colocar un disco grande sobre uno más pequeño.

**Pseudocódigo:**  
```python
function hanoi(n, origen, auxiliar, destino):
    if n == 1:
        print("Mover disco de", origen, "a", destino)
    else:
        hanoi(n - 1, origen, destino, auxiliar)
        print("Mover disco de", origen, "a", destino)
        hanoi(n - 1, auxiliar, origen, destino)
```

---

### Ejercicio 8: Máximo Común Divisor (MCD)

**Descripción:**  
Implementa el algoritmo de Euclides de forma recursiva para encontrar el máximo común divisor de dos números.  
**Caso Base:** Si el segundo número es 0, retorna el primero.  
**Caso Recursivo:** Llama a la función con el segundo número y el residuo de la división del primero por el segundo.

**Pseudocódigo:**  
```python
function mcd(a, b):
    if b == 0:
        return a
    return mcd(b, a % b)
```

---

Cada uno de estos ejercicios te ayudará a comprender y aplicar la recursividad en diferentes contextos. Puedes implementarlos en Python y probarlos con distintos casos para ver cómo se comporta la solución recursiva en cada situación. ¡Buena práctica!



> [!example] Asignaturas / Algoritmia / Introducción / Estrategias diseño algoritmos / Problemas
> - [[Asignaturas/Algoritmia/1. Introducción/1.1 Estrategias de Diseño de Algoritmos/Problemas/Divide y Conquista|Divide y Conquista]]
> 
> ^indexof-asignaturas-algoritmia-introducci-n-estrategias-dise-o-algoritmos-problemas