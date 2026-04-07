# tp1

## Codigo sin funcionar
### Lista de errores encontrados 
- No traia la libreria <stdio.h>
- No usaba la direccion al momento de llamar &valor1 y &valor2
- Al llamar la funcion duplicar_numero usaba una copia para la funcion en lugar del valor 1 del main lo cual se soluciono usando punteros
- Faltaban ; lo cual no dejaba compilar.

## Codigo misterio
### Explicación
```
*p = *Puntero_Secreto
temp = Restante
rev = revertido
f_alpha = f_revertir
f_beta = f_dividir
f_gamma = f_Suma_Individual

El programa lo que hace es tener el 452 como numero secreto, luego usando un puntero en la funcion f_revertir hace la inversion de ese numero el cual seria 254, luego la divide en 2 con la funcion f_dividir lo cual lo deja 127, luego en la funcion f_Suma_Individual separa cada numero para sumarlos entre si, es decir 1 + 2 + 7, luego al resultado lo suma al 127 dando el dato secreto 137.
```