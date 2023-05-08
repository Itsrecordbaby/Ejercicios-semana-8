#include<stdio.h>

int main() {
    int num1;

    printf("Ingrese el numero que desea transformar: ");
    scanf("%i", &num1);

    printf("%i en hexadecimal = %x\n", num1, num1);

    return 0;
}
