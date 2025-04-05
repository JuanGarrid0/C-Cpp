#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct {
 float r;
 float i;
}Complex;

Complex c1={3.1, 5};
Complex* pr = &c1;
Complex c2={1, 5};
Complex* pi= &c2;

Complex sumaComplejos(Complex x, Complex y){
  Complex suma;
  float rtot=x.r+y.r;
  float itot=x.i+y.i;
  suma.r=rtot;
  suma.i=itot;
  return suma;
} 

void sacarPorPantalla(Complex c){
  printf("El numero complejo es: %f,%f\n",c.r,c.i);
}

//funcion de restar con punteros Ejercicio 9
void restar( Complex* cx, Complex* cy){
  cx->r = cx->r - cy->r;
  cx->i = cx->i - cy->i; 
};



int main (){
  printf("El numero complejo 1 es %f, %f\n", c1.r, c1.i);
  Complex sumado= sumaComplejos(c1,c2);
  printf("La suma de complejos es %f, %f\n",sumado.r,sumado.i );
  sacarPorPantalla(c1);

  //Ejercicio 9
  restar(pr,pi);
  printf("La resta es: %f,%f\n",pr->r,pr->i);

  //declaracion c2 Ejercicicio 10
  Complex *cmp2;
  cmp2=malloc(sizeof(Complex));
  cmp2->r=3;
  cmp2->i=2;
  printf("Se resta pr= %f,%f y el nuevo c2= %f,%f\n",pr->r,pr->i,cmp2->r,cmp2->i);
  restar(pr,cmp2);
  printf("La nueva resta es: %f,%f\n",pr->r,pr->i);
  free(cmp2);
}



