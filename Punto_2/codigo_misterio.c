#include <stdio.h>

void f_revertir(int *Puntero_Secreto) {
    int Restante = *Puntero_Secreto;
    int revertido = 0;
    while (Restante > 0) {
        revertido = (revertido * 10) + (Restante % 10);
        Restante = Restante / 10; //Sirve para invertir
    }
    *Puntero_Secreto = revertido;
}

void f_dividir(int *Puntero_Secreto) {
    *Puntero_Secreto = *Puntero_Secreto / 2;
}

void f_Suma_Individual(int *Puntero_Secreto) {
    int Restante = *Puntero_Secreto;
    int suma = 0;
    while (Restante > 0) {
        suma = suma + (Restante % 10);
        Restante = Restante / 10; 
    }
    *Puntero_Secreto = *Puntero_Secreto + suma; //suma los numeros individuales 
}

void procesar_enigma(int *valor_referencia) {
    f_revertir(valor_referencia);
    f_dividir(valor_referencia);
    f_Suma_Individual(valor_referencia);
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto); //El valor es la reversion del numero dividida en 2 y sumada a la suma de sus numeros individuales
    
    return 0;
}