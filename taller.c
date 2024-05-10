
#include <stdio.h>
#include "funciones.h"

int main (){
    
    float mes, servicios_basicos, arriendo, sueldos, gastos_logistica, gastos_mercadeo, gastos, ingresos, ventas, saldo_mes_anterior, inversiones,saldo_contable_total;
    servicios_basicos = lectura_datos (servicios_basicos);
    arriendo = lectura_datos (arriendo);
    sueldos = lectura_datos (sueldos);
    gastos_logistica = lectura_datos (gastos_logistica);
    gastos_mercadeo = lectura_datos (gastos_mercadeo);




    gastos = sum_gastos (servicios_basicos, arriendo, sueldos, gastos_logistica, gastos_mercadeo);
    printf ("Los gastos son:" "%f""\n", gastos);
    ventas = lectura_datos (ventas);
    saldo_mes_anterior = lectura_datos (saldo_mes_anterior);
    inversiones = lectura_datos (inversiones); 
    ingresos = sum_ingresos (ventas, saldo_mes_anterior, inversiones);
    printf ("Los ingresos son:" "%f""\n", ingresos);

    saldo_contable_total = calculosaldocontable (ingresos, gastos);
      printf ("El saldo es:" "%f""\n", saldo_contable_total);

   
    return 0;
}


