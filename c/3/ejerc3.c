#include <stdio.h>
#include <ctype.h>


int main(){
char letra;
 printf("Introduzca letras:\n");  
 scanf("%c",&letra);
 printf("La letra introducida es %c.\n",letra);
 fflush(stdin);
 while(&letra != 'q'){
	printf("Introduzca letras:\n");
    scanf("%c",&letra);
    fflush(stdin);
    printf("La letra introducida es %c.\n",letra);
    printf("La letra es %c\n", (int) letra);
    printf("En mayusculas: %c\n",(char)toupper(letra));
}printf("Fin del programa.\n");



	return 0;
}