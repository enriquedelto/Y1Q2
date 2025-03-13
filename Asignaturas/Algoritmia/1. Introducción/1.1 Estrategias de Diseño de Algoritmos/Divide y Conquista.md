---
tags:
  - asignaturas/algoritmia/introducción/estrategias_diseño_algoritmos
---
## Paradigma "Divide y Vencerás"

Se basa en la resolución recursiva de un problema dividiéndolo en dos o más subproblemas de igual tipo o similares. El proceso continúa hasta que los subproblemas sean lo suficientemente sencillos como para resolverse directamente. Finalmente, se combinan las soluciones de cada subproblema para obtener la solución al problema original.

### Fases del Proceso

#### 1. Dividir

En esta fase se separa el problema en varios subproblemas. La división puede hacerse de manera simétrica (por ejemplo, dividiendo un arreglo en dos mitades) o de forma asimétrica según el problema a resolver.

#### 2. Conquistar

Cada subproblema se resuelve de forma recursiva. Cuando los subproblemas alcanzan un estado “base” en el cual son lo suficientemente sencillos, se resuelven directamente sin necesidad de dividirlos aún más.

#### 3. Combinar

Una vez obtenidas las soluciones de los subproblemas, se unen o combinan para formar la solución final del problema original. Esta fase es crucial y su implementación puede variar significativamente según la naturaleza del problema.

---

## Ejemplos en C

### Ejemplo 1: Búsqueda Binaria

La búsqueda binaria es un claro ejemplo del paradigma "Divide y vencerás" aplicado a la búsqueda de un elemento en un arreglo ordenado.

```c
#include <stdio.h>

int busquedaBinaria(int lista[], int inicio, int fin, int valor) {
    if (inicio > fin) {
        return -1;  // Caso base: el elemento no se encontró
    }
    
    int medio = (inicio + fin) / 2;
    
    if (lista[medio] == valor) {
        return medio;  // Elemento encontrado
    } else if (lista[medio] < valor) {
        return busquedaBinaria(lista, medio + 1, fin, valor);
    } else {
        return busquedaBinaria(lista, inicio, medio - 1, valor);
    }
}

int main() {
    int lista[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(lista) / sizeof(lista[0]);
    int valor;
    
    printf("Ingrese el valor a buscar: ");
    scanf("%d", &valor);
    
    int indice = busquedaBinaria(lista, 0, n - 1, valor);
    
    if (indice != -1) {
        printf("El valor %d se encuentra en la posición %d.\n", valor, indice);
    } else {
        printf("El valor %d no se encuentra en la lista.\n", valor);
    }
    
    return 0;
}
```

**Explicación:**

- **Dividir:** Se calcula el índice medio y se divide el arreglo en dos partes.
- **Conquistar:** Se verifica si el elemento se encuentra en la posición central o, en caso contrario, se aplica recursivamente la búsqueda en la mitad correspondiente.
- **Combinar:** En este caso, la combinación es implícita; el retorno del índice se propaga de vuelta a través de las llamadas recursivas.

### Ejemplo 2: Merge Sort (Ordenamiento por fusión)

Otro ejemplo clásico es el **Merge Sort**, que utiliza "Divide y vencerás" para ordenar un arreglo.

```c
#include <stdio.h>

void merge(int arr[], int inicio, int medio, int fin) {
    int n1 = medio - inicio + 1;
    int n2 = fin - medio;
    
    int left[n1], right[n2];
    
    // Copiar los datos a arreglos temporales
    for (int i = 0; i < n1; i++)
        left[i] = arr[inicio + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[medio + 1 + j];
    
    int i = 0, j = 0, k = inicio;
    
    // Combinar los arreglos temporales en arr[]
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    
    // Copiar los elementos restantes de left[], si los hay
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }
    
    // Copiar los elementos restantes de right[], si los hay
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int inicio, int fin) {
    if (inicio < fin) {
        int medio = (inicio + fin) / 2;
        
        // Dividir: ordenar la primera mitad
        mergeSort(arr, inicio, medio);
        // Dividir: ordenar la segunda mitad
        mergeSort(arr, medio + 1, fin);
        // Combinar: fusionar ambas mitades
        merge(arr, inicio, medio, fin);
    }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Arreglo original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    mergeSort(arr, 0, n - 1);
    
    printf("Arreglo ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
```

**Explicación:**

- **Dividir:** Se divide el arreglo en dos mitades recursivamente.
- **Conquistar:** Cada mitad se ordena de forma recursiva hasta llegar a subarreglos de un solo elemento.
- **Combinar:** Se fusionan las dos mitades ordenadas en un arreglo ordenado completo.

---

## Ventajas del Paradigma "Divide y Vencerás"

- **Eficiencia:**  
    Muchas veces, la división del problema permite lograr soluciones más eficientes en términos de tiempo. Por ejemplo, la búsqueda binaria tiene una complejidad de O(log n) y Merge Sort de O(n log n).
    
- **Simplicidad conceptual:**  
    La idea de dividir un problema grande en problemas más pequeños y manejables facilita la comprensión y el diseño del algoritmo.
    
- **Reutilización de subsoluciones:**  
    En algunos casos, como en la programación dinámica, la técnica permite almacenar soluciones de subproblemas para evitar cálculos redundantes.
    
- **Facilidad para la paralelización:**  
    Al tener subproblemas independientes, es posible paralelizar la ejecución, mejorando el rendimiento en sistemas multicore o distribuidos.
    
- **Modularidad:**  
    Al dividir el algoritmo en fases claras (dividir, conquistar, combinar), se puede mantener y modificar el código de manera más organizada.
    

---

Este paradigma es muy poderoso y se utiliza en muchos algoritmos clásicos, permitiendo resolver problemas complejos de forma estructurada y eficiente. ¿Tienes alguna duda adicional o algún otro ejemplo que te gustaría explorar?