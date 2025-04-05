#include <stdio.h>


int sumar(int x, int y){
 int retorno = x + y;
 return retorno;
}
int restar(int x, int y){
 int retorno= x-y;
 return retorno;
}
int multiplicar(int x, int y){
 int retorno = y;
 if(x || y == 0 ){ retorno = 0;}
 if( x && y == 0 ){ retorno = 0;}
 for(int a = 0; a < (x); a++){
   retorno=sumar(y,retorno);
  }return retorno;
}
int potencia(int x, int y){
 int retorno = 1;
 if ( y > 0 ){
 for(int a = 0; a < (y); a++){
   retorno=multiplicar(x,retorno);
 }}return retorno;
}
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
