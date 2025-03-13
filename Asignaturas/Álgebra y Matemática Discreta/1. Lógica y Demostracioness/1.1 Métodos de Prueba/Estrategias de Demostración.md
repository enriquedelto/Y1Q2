---
tags:
  - asignaturas/algebra_y_matematica_discreta/logica_y_demostraciones/metodos_de_prueba
---
Una vez definidos los métodos más utilizados para realizar demostraciones, surge la pregunta: **¿Cuál es el método más apropiado para demostrar un teorema?**  
La respuesta no siempre es única y, en ocasiones, dependerá de la experiencia, la intuición o la dificultad de la demostración. A continuación, se ofrecen pautas y estrategias que pueden ayudar en el proceso.

## Evaluación Inicial

1. **Demostración Directa:**  
   - Desarrollar las definiciones presentes en la hipótesis inicial.
   - Utilizar axiomas, teoremas y reglas de inferencia conocidos.
   - Si se logra deducir la conclusión de forma lógica, se obtiene la demostración.

2. **Demostración Indirecta:**  
   - Si la demostración directa no es evidente, se asume que la conclusión es falsa.
   - Se demuestra que esta asunción lleva a una contradicción.
  
En ambos casos, la habilidad para manejar teoremas, axiomas y conectores lógicos es fundamental.

## Principales Estrategias de Demostración

### I. Razonamiento Hacia Delante y Hacia Atrás

- **Razonamiento Hacia Delante:**  
  Se parte de la hipótesis y se realizan pasos lógicos hasta alcanzar la conclusión.  
  Es útil para demostraciones sencillas, pero en ocasiones la conclusión puede estar "lejos" de la hipótesis, lo que dificulta el proceso.

- **Razonamiento Hacia Atrás:**  
  Se inicia desde la conclusión y se trabaja de forma lógica hacia la hipótesis.  
  Esta estrategia es especialmente útil en razonamientos indirectos, donde se demuestra que si la propiedad $p \to q$ se cumple, se puede llegar a la conclusión $q$.

#### Ejemplo 5: Teorema de Pitágoras

- **Contexto:**  
  Se considera un triángulo rectángulo con catetos de longitudes $a$ y $b$, e hipotenusa de longitud $h$.

- **Construcción Geométrica:**  
  - Se construye una figura en la que el cuadrado interior tiene lado $h$ y el cuadrado mayor tiene lado $a+b$.
  - La suma del área del cuadrado interior y cuatro veces el área de los triángulos es igual al área del cuadrado mayor.

- **Demostración Matemática:**  
  Se establece la siguiente igualdad:
  $$
  h^2 + 4(\frac{1}{2}ab) = (a+b)^2 \quad \longrightarrow \quad h^2 + 2ab = a^2 + 2ab + b^2 \quad \longrightarrow \quad h^2 = a^2 + b^2
  $$
  Esto demuestra de forma directa el teorema de Pitágoras.

### II. Demostración por Casos

- **Estrategia:**  
  Demostrar la proposición para cada uno de los casos particulares.
  
- **Aplicación:**  
  Se utiliza, por ejemplo, para demostrar propiedades numéricas distinguiendo entre números pares e impares.  
  **Importante:** Asegurarse de cubrir **todos** los casos posibles para evitar conclusiones erróneas.

### III. Adaptación de Demostraciones Conocidas

- **Estrategia:**  
  Partir de una demostración ya conocida y adaptarla a la nueva situación.
  
- **Ventaja:**  
  Comprender a fondo una demostración conocida puede ofrecer pistas y estrategias útiles para la demostración de otros teoremas.

---

# Errores en la Demostración

Incluso demostraciones bien planteadas pueden contener errores si alguno de los pasos lógicos es defectuoso. Uno de los errores más comunes es cometer fallos en aritmética o álgebra básica, lo que puede llevar a conclusiones incorrectas.

## Ejemplo 6: La "Demostración" Errónea de que $1 = 2$

| Paso | Razonamiento                | Comentario                                      |
| ---- | --------------------------- | ----------------------------------------------- |
| (1)  | $a = b$                     | Dato inicial                                    |
| (2)  | $a^2 = ab$                  | Multiplicando ambos lados de (1) por $a$        |
| (3)  | $a^2 - b^2 = ab - b^2$      | Restando $b^2$ a ambos lados de (2)             |
| (4)  | $(a - b)(a + b) = b(a - b)$ | Factorizando ambos lados de (3)                 |
| (5)  | $a + b = b$                 | Dividiendo ambos lados de (4) por (a - b)       |
| (6)  | $2b = b$                    | Reemplazando $a$ por $b$ en (5) y simplificando |
| (7)  | $2 = 1$                     | Dividiendo ambos lados de (6) por $b$           |

### Análisis del Error

- **Problema en el Paso (5):**  
  La división por `(a - b)` es inválida, ya que, según el paso (1) $a = b$, se tiene que `(a - b) = 0`. 
  Dividir por cero es una operación no definida, lo que invalida la demostración.
