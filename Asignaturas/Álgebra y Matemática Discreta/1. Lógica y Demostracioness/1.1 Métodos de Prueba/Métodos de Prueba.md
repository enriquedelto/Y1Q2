---
tags:
  - asignaturas/algebra_y_matematica_discreta/logica_y_demostraciones/metodos_de_prueba/
---
# Métodos de Prueba en Matemática Discreta

Los métodos de prueba utilizados para la demostración de teoremas o sentencias son variados y su elección depende de la naturaleza de la sentencia a demostrar. Los métodos más importantes que se verán en este y el siguiente tema son:

- **Método de prueba directo**
- **Método de prueba indirecto**
- **Métodos de inducción**

## Enfoque de los Métodos Directo e Indirecto

Dada una sentencia condicional ($p \to q$), la diferencia fundamental entre los métodos directos e indirectos radica en el siguiente enfoque:

- **Método Directo:** Se analiza la premisa $p$ para extraer conclusiones sobre $q$.
- **Método Indirecto:** Se estudia $q$ para extraer conclusiones sobre la implicación $p \to q$.

## Demostraciones Directas

Una implicación condicional, por ejemplo $p \to q$, se puede demostrar de forma directa analizando $p$. Suponiendo que $p$ es verdadera, se utilizan reglas de inferencia y teoremas ya demostrados para concluir que $q$ también es verdadera, garantizando que nunca se presente el caso en que $q$ sea falsa.
### Ejemplo 3

**Definición:**  
Un número entero $n$ es **par** si existe un entero $k$ tal que $n = 2k$ y es **impar** si existe un entero $k$ tal que $n = 2k + 1$.

**Teorema a demostrar:**  
*Si $n$ es un entero impar, entonces $n^2$ es un número entero impar.*

**Solución (demostración directa):**

1. Suponer que $n$ es impar, es decir, existe un entero $k$ tal que:  
   $$n = 2k + 1.$$
2. Calcular $n^2$:
   $$n^2 = (2k + 1)^2 = 4k^2 + 4k + 1 = 2(2k^2 + 2k) + 1.$$
3. Se observa que $n^2$ es de la forma $2m + 1$, donde $m = 2k^2 + 2k$ es un entero, lo que confirma que $n^2$ es impar.

## Demostraciones Indirectas

Recordemos que la implicación $p \to q$ es equivalente a su contrarrecíproca:  
$$\neg q \to \neg p.$$
Este hecho permite analizar la veracidad de la sentencia estudiando la contrarrecíproca, utilizando lo que se conoce como **demostración indirecta**.

### Ejemplo 4: Infinitud de los Números Primos (Resultado de Euclides)

**Objetivo:** Demostrar que hay infinitos números primos.

**Solución:**

1. **Suposición contraria:**  
   Supongamos que los números primos son finitos y sean:  
   $$2, 3, 5, 7, \dots, P,$$  
   donde $P$ es el mayor de todos.

2. **Construcción del número:**  
   Consideramos el número:  
   $$H = (2 \cdot 3 \cdot 5 \cdot 7 \cdot \dots \cdot P) + 1.$$

3. **Análisis del número $H$:**  
   - $H$ no es primo, pues es mayor que $P$.
   - Al dividir $H$ por cualquiera de los números primos de la lista, siempre se obtiene un resto de 1, lo que implica que ninguno de estos números es divisor de $H$.

4. **Conclusión:**  
   Se llega a una contradicción, ya que se supone que $P$ era el mayor primo, pero la construcción de $H$ muestra que debe existir un divisor primo de $H$ mayor que $P$. Por lo tanto, la afirmación inicial (que los primos son finitos) es falsa, demostrando que hay infinitos números primos.

> **Nota:** En este ejemplo se combinan dos métodos: la **demostración indirecta** (rechazando la suposición contraria) y la **reducción al absurdo** (llegando a una contradicción).

## Métodos de Razonamiento

- **Deductivo:**  
  Los métodos presentados hasta ahora (directo e indirecto) son de razonamiento deductivo, ya que parten de proposiciones generales para llegar a conclusiones particulares.

- **Inductivo:**  
  Por contraposición, el razonamiento inductivo construye proposiciones generales a partir de observaciones particulares. En el siguiente tema se abordará el método de demostración por inducción.
