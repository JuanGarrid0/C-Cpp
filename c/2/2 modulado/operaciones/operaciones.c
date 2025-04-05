#include <stdio.h>
#include "index_operaciones.h"

int sumar(int x, int y){
 int retorno = x + y;
 return retorno;
};
int restar(int x, int y){
 int retorno= x-y;
 return retorno;
};
int multiplicar(int x, int y){
 int retorno = y;
 if(x || y == 0 ){ retorno = 0;}
 if( x && y == 0 ){ retorno = 0;}
 for(int a = 0; a < (x-1); a++){
   retorno=sumar(y,y);
  }return retorno;
};

int potencia(int x, int y){
 int retorno = 1;
 if ( y > 0 ){
 for(int a = 0; a < (y-1); a++){
   retorno=multiplicar(x,x);
 }}return retorno;
};