---
tags:
  - asignaturas/tecnología_de_computadores/información_y_sistemas_de_numeración
---
## La Unidad Aritmético-Lógica (ALU)

La **unidad aritmético-lógica (ALU)** es un circuito esencial en el computador que se encarga de realizar:

- **Operaciones aritméticas:** suma, resta, multiplicación y división.  
- **Operaciones lógicas:** evaluaciones de verdadero/falso o sí/no.

---

## Integración de la ALU en el Computador

El funcionamiento global del computador se basa en la interacción entre la ALU y otros componentes, cuyo objetivo es **suministrar datos** para su procesamiento y **recuperar los resultados** generados. Entre estos componentes se encuentran:

- **Unidad de Control:** Envía señales que gobiernan el funcionamiento de la ALU y gestionan la transferencia de datos.
- **Registros:**  
  - **Registros de entrada:** Introducen los datos en la ALU.  
  - **Registros de salida:** Almacenan los resultados obtenidos.
- **Memoria y dispositivos de entrada/salida:** Proveen la información necesaria para las operaciones.

---

## Funcionamiento Interno de la ALU

La ALU trabaja con dispositivos lógicos digitales que pueden:

- **Almacenar información:** Representada en dígitos binarios (1 y 0).  
- **Realizar operaciones lógicas elementales:** Basadas en principios booleanos.

### Uso de Indicadores

El procesador dispone de **indicadores** (también registros) que se activan en función del resultado de la operación. Por ejemplo:

- **Indicador de desbordamiento:**  
  - Se activa (valor 1) si el resultado de la operación excede la longitud del registro.
  - Permanece inactivo (valor 0) si el resultado cabe en el registro.

---

En resumen, la ALU es el núcleo de procesamiento del computador, recibiendo datos a través de sus registros de entrada, realizando operaciones aritméticas y lógicas, y devolviendo los resultados a través de los registros de salida, todo ello coordinado mediante señales provenientes de la unidad de control. Esta arquitectura se fundamenta en el uso de dispositivos lógicos digitales que permiten almacenar y procesar información en formato binario.