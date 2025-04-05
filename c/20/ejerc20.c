#include <stdio.h>


typedef struct{
	float x;
	float y;
}Point;

void escribe(Point array[],int tam){
 FILE* fichero = fopen("fichero.txt", "wb");
 if ((fichero ) == NULL){  printf ( " Error en la apertura. Es posible que el fichero no exista \n "); }

 for(int a=0;a<tam;a++){
  fwrite(&array[a], sizeof(Point),1,fichero);

 }
 fflush(fichero);
 fclose(fichero);
}
void lee(Point array[],int tama){
 FILE* ficha = fopen("fichero.txt", "rb");
 if ((ficha ) == NULL){  printf ( " Error en la apertura. Es posible que el fichero no exista \n "); }
 for(int i=0;i<tama;i++){
  fread(&array[i],sizeof(Point),1,ficha);
 }
 fclose(ficha);
}


int main(){
	Point coordenates[]={{1.3,1.5}, {1,4.8}, {4,2.5},  {123,53.5},  {34,54.2} };
    int sizeArray=5;
    escribe(coordenates,sizeArray);
    lee(coordenates,sizeArray);

	return 0;
}