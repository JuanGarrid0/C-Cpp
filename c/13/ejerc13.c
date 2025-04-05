#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
 char cadena1[]=" bendision";
 char cadena2[]=" beibi";
 char cadena3[]="";
 char cadena4[]="";
 //1 sacar por pantalla
 printf("Que%s\n",cadena1);

 //2 longitud de string
 printf("%i\n",strlen(cadena2));

 //3 copiar string en otro
 strcpy(cadena3,cadena2);
 printf("Que%s\n",cadena3);

 //4 concatenar
 strcat(cadena2, " ");
 strcat(cadena2, cadena1);
 printf("Que%s\n",cadena2);

 //5
 strcat(cadena4, " ");
 strcat(cadena4, cadena1);
 printf("%s\n",cadena3);

 return 0;
}