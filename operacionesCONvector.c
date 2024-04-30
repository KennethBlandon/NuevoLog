/*sumar los elementos de un arreglo*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[5];
    
    numbers[0]= 3;
    numbers[1]= 1;
    numbers[2]= 6;
    numbers[3]= 4;
    numbers[4]= 5;

    printf("Elemento numero 1: %d\n" , numbers[0]);
    printf("Elemento numero 2: %d\n" , numbers[1]);
    printf("Elemento numero 3: %d\n" , numbers[2]);
    printf("Elemento numero 4: %d\n" , numbers[3]);
    printf("Elemento numero 5: %d\n" , numbers[4]);

    printf("suma\n");

    int suma = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
     
    printf("La suma es %d\n", suma);
    return 0;
}
