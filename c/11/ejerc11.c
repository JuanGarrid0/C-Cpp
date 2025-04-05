#include <stdio.h>
#include <stdlib.h>
     

     
typedef struct{
 int x;
 int y;
}Point;

Point *pb;
void escalar(int arrayInt[],Point *arrayP[],int size){
  pb=arrayP[0];
  for(int a = 0; a<size ; a++){
    pb->x=arrayInt[a]+pb->x;
    pb->y=arrayInt[a]+pb->y;
    printf("%d,%d\n",pb->x,pb->y);
    *pb++;
  }
}


int main(){ 
 //definimos array estatico
 int arrayEstatico[]={3,5,8};	
 printf("El array estatico 3 es= %d\n",arrayEstatico[2] );


 //definimos array dinamico para Point, IMPORTANTE EL CASTEO AL HACER EL 'ADD'
 Point* p;
 p = (Point*)malloc(3 * sizeof(Point));
 p[0] = (Point){4,2};
 p[1] = (Point){1,1};
 p[2] = (Point){2,8};
 printf("El array dinamico 3 es= %d,%d\n",p[2].x,p[2].y);

 //Usamos la funcion escalar y sacamos por pantalla los datos del array
 escalar(arrayEstatico, &p ,3);
 free(pb);
	return 0;
}
