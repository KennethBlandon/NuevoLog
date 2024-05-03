Proceso ParesEntre100y200
	Definir suma,num,i Como Entero;
	suma<-0;
	num<-100;
	Para i<-100 Hasta 200 Con Paso 1 Hacer
		Si num mod 2 == 0 Entonces
			suma<-num+suma;
			num<-num+1;
		SiNo
			num<-num+1;
		FinSi
	FinPara
	Escribir suma;
	
FinProceso
