/*sumar 10 numeros flotantes*/
#include<stdio.h>

int main(int argc, char const *argv[])
{
    float numbers[10];

    numbers[0]=2.3;
    numbers[1]=5.465;
    numbers[2]=12.4545;      
    numbers[3]=5.6;
    numbers[4]=5;
    numbers[5]=8.8888;
    numbers[6]=3.333;
    numbers[7]=45.89;
    numbers[8]=3.1416;
    numbers[9]=0.168245;

    printf("Elemento # 1 %.2f\n", numbers[0]);
    printf("Elemento # 2 %.2f\n", numbers[1]);
    printf("Elemento # 3 %.2f\n", numbers[2]);
    printf("Elemento # 4 %.2f\n",numbers[3]);
    printf("Elemento # 5 %.2f\n",numbers[4]);
    printf("Elemento # 6 %.2f\n", numbers[5]);
    printf("Elemento # 6 %.2f\n", numbers[6]);
    printf("Elemento # 6 %.2f\n", numbers[7]);
    printf("Elemento # 6 %.2f\n", numbers[8]);
    printf("Elemento # 6 %.2f\n", numbers[9]);

    printf("suma\n");

    float suma = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4] + numbers[5] + numbers[6] + numbers[7] + numbers[8] + numbers[9];

    printf("La suma es: %.2f\n", suma);
    return 0;
}
