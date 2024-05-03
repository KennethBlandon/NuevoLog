Proceso Vectores
	Definir vector1,vector2, long,i Como Entero;
	Dimension vector1(2);
	Dimension vector2(2);
	Definir producto Como Entero;
	producto<-0;
	Escribir "Digite la longitud del vector:";
	Leer long;
	Escribir "Digite las coordenadas del primer vector:";
	Para i<-0 Hasta long-1 Con Paso 1 Hacer
		Leer vector1[0];
	FinPara
	Escribir "Digite las coordenadas del segundo vector: ";
	Para i<-0 Hasta long-1 Con Paso 1 Hacer
		Leer vector2[0];
	FinPara
	Para i<-0 Hasta long-1 Con Paso 1 Hacer
		producto<-producto+(vector1(0)+vector2(0));
	FinPara
	Escribir "El producto punto de los vectores es: ", producto;
FinProceso
