#include <stdio.h>
#include <stdlib.h>
#define TAM 1
/*
1. Dada  una estructura ePais cuyos campos son
id(int), nombre(20 caracteres), infectados(int), recuperados(int) y muertos(int).
Desarrollar una función llamada actualizarRecuperados que reciba el país y los recuperados del dia y que acumule estos a los que ya tiene el país. La función no devuelve nada.
*/
/*
2. Crear una función que se llame invertirCadena que reciba una cadena de caracteres como parámetro
y su responsabilidad es invertir los caracteres de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU
*/
/*
3. Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro
y su responsabilidad es ordenarlos caracteres de manera ascendente dentro de la cadena. Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"
*/

typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
} ePais;


int invertirCadena(char cadena[]);
int ordenarCaracteres(char cadena[]);
void actualizarRecuperados(ePais pais[],int cantidad,int recuperadosDia);

int main()
{
    //TEST PUNTO 1

    ePais pais[TAM]= {{1,"Argentina",10000,2000,3000}};

    printf("Despues %d\n",pais[0].recuperados);

    actualizarRecuperados(pais,TAM,1000);

    printf("Despues %d\n",pais[0].recuperados);




    //TEST PUNTO 2 y 3
    char cadena[20] = "PRUEBA";
    invertirCadena(cadena);
    printf("%s\n", cadena);
    ordenarCaracteres(cadena);
    printf("%s\n", cadena);
    return 0;
}

//PUNTO 1

void actualizarRecuperados(ePais pais[],int cantidad,int recuperadosDia)
{

    for(int i=0; i<cantidad; i++)
    {
        pais[i].recuperados = pais[i].recuperados + recuperadosDia;
    }
}



//PUNTO 2
int invertirCadena(char cadena[])
{
    int tam;
    char aux;
    tam=strlen(cadena);

    for(int i=0; i<tam-1; i++)
    {
        for(int j = i+1; j < tam; j++)
        {

            aux=cadena[i];
            cadena[i]=cadena[j];
            cadena[j]=aux;
        }
    }

}

//PUNTO 3
int ordenarCaracteres(char cadena[])
{
    int tam;
    char aux;
    tam=strlen(cadena);

    for(int i=0; i<tam-1; i++)
    {
        for(int j = i+1; j < tam; j++)
        {
            if(cadena[i]> cadena[j])
            {
                aux=cadena[i];
                cadena[i]=cadena[j];
                cadena[j]=aux;
            }
        }
    }


}
