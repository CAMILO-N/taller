#include <stdio.h>
#include "funciones.h"
float lectura_datos (float a){
 
    float dato;
    
    printf("Ingrese el monto mensual:");
    scanf ("%f", &dato);
    while (dato < 0)
    {
        printf ("Reingrese el monto mensula ");
        scanf ("%f", &dato);
    }

return dato; 
}






float sum_gastos ( float  a, float b,float c, float d,float e){
   float total;
   total = a + b + c + d +e;
  
    
return total;
}

float sum_ingresos(float a, float b, float c){

float total_ingresos;
total_ingresos = a+b+c;

    return total_ingresos;
}


float calculosaldocontable (float a, float b) {
    float saldo_contable;
    saldo_contable = a - b;
    return saldo_contable;

}