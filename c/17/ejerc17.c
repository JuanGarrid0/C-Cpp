#include <stdio.h>
#include <stdlib.h>




void f1(int x, int y, int **array){

 for(int a=0;a<x;a++){
  for(int j=0;j<y;j++){
    printf("%i\n",array[a][j] );  
 }
 }	
};



int main (){
 int x=4;
 int y =3;
 
 int **array=(int**)malloc(x*sizeof(int*));
 for(int i=0;i<x;i++){
    array[i]=(int*)malloc(y*sizeof(int));
 }
 for(int a=0;a<x;a++){
  for(int j=0;j<y;j++){
   array[a][j]=j*a;
   }
 }	
 f1(x,y,array);
 free(array);
   




 return 0;

}