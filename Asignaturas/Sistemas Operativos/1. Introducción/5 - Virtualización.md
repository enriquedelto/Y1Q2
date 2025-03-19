---
tags:
  - asignaturas/sistemas_operativos/introducción
---
La virtualización es una tecnología que permite ejecutar múltiples sistemas operativos y aplicaciones sobre un mismo hardware físico, creando entornos aislados que simulan máquinas completas. Esto contrasta con el método tradicional, en el que se instala un sistema operativo directamente en el hardware, estableciendo una relación uno a uno entre la máquina física y el sistema operativo.

## ¿Qué es una Máquina Virtual?

Una **máquina virtual (VM)** es una emulación completa de un sistema informático creada por software. Esta emulación incluye componentes esenciales como el procesador, la memoria, el almacenamiento y dispositivos de red. Gracias a esta simulación, es posible ejecutar varios sistemas operativos de forma simultánea sobre un único equipo físico, cada uno funcionando como si estuviera instalado en una máquina independiente.

## El Hipervisor o Monitor de Máquinas Virtuales (VMM)

El **Monitor de Máquinas Virtuales (VMM)**, conocido comúnmente como **hipervisor**, es el software responsable de gestionar y distribuir los recursos del hardware físico entre las distintas máquinas virtuales. Entre sus funciones principales se destacan:

- **Asignación de Recursos:** Distribuye dinámicamente la CPU, la memoria, el almacenamiento y las interfaces de red entre las VMs.
- **Aislamiento:** Asegura que cada máquina virtual funcione de forma independiente, evitando interferencias entre ellas.
- **Administración y Control:** Facilita la creación, configuración, supervisión y migración de las máquinas virtuales.

## Tipos de Virtualización

Existen diversas formas de implementar la virtualización, y se pueden clasificar según el tipo de hipervisor y la forma en que interactúan con el hardware:

1. **Hipervisores Tipo 0 (Basados en Hardware):**  
   - **Ejemplos:** LPAR de IBM, LDOM de Oracle.  
   - **Características:** Se ejecutan directamente sobre el hardware sin necesidad de un sistema operativo intermediario, lo que los hace altamente eficientes.

1. **Hipervisores Tipo 1 (Bare-Metal):**  
   - **Ejemplos:**  
     - **Directos en el Hardware:** VMware ESXi, Citrix XenServer.  
     - **Integrados en el Sistema Operativo:** Hyper-V en Microsoft Windows Server, KVM en Linux.  
   - **Características:** Operan sin depender de un sistema operativo anfitrión tradicional, lo que suele traducirse en mejor rendimiento y seguridad.

1. **Hipervisores Tipo 2 (Hosted):**  
   - **Ejemplos:** VMware Workstation, Oracle VirtualBox.  
   - **Características:** Funcionan como aplicaciones dentro de un sistema operativo anfitrión. Son ideales para entornos de desarrollo y pruebas, aunque pueden presentar una ligera sobrecarga en el rendimiento.

### Sistemas Operativos Anfitrión e Invitado

- **Sistema Operativo Anfitrión (Host):**  
  Es el sistema operativo que se instala directamente sobre el hardware físico y que soporta el hipervisor.

- **Sistemas Operativos Invitados (Guest):**  
  Son los sistemas operativos que se instalan en las máquinas virtuales. Estos pueden funcionar sin modificaciones o, en algunos casos, adaptarse para colaborar más eficientemente con el host.  
  - **Paravirtualización:** Se refiere a la modificación del sistema operativo invitado para mejorar su integración y comunicación con el sistema operativo anfitrión, optimizando el rendimiento en entornos virtualizados.

## Virtualización con Contenedores

La **virtualización con contenedores**, también conocida como virtualización a nivel del sistema operativo, es una técnica que permite aislar aplicaciones y sus dependencias dentro de un único sistema operativo. En lugar de virtualizar todo el hardware, se crean entornos aislados denominados **contenedores**.

### Características y Ventajas de los Contenedores

- **Eficiencia de Recursos:**  
  Dado que todos los contenedores comparten el mismo núcleo del sistema operativo, la sobrecarga es mucho menor en comparación con las máquinas virtuales tradicionales.

- **Aislamiento:**  
  Cada contenedor funciona en un entorno aislado, lo que minimiza conflictos y mejora la seguridad de las aplicaciones.

- **Portabilidad:**  
  Los contenedores pueden empaquetar una aplicación junto con todas sus dependencias, garantizando su ejecución consistente en cualquier entorno compatible.

### Ejemplo Destacado: Docker

**Docker** es la plataforma de contenedores más reconocida en la actualidad. Lanzada en 2013, Docker permite empaquetar aplicaciones en contenedores que se pueden ejecutar de manera uniforme en diferentes servidores Linux, facilitando el despliegue, la escalabilidad y el mantenimiento de aplicaciones en entornos de producción y desarrollo.
