#include <stdio.h>

void duplicar_numero(int *valor1) {
    *valor1 = *valor1 * 2; //Se usa el puntero porque si usamos el valor1 sera una copia del de main, no el de main (valor1 = 10)
    //*valor1 = 20 valor1 = 0x61fe18
}

int main() {
    int valor1;
    int valor2;

    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1);

    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);

    int suma = valor1 + valor2;
    printf("La suma es: %d\n", suma);

     duplicar_numero(&valor1);
    printf("El primer valor duplicado es: %d\n", valor1); //valor1 = 20

    return 0;
}