Proceso AprobadosYReprobados
	Definir Grupo,N,Aprobados, Reprobados,I Como Entero;
	Definir Prom Como Real;
	Grupo<-0;
	Reprobados<-0;
	Aprobados<-0;
	Para I<-1 Hasta 8 Con Paso 1 Hacer
		Escribir "Digite la nota del estudiante numero :",i;
		Leer N;
		Si N>70 Entonces
			Aprobados<-Aprobados+1;
		SiNo
			Reprobados<-Reprobados+1;
		FinSi
		Grupo<- N+ Grupo;
	FinPara
	Prom<- Grupo/8;
	Escribir "El numero de estudiantes Reprobados son: ",Reprobados;
	Escribir "El numero de estudiantes Aprobados son: ", Aprobados;
	Escribir "El promedio general del grupo es de: ", Prom;
FinProceso
