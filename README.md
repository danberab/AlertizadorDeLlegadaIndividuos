# AlertizadorLlegadaDeIndividuos
Sistema alertizador para puerta que notifica la llegada de los individuos


Sistema notificador de llegada de individuos

README.txt             PRACTICA Nº2 SISTEMAS PROGRAMABLES


    La carpeta contiene los siguientes archivos:
    ===========================================



    -README.txt: este archivo.
    -SKETCH: este archivo contiene el pseudocodigo para el dispositivo arduino.
                       

    Para ejecutar el script:
    =======================

    - Descargar el entorno de desarrollo para arduino.
    - Descargar la carpeta con el sketch desde el repositorio.
    - Compilar el sketch y subirlo al dispositivo.


     Hardware:
     =========
	Material:
		+ Led rojo
		+ Reed switch
		+ Cables para proto	
		+ Arduino Uno
	
	La conexion se describe a los pines escritos en el software.

    Funcionamiento:
    ===============

	El prototipo funciona de manera de simulador de una puerta con un iman,
        el cual se debe acercar al reed switch para simular la primera operacion de abrir la puerta, 
	una vez se abra comienza a sonar la alarma y el red rojo permanecera encendido como identificador adicional.
	La alarma y el led se apagan una vez que se cierre la puerta, para esto es necesario volver a pasar el iman cerca del reed switch.

	Nota: es importante conocer el campo magnetico que genera la fuerza de nuestro iman, ya que asi sabremos la distancia necesaria a la que
	debe de acercase al reed switch. Aproximadamente deberian de ser para un iman convencional una distancia de 10 cm.

     