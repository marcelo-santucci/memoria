/*
Programa: revisa_asignacion.c 
Curso: Sistemas Operativos URL
Objetivo: Programa empleado en ejercicio de debugueo para demostrar como se asigna la memoria
          en tiempo de ejecución.
*/

#include <stdio.h>
#include <stdint.h>

//Estructura de datos para mostrar distribución de variables de tipo "byte", "word" y "double word"
typedef struct {
    int8_t horas;               //1 byte
    uint32_t microsegundos;     //4 bytes
    uint16_t segundos;          //2 bytes
} informacion_de_tiempo;        //7 bytes en total

int main() {
    //Asignación de información a las variables 
    informacion_de_tiempo t = {.microsegundos=0x12345678, .segundos=0xDEAD, .horas=0x18};

    //Desplegar espacio ocupado en memoria
    printf("%lu\n", sizeof(t));

    return 0;
}