#include <stdio.h>

typedef struct{
int x;
int y;
}Point;


Point escalar(Point p, int x){
 Point retorno;
 retorno.x=p.x+x;
 retorno.y=p.y+x;
 return retorno;
}
int cifra=10;
Point punto={4,5};
int main(){
 Point newP=escalar(punto,cifra);
 printf("El nuevo punto es %d,%d\n",newP.x,newP.y);



}