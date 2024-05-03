Proceso NotasEstudiantes
	Definir N,i,Estu Como Entero;
	Definir Prom Como Real;
	Estu<-0;
	Prom<-0;
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Escribir "Digite la nota del estudiante numero ",i;
		Leer N;
		Estu<- N+Estu;
	FinPara
	Prom<- Estu/10;
	Escribir Prom;
	
	
	
FinProceso
