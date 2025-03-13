# Sistema Bóveda Obsidian

Este sistema está diseñado para automatizar el proceso de organización en Obsidian, facilitando la gestión de grandes volúmenes de notas de forma automática y escalable. Se apoya en dos plugin principales:

## Auto Note Mover

**Auto Note Mover** es un plugin que mueve automáticamente las notas activas a carpetas específicas según reglas definidas por el usuario.
### **Funcionamiento**

1. Se registra una regla basada en una etiqueta (_tag_) o el título de la nota.
2. Si una nota activa coincide con una regla, se mueve automáticamente a la carpeta de destino.

### **Reglas**

- Se define una **carpeta de destino** y un **criterio de coincidencia** (etiqueta o título).
- Las reglas se evalúan en orden; la primera coincidencia determina la carpeta de destino.
- Para etiquetas, se debe incluir `#` al inicio.
- Para títulos, se usa expresiones regulares en JavaScript.

## Índex Notes

El **Índex Notes Plugin** permite generar automáticamente índices dentro de las notas en Obsidian, organizando enlaces según sus etiquetas (_tags_). Estos índices se actualizan en tiempo real cuando las etiquetas cambian, reflejando la estructura de la base de conocimientos en la vista de grafo.

# Organización

La idea central de "La bóveda" es crear una herramienta para gestionar y organizar notas, que se estructura en dos grandes categorías o carpetas: **Asignaturas** y **Enciclopedia**. A continuación se detalla y formaliza esta propuesta:

## Visión General

"La bóveda" se concibe como un sistema integral para la gestión del conocimiento, diseñado para almacenar y organizar notas de forma que el usuario pueda consultar y ampliar la información de manera eficiente. La herramienta pretende ser flexible y adaptable a distintos estilos de estudio o trabajo, permitiendo tanto la consolidación de temas amplios como el análisis profundo de conceptos específicos.
## Estructura y Funcionalidades

### 1. Carpeta **Asignaturas**

- **Objetivo:**  
  Esta carpeta está destinada a la recopilación y organización de notas relacionadas con un temario específico. La idea es agrupar diversos conceptos y conocimientos en un mismo lugar, formando un cuerpo de información cohesivo y estructurado.
  
- **Características:**  
  - **Temario Fijo:** Las notas se organizan siguiendo una estructura predeterminada, lo que facilita la revisión y el seguimiento del progreso en el estudio de un tema o asignatura.
  - **Integración de Conceptos:** Aquí se reúnen distintos conceptos que, en conjunto, ofrecen una visión global y coherente de la materia tratada.
  - **Facilidad de Consulta:** Al estar organizadas de manera sistemática, estas notas permiten una búsqueda rápida y eficiente del contenido, ideal para revisiones o estudios planificados.

### 2. Carpeta **Enciclopedia**

- **Objetivo:**  
  Esta sección se orienta a la gestión de notas de carácter más atómico y focalizado. En lugar de agrupar varios conceptos en un solo temario, cada entrada se dedica a desarrollar y profundizar en una única idea o concepto.
  
- **Características:**  
  - **Enfoque Detallado:** Cada nota se centra en un concepto específico, permitiendo una exploración profunda y detallada.
  - **Modularidad:** La estructura atómica facilita la actualización y la expansión del contenido, ya que cada entrada se puede modificar de manera independiente sin afectar a otras.
  - **Referencia Rápida:** Ideal para consultas puntuales en las que se necesita información precisa sobre un tema concreto, sin necesidad de recorrer un temario completo.
