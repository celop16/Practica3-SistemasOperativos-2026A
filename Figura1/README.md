# Práctica 3 - Creación de Procesos

Este directorio contiene los ejercicios desarrollados por Bryan Magarisca correspondientes a la guía de laboratorio:

## Archivos incluidos

* **figura1.c (3.1.1):** Script modificado a partir de la Figura 1 para identificar y demostrar los valores PID (Process ID) y PPID (Parent Process ID) de un proceso padre y su respectivo proceso hijo.
* **uso_system.c (3.3.1):** Script que crea un proceso hijo encargado de listar todos los procesos activos del sistema utilizando la llamada `system("ps aux")`.

## Instrucciones de compilación y ejecución

Para compilar y ejecutar estos programas en la terminal de Ubuntu Server, utilice el compilador GCC de la siguiente manera:

**Para el ejercicio de Fork:**
1. Compilar: `gcc figura1.c -o figura1`
<img width="882" height="436" alt="image" src="https://github.com/user-attachments/assets/1abdfb5c-2272-4f8c-b203-a611a5d90dd3" />

2. Ejecutar: `./figura1`
<img width="664" height="211" alt="image" src="https://github.com/user-attachments/assets/918fea22-7ff7-4365-a97a-2ef450a83093" />

**Para el ejercicio de System:**
1. Compilar: `gcc uso_system.c -o uso_system`
<img width="856" height="457" alt="image" src="https://github.com/user-attachments/assets/e75b396c-98d2-42e8-8890-6ebff42acc34" />

2. Ejecutar: `./uso_system`
<img width="886" height="929" alt="image" src="https://github.com/user-attachments/assets/60031981-318d-4bf7-afce-1b13a761bf5c" />
