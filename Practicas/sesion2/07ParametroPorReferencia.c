#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CADENA_POR_DEFECTO "Fernando"

#define POSICION_CADENA_EN_LINEA_COMANDOS 1

//Prototipos
void sustituyeEnteroPorSuCuadrado(int*);
void sustituyeEnteroPorSuCuadrado2(int);

int main (int argc, char *argv[]) {
  
  int longitud = strlen(CADENA_POR_DEFECTO);
  int longitud2 = strlen(CADENA_POR_DEFECTO);
  
  if (argc==2){
    longitud = strlen(argv[POSICION_CADENA_EN_LINEA_COMANDOS]);
    longitud2 = strlen(argv[POSICION_CADENA_EN_LINEA_COMANDOS]);
  }

  printf("%i", argc);
  
  sustituyeEnteroPorSuCuadrado(&longitud);
  sustituyeEnteroPorSuCuadrado2(longitud2);
  
  printf("La longitud de la cadena al cuadrado es %d\n",longitud);
  printf("La longitud de la cadena segun la segunda funcion es %d\n",longitud2);
  exit(1);
}

void sustituyeEnteroPorSuCuadrado(int *longi) {
  (*longi) *= (*longi);
}

void sustituyeEnteroPorSuCuadrado2(int longi){
    longi *= longi;                           //Al no modificar el dato en memoria, queda como var local y no cambia el valor
}

// 1. Compilar con "gcc 07ParametroPorReferencia.c"
// 2. Ejecutar con "./a.out"
// 3. Implementa otra función parecida a sustituyeEnteroPorSuCuadrado pero pasando el argumento por valor; estudia la diferencia de comportamiento

