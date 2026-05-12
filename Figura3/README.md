## **Creación de un proceso hijo sin espera**

### **Programa Original Figura 3:**

 <img width="711" height="300" alt="Imagen1" src="https://github.com/user-attachments/assets/01ef1065-ff18-467b-9b6f-c05ed0751653" />
 
**a) ¿Cuál es el PID del proceso padre y del proceso hijo creado?**

PID del Padre: 1298

PID del Hijo: 1299

 <img width="526" height="170" alt="Imagen2" src="https://github.com/user-attachments/assets/72739a5a-5b16-4134-bab0-6805cd0dfda7" />

**b) Verifique a qué proceso corresponde el ID encontrado**

El ID 1 corresponde al proceso init. Es el primer proceso que arranca el núcleo de Linux y su función es adoptar a todos los procesos cuyos padres han terminado antes que ellos, evitando que queden procesos sueltos en el sistema. El proceso init es el primer programa que se ejecuta al arrancar un sistema operativo tipo Linux, asignándosele el ID de proceso (PID) 1

**c) ¿Cómo se denomina al tipo de proceso hijo?**

Se denomina proceso huérfano, es un proceso en un sistema operativo cuyo proceso principal ha finalizado o salido mientras el proceso secundario aún se está ejecutando. Es decir, cuando padre finaliza la ejecución, el hijo aun no termina de ejecutar el proceso, por eso para que el proceso hijo siga el sistema operativo reasigna a un proceso del sistema en este caso init. Por estas razones se denomina huérfano.

**d) Modifique el código de la Figura 3 para que el proceso hijo no quede huérfano. Demostrar el resultado con el PPID del proceso hijo.**

<img width="709" height="328" alt="Imagen3" src="https://github.com/user-attachments/assets/cf625bb4-bbbf-46eb-80de-b4118bc92089" />

**Salida:**

<img width="589" height="109" alt="Imagen4" src="https://github.com/user-attachments/assets/17280afb-2c51-4d30-8ac1-2b2087549e16" />

En el código original, el proceso padre no tenía ninguna instrucción para detenerse, por lo que imprimía su mensaje y moría de inmediato. Añadimos wait(NULL) en el bloque default, esta es la instrucción que utiliza el proceso padre para que espere al proceso hijo. Además, se eliminó el wait del bloque case 0, el hijo no necesita esperar a nadie porque no tiene procesos subordinados.
Un proceso se vuelve huérfano cuando su padre termina antes que él. En la ejecución donde el hijo reconoce correctamente el PID del padre en lugar de ser adoptado por el proceso sistema con ID 1.




**Referencias:**


Sistemas INIT • factor evolución. (2018, 14 septiembre). Factor Evolución. https://www.factor.mx/portal/base-de-conocimiento/sistemas-init/
GeeksforGeeks. (2025b, julio 23). What is an Orphan Processes? GeeksforGeeks. https://www.geeksforgeeks.org/operating-systems/orphan-processes/









