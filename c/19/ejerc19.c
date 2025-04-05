#include <stdio.h>
#include <stdlib.h>





int main(){
 //Escribimos en el fichero
 FILE* fichero = fopen("fichero.txt", "w");
 int constante = 10;
 if ((fichero ) == NULL){  printf ( " Error en la apertura. Es posible que el fichero no exista \n "); }
 fprintf(fichero, "Escribiendo %i numeros:\n",constante);
 for(int a =0;a<constante;a++){  fprintf(fichero, "%i\n",a );  }
 fclose(fichero);


 //Leemos del fichero
 char aux;
 FILE* ficha=fopen("fichero.txt","r");
 if ((ficha ) == NULL){  printf ( " Error en la apertura. Es posible que el fichero no exista \n "); }
 while(aux != EOF){
  aux = fgetc(ficha);
  printf("%c",aux);
 }  


 fclose(ficha);
 return 0;
}