#include <stdio.h>
#include "operaciones/index_operaciones.h"
#include "operaciones/operaciones.c"

int sumar(int x, int y);

int restar(int x, int y);

int multiplicar(int x, int y);

int potencia(int x, int y);
int x=9;
int y=6;

int main(void){
 int suma=sumar(x,y);
 printf("El valor sumado es %d\n",suma);
 int resta= restar(x,y);
 printf("El valor restado es %d\n",resta);
 int multiplica=multiplicar(x,y);
 printf("El valor multiplicado es %d\n",multiplica);
 int eleva=potencia(x,y);
 printf("El valor elevado es %d\n",eleva);
}
