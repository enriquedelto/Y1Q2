---
tags:
  - asignaturas/tecnología_de_computadores/introducción
---
# Unidades Funcionales

La amplia variedad de sistemas que pueden considerarse computadores, desde **microprocesadores de un solo chip** (de bajo coste) hasta **supercomputadoras multimillonarias**, influye directamente en el costo, tamaño, prestaciones y aplicaciones de cada sistema.

---

## Arquitectura vs. Organización

- **Arquitectura de Computadores:**  
  Se refiere a los atributos visibles para el programador y que afectan directamente la ejecución lógica de un programa. Incluye aspectos como:  
  - Conjunto de instrucciones.  
  - Número de bits utilizados para representar datos.  
  - Mecanismos de entrada y salida (E/S).  
  - Técnicas de direccionamiento de memoria.

- **Organización de Computadores:**  
  Se enfoca en las unidades funcionales y sus interconexiones, las cuales determinan las características de la arquitectura. Algunos detalles de organización, que son transparentes para el programador, son:  
  - Señales de control.  
  - Interfaces entre computador y periféricos.  
  - Tecnología empleada en la memoria.

En la práctica, los fabricantes diseñan familias de modelos que comparten la misma **arquitectura** para preservar la inversión en software, pero varían en **organización** para ofrecer diferentes precios y prestaciones. Así, un usuario puede optar por un modelo más modesto y, en el futuro, actualizar a uno más potente sin descartar el software previamente desarrollado.

---

## Naturaleza Jerárquica del Computador

Un **computador** es un sistema complejo y jerárquico compuesto por millones de componentes electrónicos básicos. Según William Stallings, el comportamiento en cada nivel depende únicamente de una caracterización abstracta y simplificada del nivel inferior. Este enfoque permite al diseñador enfocarse en un nivel concreto a la vez, analizando:

- **Estructura:**  
  El modo en que se interconectan los componentes.

- **Funcionamiento:**  
  El modo de operación de cada componente que forma parte de la estructura.

Para estudiar estos sistemas se suele utilizar un enfoque **top-down**, comenzando con una visión general que se descompone en subpartes.

---

## Funciones Básicas del Computador

Los computadores deben ser capaces de llevar a cabo cuatro funciones fundamentales:

1. **Procesamiento de Datos:**  
   Capacidad para ejecutar cálculos y manipular datos en diversas formas y requisitos.

2. **Almacenamiento de Datos:**  
   - **Corto Plazo:** Guardar temporalmente los datos en uso.  
   - **Largo Plazo:** Conservar archivos y datos para futuras consultas y actualizaciones.

3. **Transferencia de Datos:**  
   Facilitar el intercambio de información entre el computador y el entorno externo, ya sea a través de dispositivos de entrada/salida o mediante comunicación a larga distancia.

4. **Control:**  
   Coordinar las operaciones de procesamiento, almacenamiento y transferencia mediante instrucciones proporcionadas por uno o varios entes de control.

Dentro del computador, la **unidad de control** se encarga de gestionar los recursos y dirigir las operaciones de los diferentes bloques funcionales.

---

## Componentes Estructurales Principales

Utilizando un esquema jerárquico, se pueden identificar cuatro componentes estructurales fundamentales:

1. **Unidad Central de Procesamiento (CPU):**  
   También conocida como procesador, controla el funcionamiento del computador y ejecuta el procesamiento de datos.  
   - **Componentes Internos de la CPU:**  
     - **Unidad de Control:** Regula el funcionamiento de la CPU.  
     - **Unidad Aritmético-Lógica (ALU):** Ejecuta operaciones aritméticas y lógicas.  
     - **Registros:** Almacenan datos internamente.  
     - **Interconexiones:** Permiten la comunicación entre la unidad de control, la ALU y los registros.

2. **Memoria Principal:**  
   Responsable del almacenamiento temporal y permanente de datos.

3. **Entrada/Salida (E/S):**  
   Facilita la transferencia de datos entre el computador y dispositivos externos o periféricos.

4. **Sistema de Interconexión:**  
   Permite la comunicación entre la CPU, la memoria principal y los dispositivos de E/S.

Cabe destacar que estos componentes pueden existir en múltiples instancias dentro de un sistema, según el diseño y las prestaciones deseadas.
