 #include <stdio.h>
#include <windows.h>
 
int resultado = -1;
 
DWORD WINAPI ThreadFunc(void* data) {
  //Casteamos nuestros parametros de entrada a puntero de tipo *int;
  int numero1 = *((int*)data);
  int numero2 = *((int*)data + 1);
 
  resultado = numero1 + numero2;
  return 0;
}
 
int main() {
  //Creamos los parámetros que le vamos a pasar al thread
  int *parametros = calloc(2, sizeof(int));
  *(parametros) = 5;
  *(parametros + 1) = 10;
 
  HANDLE thread = CreateThread(NULL, 0, ThreadFunc, (void*)parametros, 0, NULL);
   
  //Si se ha podido crear el Thread, esperamos a que termine
  if (thread) {
    //Esperamos a que termine el thread
    WaitForSingleObject(thread, INFINITE);
    //Obtenemos el valor que ha calculado el thread
    printf("El resultado de la suma es: %d\n", resultado);
  }
  //Liberamos la memoria
  free(parametros);
 
  printf("Ha terminado el thread y ahora va a terminarse el programa principal!\n");
}