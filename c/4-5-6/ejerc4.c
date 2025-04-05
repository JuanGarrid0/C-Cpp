#include <stdio.h>
#include <math.h>

typedef struct {
 float r;
 float i;
}Complex;
Complex c1={1, 5};
Complex c2={3.1, 5};

Complex sumaComplejos(Complex x, Complex y){
  Complex suma;
  float rtot=x.r+y.r;
  float itot=x.i+y.i;
  suma.r=rtot;
  suma.i=itot;
  return suma;
} 
//Ejercicio 5
double modulo(Complex x){
 double modul;
 modul=sqrt(x.r*x.r + x.i*x.i);
 return modul;
}

int main (){
  printf("El numero complejo 1 es %f, %f\n", c1.r, c1.i);
  Complex sumado= sumaComplejos(c1,c2);
  printf("La suma de complejos es %f, %f\n",sumado.r,sumado.i );
  
  //Ejercicio 5
  double modulado = modulo(c1);
  printf("El modulo del complejo 1 es %lf\n",modulado);

  //Ejercicio 6
  float size=sizeof(c1);
  printf("El tamaño del Complejo 1 es= %f\n",size);

}