---
tags:
  - asignaturas/algoritmia/eficiencia_de_los_algoritmos/medidas_de_eficiencia
---


Las **medidas de eficiencia** son herramientas fundamentales en el análisis de algoritmos que permiten evaluar y comparar el rendimiento de estos en función de los recursos que consumen, principalmente **tiempo de ejecución** y **espacio (memoria)**. Esto es especialmente relevante cuando el tamaño de la entrada (n) crece, ya que nos ayuda a predecir cómo se comportará el algoritmo en escenarios de mayor demanda.

# Aspectos Clave

- **Tiempo vs. Espacio**
	Aunque el tiempo de ejecución es el más habitual (cuántos pasos u operaciones realiza un algoritmo), también es importante considerar la cantidad de memoria que utiliza.
- **Análisis Asintótico:**
	**Big-O:** Se utiliza para describir el peor escenario posible, es decir, la cota superior del crecimiento del algoritmo.
	**Big-Theta:** Indica un límite ajustado, mostrando un crecimiento exacto en el sentido asintótico cuando se consideran tanto cotas superiores como inferiores.
	**Big-Omega:** Se enfoca en la cota inferior, es decir, el comportamiento mínimo garantizado del algoritmo en condiciones favorables.
- **Abstracción de Factores Constantes:**
	En el análisis asintótico se ignoran los coeficientes constantes y términos de menor orden, centrándose en cómo se comporta el algoritmo a medida que el tamaño de la entrada tiende a infinito.
- **Evaluación de Diferentes Casos:**
	**Caso Peor:** Describe la situación en la que el algoritmo tiene el rendimiento más lento (usualmente relacionado con la notación Big-O).
	**Caso Mejor:** Representa la situación más favorable (relacionado con Big-Omega).
	**Caso Medio:** **:** Se refiere a un análisis promediado, considerando la distribución de posibles entradas y su probabilidad de ocurrencia.
- **Aplicación Práctica y Comparativa:**
	Conocer estas medidas permite:
		- Comprar algoritmos de forma teórica.
		- Identificar cuáles son más eficientes en función del problema.
		- Optimizar el diseño y la implementación de algoritmos.
		- Completar el análisis teórico con evaluaciones empíricas (mediación real de tiempo de ejecución y uso de recursos).