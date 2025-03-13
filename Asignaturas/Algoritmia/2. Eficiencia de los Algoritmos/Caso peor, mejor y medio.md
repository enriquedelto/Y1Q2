---
tags:
  - asignaturas/algoritmia/eficiencia_de_los_algoritmos
---
En algunos algoritmos, el coste de ejecución **$C(n)$** depende principalmente del tamaño de la entrada $n$. Sin embargo, en otros algoritmos, especialmente aquellos con sentencias condicionales, el coste de ejecución varía no solo con el número de elementos, sino también con los valores específicos de estos.

---

## Dependencia del Coste en el Tamaño y Valor de la Entrada

- **Algoritmos sin condicionales:**  
  La función **$C(n)$** mide razonablemente la eficiencia del algoritmo en función de $n$.

- **Algoritmos con condicionales:**  
  El coste de ejecución depende tanto del número de elementos de entrada como de los valores de estos elementos.

---

## Tipos de Coste Computacional

- **Caso Peor $\left(C_{\text{worst}}(n)\right)$:**  
  Representa el número máximo de veces que se ejecuta la operación con $n$ elementos de entrada.

- **Caso Mejor $\left(C_{\text{best}}(n)\right)$:**  
  Indica el número mínimo de veces que se ejecuta la operación con $n$ elementos de entrada.

- **Caso Medio $\left(C_{\text{avg}}(n)\right)$:**  
  Se utiliza cuando se conoce la distribución estadística de los datos y se analiza el coste computacional promedio.

> **Recomendación:**  
> Si no se conoce la distribución de los datos, es aconsejable estudiar el caso peor para garantizar una estimación conservadora del rendimiento del algoritmo.
