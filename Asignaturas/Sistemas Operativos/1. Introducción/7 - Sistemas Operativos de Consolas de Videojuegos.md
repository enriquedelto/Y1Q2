---
tags:
  - asignaturas/sistemas_operativos/introducción
---
Aunque tradicionalmente se asocian con la ejecución exclusiva de videojuegos, las consolas modernas comparten muchas características con los computadores personales de alta gama. Además de correr juegos, estas plataformas permiten la conexión a Internet, la descarga de contenidos desde tiendas especializadas y la ejecución de aplicaciones de vídeo en línea, entre otras funciones. Sin embargo, a diferencia de los PC, las videoconsolas están diseñadas para limitar la ejecución de programas de propósito general y presentan interfaces de usuario más restringidas.

La información detallada sobre la estructura y funcionamiento interno de estos sistemas operativos es en gran medida confidencial, ya que los fabricantes protegen celosamente estos detalles. Gran parte de lo que se conoce proviene de investigaciones y análisis realizados por la comunidad de entusiastas y hackers, quienes han logrado emular o modificar las consolas para estudiar su comportamiento.

A continuación, se presenta una descripción de los sistemas operativos de las principales consolas actuales: Xbox, PlayStation y Nintendo Switch.

## Xbox

- **Sistema Operativo Basado en Windows:**  
  Las consolas Xbox utilizan un sistema operativo basado en Windows. Aunque inicialmente presentaban diferencias significativas en comparación con el Windows de los computadores personales, con el tiempo estas diferencias se han reducido para lograr una mayor compatibilidad entre las aplicaciones de ambas plataformas.

- **Integración de Software y Hardware:**  
  En las últimas generaciones, como Xbox Series S y Xbox Series X, se comparten numerosas aplicaciones (por ejemplo, Xbox Live y Xbox GamePass) entre el entorno de la consola y el de Windows, lo que facilita el desarrollo de software para ambas plataformas.

- **Hipervisor NanoVisor:**  
  El sistema operativo de Xbox incluye una versión altamente modificada del hipervisor Hyper-V de Microsoft, denominado **NanoVisor**. Este hipervisor gestiona dos entornos virtuales:
  - **Exclusive:** Diseñado exclusivamente para la ejecución de videojuegos.
  - **Shared:** Destinado a ejecutar aplicaciones adicionales, incluyendo la interfaz principal del sistema.

- **Soporte Gráfico con DirectX 12:**  
  Xbox utiliza DirectX, una colección de API gráficas desarrolladas por Microsoft. La versión utilizada en la última generación es DirectX 12, lo que permite un rendimiento óptimo en tareas multimedia y de renderizado de gráficos.

## PlayStation

- **Orbis OS y su Origen en FreeBSD:**  
  El sistema operativo de la PlayStation 4, denominado **Orbis OS**, es un fork de FreeBSD, un sistema de código abierto derivado del BSD (Berkeley Software Distribution) y de las primeras versiones de Unix. Este vínculo con el software libre permite el uso de componentes probados y optimizados en el desarrollo de la consola.

- **Evolución en PlayStation 5:**  
  Aunque se sabe poco sobre el sistema operativo de la PlayStation 5, existen indicios de que mantiene características y una estructura similar a la de la PS4, aunque con mejoras y adaptaciones que responden a las necesidades de la nueva generación.

- **APIs Gráficas: Gnm y Gnmx:**  
  Orbis OS utiliza dos APIs gráficas:
  - **Gnm:** API de bajo nivel orientada a un control preciso del hardware.
  - **Gnmx:** API de alto nivel que facilita el desarrollo gráfico.
  
  Ambas se derivan de la API Mantle, que fue diseñada originalmente para videojuegos 3D. Además, la evolución de Mantle dio lugar a la creación de Vulkan, lo que sugiere que las soluciones gráficas de PlayStation comparten ciertos elementos conceptuales y técnicos con esta API. En la PlayStation 5, se utiliza una versión extendida de Gnm para aprovechar mejoras en el rendimiento gráfico.

## Nintendo Switch

- **Sistema Operativo Horizon:**  
  La Nintendo Switch utiliza un sistema operativo llamado **Horizon**, el cual es una evolución del sistema empleado en la Nintendo 3DS.

- **Arquitectura de Micronúcleo:**  
  Horizon está basado en una arquitectura de micronúcleo (microkernel), lo que permite una mayor modularidad y flexibilidad en la gestión de procesos y recursos del sistema.

- **Combinación de Tecnologías:**  
  Horizon incorpora componentes tanto de FreeBSD como de Android:
  - Se cree que la pila de protocolos de red proviene del código de FreeBSD.
  - El controlador gráfico está influenciado por el sistema de renderizado de Android.
  
- **API Gráfica NVN:**  
  La API gráfica utilizada en Nintendo Switch se denomina **NVN**, la cual comparte similitudes con la API Vulkan, facilitando el desarrollo y optimización de gráficos en 3D.