#include <stdio.h>
#include <stdlib.h>

typedef struct{
 int x;
 int y;
}Point;

int main(){//5 * 4 * 3
Point ***arrayPoint=(Point***)malloc(5*sizeof(Point**));//array 1  _ _ _ _ _
for(int i=0;i<4;i++){
	arrayPoint[i]=(Point**)malloc(4*sizeof(Point*)); //array 2 5*(_ _ _ _)
 for(int j=0;j<3;j++){
    arrayPoint[i][j]=(Point*)malloc(3*sizeof(Point)); // array 3  5*(4*(_ _ _))
 }
}
arrayPoint[2][3][1].x=3;
arrayPoint[2][3][1].y=4;
printf("El punto esta en : %i,%i\n",arrayPoint[2][3][1].x,arrayPoint[2][3][1].y);
free(arrayPoint);
	return 0;
}