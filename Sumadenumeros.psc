Proceso Sumadenumeros
	Definir N,R,I Como Entero;
	Escribir "Digite el numero limite a sumar";
	Leer N;
	R<- 0;
	Para I<- 1 Hasta N Con Paso 1 Hacer
		R <- N+R;
		N<- N-1;
	FinPara
	Escribir R;
FinProceso
