## **Creación de un proceso hijo sin espera (Figura 3)**

Este documento detalla el estudio del fenómeno de los procesos huérfanos.

---

## 1. Conceptos

### Procesos Huérfanos
Un proceso huérfano es aquel cuyo proceso padre ha finalizado su ejecución antes que el propio hijo. En este escenario, el núcleo del sistema operativo interviene para evitar que el proceso quede sin control, reasignándolo (adoptándolo) al proceso init, el cual posee el PID 1.



### wait()
la llamada al sistema wait() suspende la ejecución del proceso padre hasta que uno de sus hijos termina, permitiendo al padre recolectar el estado de salida y asegurando que el hijo no se convierta en huérfano ni en un proceso "zombie" de larga duración.

---

## 2. Desarrollo de la Práctica

En el programa original, el proceso padre imprimía sus datos y terminaba inmediatamente sin esperar al hijo. Al ejecutarlo, se observó en la terminal que:
* El hijo reportaba un **PPID (Parent PID) de 1**.
* Esto confirmó que el hijo perdió el vínculo con su padre original antes de poder ejecutar sus propias instrucciones de salida.

Se modificó el flujo del programa para asegurar la persistencia del padre mediante los siguientes cambios:
* Inclusión de wait(NULL), se forzó al padre a esperar la señal de finalización del hijo.
* Se eliminaron llamadas a wait innecesarias dentro del bloque del hijo, ya que este no poseía procesos subordinados propios.

---
## Resultados

* Tras la modificación, se comprobó mediante la salida de la terminal que el PPID del hijo coincidía exactamente con el PID del padre original durante toda la ejecución.
* Se demostró que el orden de impresión de los mensajes puede variar debido al planificador de procesos, pero la relación de parentesco se mantiene estable siempre que el padre ejecute una instrucción de espera.










