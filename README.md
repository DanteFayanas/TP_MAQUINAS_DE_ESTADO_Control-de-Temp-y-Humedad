# TP_MAQUINAS_DE_ESTADO
Tema: Control de Temperatura y Humedad
Trabajo Practico para la cátedra Informática 2. UTN-FRA

Alumno: Fayanás Dante


## Memoria Descriptiva

Este trabajo esta orientado a un control de temperatura y humedad para una camara de chacinados la cual al variar alguno de los parametros las salidas cambiaran de estado a bajo o alto segun la configuración que setee el usuario. Dichas salidas tienen como proposito encender o apagar extractores de aire.

Primero el usuario se encuentra con un selector para setear la temperatura, que inicialmente está a temperatura ambiente para facilitar la carga y elige con que diferencia de temperatura se debera accionar la salida con precision de 1/2 Grado Celcius. Despues setea la humedad, la cual tambien esta inicialmente a nivel ambiente y elige con que diferencia de humedad se debera accionar la salidad con precision 1% en variacion de humedad.

Comenzada la maquina de estado, al detectar una variacion en uno u otro parametro se activa la salida correspondiente ya sea para humedad o para temperatura hasta controlar dicha variacion y regular el sistema, volviendo al estado inicial de la maquina. 
