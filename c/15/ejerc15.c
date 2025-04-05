#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//FALLO EN EL PROGRAMA, EN LA POSICION 0 SE ALMACENA LA RUTA DE MEMORIA NO SE PORQUE, SI ARREGLO, COMPLETA FUNCIONALIDAD
typedef struct{
 int id;
 float nota;
}asig;



char sacarPorPantallaOpciones(){
 char opcion;
 char str[5];
 printf("1.Introducir asignatura\n");
 printf("2.Mostrar listado\n");
 printf("3.Calcula la media\n");
 printf("Pulsar q para salir\n");
 fgets(str,5,stdin);          //importante añadir el fgets para evitar fallos de repeticion y lectura
 sscanf(str,"%c\n",&opcion);
 fflush(stdin);
 return opcion;
};

void introducirAsignatura(int tamano,asig *p[]){
 int idA;
 float notaA;
 printf("Introduce el id:\n");
 scanf("%i",&idA);
 if(idA==0){while(idA==0){
   printf("Introduce el id:\n");
   scanf("%i",&idA);
 }}
 fflush(stdin);
 printf("Introduce la nota:\n");
 scanf("%f",&notaA);
 fflush(stdin);
 asig newA={idA,notaA};
 asig *po=p[0];
 for(int a =0;a<tamano;a++){
   if(po->id=='\0'&&po->nota=='\0'){
      po->id =newA.id;
      po->nota = newA.nota;
      break;
   }*po++;
 }

};
void mostrarLista(int tamano, asig *arrayAsig[]){
    asig* p=arrayAsig[0];
    for(int a=0; a<tamano;a++){
     printf("La asignatura %i, tiene una nota de %f\n",p->id,p->nota);
     *p++;
    }
};
void calculaMedia(int tamano, asig *arrayAsig[]){
 asig* p=arrayAsig[0];
 float sumaNotas=0;
 int counter=0;
 for(int a=0; a<tamano ;a++){
   if((p->id) != 0){  sumaNotas= sumaNotas+p->nota;
                       counter++;  }
   *p++;
 }printf("La media de las asignaturas es: %f\n ",sumaNotas/counter);
};

int main(){
 asig *p= (asig * )malloc(sizeof(asig)*5);//array dinamico --creamos posiciones en memoria
 int idA;
 float notaA;
 int choice;
 do{  choice=(int)sacarPorPantallaOpciones();
  switch(choice){
   case (int)'1':
      introducirAsignatura(5,&p);
    break;
   case (int)'2':
      mostrarLista(5,&p);

    break;
   case (int)'3':
      calculaMedia(5,&p);

    break;
   case (int)'q':
      free(p);
      break;
   default:
    printf("Opcion no reconocida, pruebe de nuevo\n");
    break;
 }
}while(choice!=(int)'q');

}