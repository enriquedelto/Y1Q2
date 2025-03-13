---
tags:
  - asignaturas/algoritmia/idx
---

> [!example] Asignaturas / Algoritmia
> - **Análisis de algoritmos**
> 	- [[1 - Notación asintótica]]
> 	- [[2 - Análisis matemático de algoritmos no recursivos]]
> - **Eficiencia de los algoritmos**
> 	- [[Caso peor, mejor y medio]]
> 	- [[Medidas de Eficiencia]]
> 	- [[Tamaño de Entrada]]
> 	- [[Tiempo de Ejecución]]
> - **Introducción**
> 	- **Estrategias diseño algoritmos**
> 		- [[Algoritmos Golosos (Greedy)]]
> 		- [[Backtracking]]
> 		- [[Branch and Bound]]
> 		- [[Asignaturas/Algoritmia/1. Introducción/1.1 Estrategias de Diseño de Algoritmos/Divide y Conquista|Divide y Conquista]]
> 		- [[Asignaturas/Algoritmia/1. Introducción/1.1 Estrategias de Diseño de Algoritmos/Introducción y Objetivos|Introducción y Objetivos]]
> 		- [[Programación Dinámica]]
> 		- [[Asignaturas/Algoritmia/1. Introducción/1.1 Estrategias de Diseño de Algoritmos/Recursividad|Recursividad]]
> 		- [[Estrategias de Diseño de Algoritmos (idx)]]
> 		- **Problemas**
> 			- [[Asignaturas/Algoritmia/1. Introducción/1.1 Estrategias de Diseño de Algoritmos/Problemas/Divide y Conquista|Divide y Conquista]]
> 			- [[Ejercicios - Recursividad]]
> 			- **Soluciones**
> 				- [[Asignaturas/Algoritmia/1. Introducción/1.1 Estrategias de Diseño de Algoritmos/Problemas/Soluciones/Recursividad|Recursividad]]
> 	- **Modelos de computacion**
> 		- [[Modelos de Computación]]
> 
> ^indexof-asignaturas-algoritmia


#  TEMARIO UNIR Algoritmia y Complejidad

Tema 1. Introducción a las estrategias de diseño de algoritmos

    Introducción y objetivos
    Recursividad
    Divide y conquista
    Otras estrategias

Tema 2. Eficiencia de los algoritmos

    Introducción y objetivos
    Medidas de eficiencia
    Medir el tamaño de la entrada
    Medir el tiempo de ejecución
    Caso peor, mejor y medio

Tema 3.Análisis de algoritmos

    Introducción y objetivos
    Notación asintónica
    Criterios de Análisis matemático de algoritmos no recursivos
    Análisis matemático de algoritmos recursivos
    Análisis empírico de algoritmos

Tema 4. Algoritmos de ordenación

    Introducción y objetivos
    Concepto de ordenación
    Ordenación de la burbuja
    Ordenación por selección
    Ordenación por inserción
    Ordenación por mezcla (merge_sort)
    Ordenación rápida (quick_sort)

Tema 5. Algoritmos con árboles

    Introducción y objetivos
    Concepto de árbol
    Árboles binarios
    Recorridos de árbol
    Representar expresiones

Tema 6. Algoritmos con árboles ordenados y balanceados

    Introducción y objetivos
    Árboles binarios ordenados
    Árboles binarios balanceados

Tema 7. Algoritmos con heaps

    Introducción y objetivos
    Los heaps
    El algoritmo heapsort
    Las colas de prioridad

Tema 8. Algoritmos con grafos

    Introducción y objetivos
    Representación
    Recorrido en anchura
    Recorrido en profundidad
    Ordenación topológica

Tema 9. Algoritmos greedy

    Introducción y objetivos
    La estrategia greedy
    Elementos de la estrategia greedy
    Cambio de monedas
    Problema del viajante
    Problema de la mochila

Tema 10. Búsqueda de caminos mínimos

    Introducción y objetivos
    El problema del camino mínimo
    Arcos negativos y ciclos
    Algoritmo de Dijkstra

Tema 11. Algoritmos greedy sobre grafos

    Introducción y objetivos
    El árbol de recubrimiento mínimo
    El algoritmo de Prim
    El algoritmo de Kruskal
    Análisis de complejidad

Tema 12. Backtracking

    Introducción y objetivos
    El backtracking
    Técnicas alternativas

# TEMARIO CHATGPT

## Algoritmia y Complejidad

1. **Introducción a la Algoritmia**
    
    - **Modelos de computación:** Concepto de algoritmo, RAM vs máquinas de Turing; nociones básicas de computabilidad.
    - **Análisis de algoritmos:** Medidas de complejidad temporal y espacial, notación O(grande), Ω, Θ. Evaluación de peores/best casos.
    - **Herramientas matemáticas:** Recurrencias y métodos de resolución (recursión maestro), demostraciones por inducción, invariantes de bucle.
2. **Estructuras de Datos Fundamentales**
    
    - **Estructuras lineales:** Arrays dinámicos, listas enlazadas, pilas y colas (repaso rápido).
    - **Árboles y grafos básicos:** Árboles binarios de búsqueda balanceados, montículos (heaps), tablas hash ([Syllabus | Introduction to Algorithms | Electrical Engineering and Computer Science | MIT OpenCourseWare](https://ocw.mit.edu/courses/6-006-introduction-to-algorithms-spring-2020/pages/syllabus/#:~:text=This%20is%20an%20introductory%20course,analysis%20techniques%20for%20these%20problems)); representación de grafos (listas de adyacencia, matrices). _(Base para algoritmos eficientes.)_
3. **Técnicas de Diseño de Algoritmos**
    
    - **Divide y vencerás:** Mergesort, Quicksort, ordenación por comparación y límites inferiores ([CS 161: Design and Analysis of Algorithms](http://web.stanford.edu/class/archive/cs/cs161/cs161.1166/syllabus.html#:~:text=,Sorting%20Lower%20Bounds%2C%20Counting%20Sort)); recurrences, selección de la mediana (algoritmo de selección linear) ([CS 161: Design and Analysis of Algorithms](http://web.stanford.edu/class/archive/cs/cs161/cs161.1166/syllabus.html#:~:text=Read%3A%20Ch,1%20Due%20Homework%202%20Released)).
    - **Algoritmos golosos (greedy):** Selección de actividades, algoritmos de caminos mínimos en grafos (Dijkstra) y de árboles de expansión mínima (Prim/Kruskal) ([CS 161: Design and Analysis of Algorithms](http://web.stanford.edu/class/archive/cs/cs161/cs161.1166/syllabus.html#:~:text=Homework%205%20Released%20,%285%2F20%29%20Homework%205%20Due)); correctitud y contraejemplos.
    - **Programación dinámica:** Ejemplos clásicos (Floyd-Warshall, subsecuencia común más larga) ([CS 161: Design and Analysis of Algorithms](http://web.stanford.edu/class/archive/cs/cs161/cs161.1166/syllabus.html#:~:text=Read%3A%20Ch,Prim%27s%20and%20Kruskal%27s%20Algorithms)), optimización de subestructura, tabla de decisiones.
    - **Análisis amortizado:** Técnicas (aggregado, contador, potencial) para analizar secuencias de operaciones (p.ej. incremento de contador binario).
    - **Algoritmos de grafos:** BFS y DFS en profundidad (búsquedas en grafos) ([CS 161: Design and Analysis of Algorithms](http://web.stanford.edu/class/archive/cs/cs161/cs161.1166/syllabus.html#:~:text=Homework%203%20Released%20,4%2F29%29%20Homework%203%20Due)), ordenación topológica, detección de ciclos; caminos más cortos (Bellman-Ford, Dijkstra) ([CS 161: Design and Analysis of Algorithms](http://web.stanford.edu/class/archive/cs/cs161/cs161.1166/syllabus.html#:~:text=Study%20for%20Midterm%20,4%20%285%2F13%29%20Homework%204%20Due)); flujo máximo y emparejamientos en grafos bipartitos ([CS 161: Design and Analysis of Algorithms](http://web.stanford.edu/class/archive/cs/cs161/cs161.1166/syllabus.html#:~:text=Homework%206%20Released%20,at%207pm)).
4. **Complejidad Computacional**
    
    - **Clases de complejidad:** P, NP, NP-completo, NP-hard. Problemas NP-completos clásicos (SAT, clique, viajante).
    - **Reducciones polinomiales:** Técnicas para demostrar NP-completitud.
    - **Computabilidad y límites:** Noción de problemas indecidibles (mención breve) y la pregunta P vs NP ([Computer Science 125: Algorithms & Complexity](https://people.seas.harvard.edu/~cs125/#:~:text=strong%20mathematical%20preparation%2C%20to%20be,NP%20question)).
    - **Complejidad espacio y clases adicionales:** (Opcional según tiempo) PSPACE, NP≠coNP (vislumbre de temas avanzados).
5. **Algoritmos Aleatorizados y Aproximativos**
    
    - **Algoritmos probabilísticos:** Uso de aleatoriedad en computación, ejemplo: Quicksort aleatorizado, algoritmo de Karger para cortes mínimos ([CS 161: Design and Analysis of Algorithms](http://web.stanford.edu/class/archive/cs/cs161/cs161.1166/syllabus.html#:~:text=Homework%205%20Released%20,%285%2F20%29%20Homework%205%20Due)); análisis de expectativa y probabilidad de error.
    - **Algoritmos Monte Carlo vs Las Vegas:** Distintos paradigmas de aleatorización, cotas de complejidad esperada.
    - **Algoritmos de aproximación:** Estrategias para problemas NP-difíciles, factor de aproximación, ejemplos (Vertex Cover, mochila fraccionaria), noción de PTAS/FPTAS ([Syllabus | Design and Analysis of Algorithms | Electrical Engineering and Computer Science | MIT OpenCourseWare](https://ocw.mit.edu/courses/6-046j-design-and-analysis-of-algorithms-spring-2015/pages/syllabus/#:~:text=,approximation%20factor%20of%20an%20algorithm)).
6. **Aplicaciones de Aprendizaje Automático en Algoritmia**
    
    - **Algoritmos en Machine Learning:** Introducción a algoritmos de aprendizaje supervisado y no supervisado (p. ej. regresión lineal, árboles de decisión, _clustering_ k-medias) y análisis de su complejidad.
    - **Optimización para ML:** Descenso por gradiente y variantes (SGD) como algoritmos para entrenar modelos; coste computacional en grandes conjuntos de datos.
    - **Algoritmos impulsados por ML:** Cómo las técnicas de ML mejoran algoritmos clásicos – _learning-augmented algorithms_ (ejemplo: índices aprendidos vs. estructuras de datos tradicionales, predicción de caché) ([Machine Learning for Algorithm Design (MS&E/CS 331) | MS&E/CS 331](https://vitercik.github.io/ml4algs/#:~:text=Machine%20learning%20has%20become%20a,tools%20for%20providing%20provable%20guarantees)).
    - **Tendencias actuales:** Redes neuronales como procedimientos algorítmicos (nociones básicas) y consideraciones de complejidad en la era del big data.

**Mejoras clave y justificación:** Este índice refuerza el equilibrio entre teoría (análisis formal, pruebas de correctitud) y práctica (implementación y experimentación). Se incluye explícitamente la **relación entre algoritmos y programación**, siguiendo el enfoque de MIT de vincular ambos aspectos ([Syllabus | Introduction to Algorithms | Electrical Engineering and Computer Science | MIT OpenCourseWare](https://ocw.mit.edu/courses/6-006-introduction-to-algorithms-spring-2020/pages/syllabus/#:~:text=This%20is%20an%20introductory%20course,analysis%20techniques%20for%20these%20problems)) – los estudiantes no solo diseñan algoritmos, también los programan y miden su rendimiento. En comparación con el temario original, se incorporan temas punteros: algoritmos aleatorizados y de aproximación (presentes en cursos avanzados como Harvard CS125 ([Computer Science 125: Algorithms & Complexity](https://people.seas.harvard.edu/~cs125/#:~:text=strong%20mathematical%20preparation%2C%20to%20be,NP%20question))) para abordar problemas complejos más allá de los algoritmos deterministas clásicos. Como novedad destacada, se añade un módulo sobre **Machine Learning en algoritmia**, ausente en el plan original: dado el auge del aprendizaje automático, es valioso que los estudiantes reconozcan cómo se diseñan algoritmos de ML y cómo las técnicas de ML pueden integrarse en el diseño de algoritmos ([Machine Learning for Algorithm Design (MS&E/CS 331) | MS&E/CS 331](https://vitercik.github.io/ml4algs/#:~:text=Machine%20learning%20has%20become%20a,tools%20for%20providing%20provable%20guarantees)). Esto alinea la materia con tendencias modernas y prepara a los alumnos para aplicaciones en ciencia de datos. Además, la sección de aplicaciones prácticas se amplía – por ejemplo, proyectos donde los alumnos implementan y comparan algoritmos en datasets reales – fomentando la comprensión profunda y competencias aplicadas en problemas del mundo real.

# TAGS SUGERIDOS

Aquí te dejo una propuesta de lista de _tags_ que abarca de forma completa los temas y subtemas de ambos temarios, combinando las ideas del temario UNIR y del temario ChatGPT. Puedes adaptarla o refinarla según tus necesidades.

---

**1. Etiqueta principal:**

- `#asignaturas/algoritmia`

**2. Subtemas y subdivisiones:**

- **Introducción y Fundamentos**
    
    - `#asignaturas/algoritmia/introduccion`
        - `#asignaturas/algoritmia/introduccion/estrategias_disenio_algoritmos`  
            _(Incluye recursividad, divide y conquista y otras estrategias – UNIR)_
        - `#asignaturas/algoritmia/introduccion/modelos_computacion`  
            _(Concepto de algoritmo, RAM vs Turing, nociones de computabilidad – ChatGPT)_
        - `#asignaturas/algoritmia/introduccion/herramientas_matematicas`  
            _(Recurrencias, inducción, invariantes, etc. – ChatGPT)_
- **Eficiencia de los Algoritmos**
    
    - `#asignaturas/algoritmia/eficiencia`
        - `#asignaturas/algoritmia/eficiencia/medidas`  
            _(Medidas de eficiencia, notación asintótica y evaluación de casos)_
        - `#asignaturas/algoritmia/eficiencia/tamano_entrada`
        - `#asignaturas/algoritmia/eficiencia/tiempo_ejecucion`
        - `#asignaturas/algoritmia/eficiencia/casos_peor_mejor_medio`
- **Análisis de Algoritmos**
    
    - `#asignaturas/algoritmia/analisis`
        - `#asignaturas/algoritmia/analisis/notacion_asintotica`
        - `#asignaturas/algoritmia/analisis/criterios_no_recursivos`
        - `#asignaturas/algoritmia/analisis/algoritmos_recursivos`
        - `#asignaturas/algoritmia/analisis/empirico`
- **Algoritmos de Ordenación**
    
    - `#asignaturas/algoritmia/ordenacion`
        - `#asignaturas/algoritmia/ordenacion/burbuja`
        - `#asignaturas/algoritmia/ordenacion/seleccion`
        - `#asignaturas/algoritmia/ordenacion/insercion`
        - `#asignaturas/algoritmia/ordenacion/merge_sort`
        - `#asignaturas/algoritmia/ordenacion/quick_sort`
- **Algoritmos con Árboles**
    
    - `#asignaturas/algoritmia/arboles`
        - `#asignaturas/algoritmia/arboles/concepto`
        - `#asignaturas/algoritmia/arboles/binarios`
        - `#asignaturas/algoritmia/arboles/recorridos`
        - `#asignaturas/algoritmia/arboles/expresiones`
- **Árboles Ordenados y Balanceados**
    
    - `#asignaturas/algoritmia/arboles_ordenados_balanceados`
        - `#asignaturas/algoritmia/arboles_ordenados_balanceados/binarios_ordenados`
        - `#asignaturas/algoritmia/arboles_ordenados_balanceados/balanceados`
- **Algoritmos con Heaps**
    
    - `#asignaturas/algoritmia/heaps`
        - `#asignaturas/algoritmia/heaps/conceptos`
        - `#asignaturas/algoritmia/heaps/heapsort`
        - `#asignaturas/algoritmia/heaps/colas_prioridad`
- **Algoritmos con Grafos**
    
    - `#asignaturas/algoritmia/grafos`
        - `#asignaturas/algoritmia/grafos/representacion`
        - `#asignaturas/algoritmia/grafos/bfs`
        - `#asignaturas/algoritmia/grafos/dfs`
        - `#asignaturas/algoritmia/grafos/ordenacion_topologica`
        - _(Complemento desde ChatGPT: detección de ciclos, caminos más cortos, flujo máximo, etc.)_
- **Técnicas Greedy (Algoritmos Golosos)**
    
    - `#asignaturas/algoritmia/greedy`
        - `#asignaturas/algoritmia/greedy/estrategia`
        - `#asignaturas/algoritmia/greedy/elementos`
        - `#asignaturas/algoritmia/greedy/cambio_monedas`
        - `#asignaturas/algoritmia/greedy/viajante`
        - `#asignaturas/algoritmia/greedy/mochila`
        - `#asignaturas/algoritmia/greedy/arbol_recubrimiento_minimo`
        - `#asignaturas/algoritmia/greedy/prim`
        - `#asignaturas/algoritmia/greedy/kruskal`
        - `#asignaturas/algoritmia/greedy/analisis_complejidad`
- **Búsqueda de Caminos Mínimos**
    
    - `#asignaturas/algoritmia/caminos_minimos`
        - `#asignaturas/algoritmia/caminos_minimos/problema`
        - `#asignaturas/algoritmia/caminos_minimos/arcos_negativos_ciclos`
        - `#asignaturas/algoritmia/caminos_minimos/dijkstra`
- **Backtracking**
    
    - `#asignaturas/algoritmia/backtracking`
        - `#asignaturas/algoritmia/backtracking/metodologia`
        - `#asignaturas/algoritmia/backtracking/tecnicas_alternativas`
- **Estructuras de Datos Fundamentales**
    
    - `#asignaturas/algoritmia/estructuras_datos`
        - `#asignaturas/algoritmia/estructuras_datos/lineales`  
            _(Arrays, listas, pilas, colas)_
        - `#asignaturas/algoritmia/estructuras_datos/arboles_grafos_basicos`  
            _(Árboles binarios de búsqueda, montículos, tablas hash, representaciones de grafos)_
- **Técnicas de Diseño de Algoritmos Adicionales**
    
    - **Divide y Vencerás**
        - `#asignaturas/algoritmia/divide_venceras`
            - `#asignaturas/algoritmia/divide_venceras/mergesort`
            - `#asignaturas/algoritmia/divide_venceras/quicksort`
            - `#asignaturas/algoritmia/divide_venceras/seleccion_mediana`
    - **Programación Dinámica**
        - `#asignaturas/algoritmia/programacion_dinamica`
            - `#asignaturas/algoritmia/programacion_dinamica/floyd_warshall`
            - `#asignaturas/algoritmia/programacion_dinamica/subsecuencia_comun`
            - `#asignaturas/algoritmia/programacion_dinamica/optimizacion_subestructura`
    - **Análisis Amortizado**
        - `#asignaturas/algoritmia/analisis_amortizado`
            - `#asignaturas/algoritmia/analisis_amortizado/metodo_aggregado`
            - `#asignaturas/algoritmia/analisis_amortizado/contador`
            - `#asignaturas/algoritmia/analisis_amortizado/metodo_potencial`
- **Complejidad Computacional**
    
    - `#asignaturas/algoritmia/complejidad`
        - `#asignaturas/algoritmia/complejidad/clases`  
            _(P, NP, NP-completo, NP-hard)_
        - `#asignaturas/algoritmia/complejidad/reducciones`
        - `#asignaturas/algoritmia/complejidad/computabilidad_limites`
        - `#asignaturas/algoritmia/complejidad/espacio`
- **Algoritmos Aleatorizados y Aproximativos**
    
    - `#asignaturas/algoritmia/aleatorizados`
        - `#asignaturas/algoritmia/aleatorizados/probabilisticos`
        - `#asignaturas/algoritmia/aleatorizados/monte_carlo`
        - `#asignaturas/algoritmia/aleatorizados/las_vegas`
    - `#asignaturas/algoritmia/aproximacion`
        - `#asignaturas/algoritmia/aproximacion/estrategias`
        - `#asignaturas/algoritmia/aproximacion/ptas_fptas`
- **Aplicaciones de Machine Learning en Algoritmia**
    
    - `#asignaturas/algoritmia/ml`
        - `#asignaturas/algoritmia/ml/algoritmos`  
            _(Aprendizaje supervisado y no supervisado, árboles de decisión, clustering, etc.)_
        - `#asignaturas/algoritmia/ml/optimizacion`  
            _(Descenso por gradiente, SGD, etc.)_
        - `#asignaturas/algoritmia/ml/algoritmos_impulsados`  
            _(Learning-augmented algorithms, índices aprendidos, etc.)_
        - `#asignaturas/algoritmia/ml/tendencias`  
            _(Redes neuronales, big data y consideraciones actuales)_

---

Esta estructura jerárquica te permitirá etiquetar de forma granular cada contenido o tema que abordes, facilitando búsquedas, organización y vinculación de ideas. ¡Espero que te resulte útil!




