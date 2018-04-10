primera: grafica.png

grafica.png: grafica.py datos.txt

	python3 grafica.py

datos.txt: ejercicio18.cpp

	c++ ejercicio18.cpp -o ejercicio

	./ejercicio > datos.txt

segunda: grafica2.png

grafica2.png : grafica2.py datos2.txt

	python3 grafica2.py

datos2.txt: segundo_orden.cpp

	c++ segundo_orden.cpp -o segundo

	./segundo > datos2.txt
	
