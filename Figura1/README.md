# Práctica 3 - Creación de Procesos

Este directorio contiene los ejercicios desarrollados por Bryan Magarisca correspondientes a la guía de laboratorio:

## Archivos incluidos

* **figura1.c (3.1.1):** Script modificado a partir de la Figura 1 para identificar y demostrar los valores PID (Process ID) y PPID (Parent Process ID) de un proceso padre y su respectivo proceso hijo.
* **uso_system.c (3.3.1):** Script que crea un proceso hijo encargado de listar todos los procesos activos del sistema utilizando la llamada `system("ps aux")`.

## Instrucciones de compilación y ejecución

Para compilar y ejecutar estos programas en la terminal de Ubuntu Server, utilice el compilador GCC de la siguiente manera:

**Para el ejercicio de Fork:**
1. Compilar: `gcc figura1.c -o figura1`
2. Ejecutar: `./figura1`

**Para el ejercicio de System:**
1. Compilar: `gcc uso_system.c -o uso_system`
2. Ejecutar: `./uso_system`
