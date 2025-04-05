#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//para pasar por parametros  ejerc14.exe d d d d d  -> en la consola cmd

int main(int argc,char *argv[]){
 printf("arg = %d\n",argc);//devuelve los parametros +1 por la ruta

 for (int i= 0; i < argc; i++){
  printf ("El argumento %d vale: %s\n",i, argv[i]);// la posicion [0] la ocupa la ruta del programa (ejerc14.exe)
 }
 char *mainString="d";
 for(int a =0;a<argc;a++){
  if(strcmp(mainString,argv[a])==0){printf("Son iguales\n");}
  if(strcmp(mainString,argv[a])<0){printf("La primera la tiene corta, la cadena\n");}
  if(strcmp(mainString,argv[a])>0){printf("La primera la tiene larga, la cadena\n");}
  printf("La cadena comparada es: %c\n",*argv[a]);
 }
 return 0;
}