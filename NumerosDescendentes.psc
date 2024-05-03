Proceso NumerosDescendentes
	Definir N, R , i Como Entero;
	N<-100;
	Para i<-1 Hasta 100 Con Paso 1 Hacer
		Si N mod 2 == 0 Entonces
			N<-N-1;
		SiNo
			Escribir N;
			N<-N-1;
		FinSi
		
	FinPara
	
FinProceso
