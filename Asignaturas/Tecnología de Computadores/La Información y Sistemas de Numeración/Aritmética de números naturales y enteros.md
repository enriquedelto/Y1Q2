---
tags:
  - asignaturas/tecnología_de_computadores/información_y_sistemas_de_numeración
---
# Negación

La **negación** de un número binario implica cambiar su signo:

- En **signo-magnitud**, la negación se realiza simplemente invirtiendo el bit de signo.
- En **complemento a dos**, la negación implica dos pasos:
  1. Invertir todos los bits del número (complemento a uno).
  2. Sumar 1 al resultado obtenido.

$$
\begin{array}{c|ccccc|l}
 & 0 & 1 & 0 & 0 & 1 & (+9)\quad\text{Número original (complemento a dos)} \\
\hline
\text{Invertir bits} & 1 & 0 & 1 & 1 & 0 & \\
+ & & & & & 1 & \text{Sumar 1 bit} \\
\hline
\text{Resultado} & 1 & 0 & 1 & 1 & 1 & (-9)\quad\text{Número negado (complemento a dos)}
\end{array}
$$

# Suma

Supongamos que queremos sumar **+9** y **+7** en complemento a dos usando 6 bits.
Realizamos la suma (mostrando, de forma resumida, el proceso con acarreo):

$$
\begin{array}{r|cccccccc}
\text{Acarreo:}  &   & 1 & 1 & 0 & 0 &   \\ \hline
\text{Número 1:} & 0 & 0 & 1 & 0 & 0 & 1 \\
\text{Número 2:} & 0 & 0 & 0 & 1 & 1 & 1 \\ \hline
\text{Suma:}     & 0 & 1 & 0 & 0 & 0 & 0 & \quad (+16)
\end{array}
$$

El resultado es **+16** (en 6 bits: `010000`).

# Resta

Para restar **7** de **9** (es decir, calcular 9 – 7) en complemento a dos con 6 bits, seguimos estos pasos:

1. Obtener el complemento a dos de **+7** para obtener **-7**:

   - **Complemento a uno (invertir bits):**
$$
\begin{array}{c|cccccc|l}
\text{Original:} & 0 & 0 & 0 & 1 & 1 & 1 & (+7)\\ \hline
\text{Invertido:} & 1 & 1 & 1 & 0 & 0 & 0 & \\
\text{Sumar 1} &   &   &   &   &   & 1 & \\ \hline
     & 1 & 1 & 1 & 0 & 0 & 1 & (-7)
\end{array}
$$

2. Sumar **+9** y **-7**:

   $$
   \begin{array}{r|cccccc}
   \text{Acarreo:}  & 1  & 1  &  &  &   &  \\ \hline
   \text{+9:}      & 0 & 0 & 1 & 0 & 0 & 1 \\
   \text{-7:}      & 1 & 1 & 1 & 0 & 0 & 1 \\ \hline
   \text{Suma:}    & 0 & 0 & 0 & 0 & 1 & 0 & \quad (+2)
   \end{array}
   $$

El resultado es **+2** (representado como `000010` en 6 bits).

# Multiplicación

Multipliquemos **+3** por **+2** usando 4 bits para cada número.
$$
\begin{array}{r|ccccc}
  &    & 0 & 0 & 1 & 1 & (+3) \\
\times &   & 0 & 0 & 1 & 0 & (+2) \\ \hline
  &    & 0 & 0 & 0 & 0 & (\text{Parcial 1})\\
+ & 0  & 0 & 1 & 1 &   &  (\text{Parcial 2})\\ \hline
  & 0  & 0 & 1 & 1 & 0 &  (+6)
\end{array}
$$

El resultado es **+6**, que en binario (5 bits) se representa como `00110`.

# División

Dividamos **91** entre 7 usando 7 bits para el dividendo.

La división binaria se realiza de forma similar a la división larga en decimal. Resumidamente, el proceso es:

1. Se determina cuántas veces el divisor cabe en el dividendo (o en parte de él) y se coloca el resultado (1 o 0) en el cociente.
2. Se efectúan las restas correspondientes y se baja el siguiente bit del dividendo.

El resultado final es:

$$
\begin{array}{cccccccc|cccc}
(+91) & 1 & 0 & 1 & 1 & 0 & 1 & 1 & 1 & 1 & 1 &  & (+7) \\ \hline
      & - & 1 & 1 & 1 &   &   &   & 1 & 1 & 0 & 1 & (+13) \\ \hline
      &   & 1 & 0 & 0 & 0 &   &   &   &   &   &   &      \\ 
      &   & - & 1 & 1 & 1 &   &   &   &   &   &   &      \\ \hline
	  &   &   & 0 & 0 & 1 & 1 & 1 &   &   &   &   &      \\ 
	  &   &   &   & - & 1 & 1 & 1 &   &   &   &   &      \\ \hline
	  &   &   &   &   & 0 & 0 & 0 &   &   &   &   &      \\ 
\end{array}
$$

Esto significa que **91 ÷ 7 = 13** sin residuo.
