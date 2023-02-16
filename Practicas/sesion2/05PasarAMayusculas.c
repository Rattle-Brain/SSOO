#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define CADENA_POR_DEFECTO "Fernando Alvarez Garcia"
#define CADENA_ALFABETO "abcdefghijklmnopqrstuvwxyz"

#define POSICION_CADENA_EN_LINEA_COMANDOS 1
#define LIMITE_POR_DEFECTO 10

//El prototipo (vvv) de una funcion indica como  esta definida una funcion.
void pasarAMayusculas(char[]); //Aqui la funcion esta indicada, pero no definida
//Otro prototipo (vvv)
void pasarAMayusElPrincipioDelAlfabeto(char[]);
//El indicado nos hace saber que la funcion no retorna nada y recibe un array de caracteres por parametro.

int main (int argc, char *argv[]) {
  
  char cadena[]=CADENA_POR_DEFECTO;
  char alfabeto[] = CADENA_ALFABETO;
  
  if (argc==2)
      strcpy(cadena, argv[POSICION_CADENA_EN_LINEA_COMANDOS]);
  
  pasarAMayusculas(cadena);
  printf("La cadena de caracteres es ahora %s\n",cadena);
  printf("\n");
  pasarAMayusElPrincipioDelAlfabeto(alfabeto);
  printf("El alfabeto modificado es: %s\n", alfabeto);
  
  exit(1);
}

void pasarAMayusculas(char cadena[]) {
  
  int i;
  int longitud=strlen(cadena);
  
  for (i=0; i<longitud;i++)
    cadena[i]=toupper(cadena[i]);
}

void pasarAMayusElPrincipioDelAlfabeto(char alfabeto[]){
  for(int i = 0; i < LIMITE_POR_DEFECTO; i++){
    alfabeto[i] = toupper(alfabeto[i]);
  }
}

// 1. Compilar con "gcc 05PasarAMayusculas.c"
// 2. Ejecutar con "./a.out"
// 3. Obtener la ayuda sobre strcpy, strlen, toupper: "man strcpy", "man strlen", "man toupper"
// 4. Modificar el programa para que sólo pase a mayúsculas las 10 primeras letras del alfabeto