#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define VALIDAR 1
#define NOVALIDAR 0



int tomarInt(char mensaje[],char mensajeError[],int x,int max,int min)
{
    int opcion;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%d",&opcion);

    if(x==1)
    {
        while(opcion >max||opcion<min)
        {
            printf("%s\n%s",mensajeError,mensaje);
            fflush(stdin);
            scanf("%d",&opcion);
        }
    }
    return opcion;
}
double sumaa(double numeroUno, double numeroDos)
{
    double resultado;
    resultado = numeroUno + numeroDos;
    return resultado;
}
double restaa(double numeroUno, double numeroDos)
{
    double resultadoR;
    resultadoR = numeroUno - numeroDos;
    return resultadoR;
}
double divicion(double numeroUno,double numeroDos)
{
    double resultadoD;
    resultadoD = numeroUno / numeroDos;
    return resultadoD;
}
double multiplicacion(double numeroUno,double numeroDos)
{
    double resultadoM;
    resultadoM = numeroUno * numeroDos;
    return resultadoM;
}

double factorial(double numero)
{
    if (numero==0)
    {
        return 1;
    }
    else
    {
        return numero*factorial(numero-1);
    }
}
void mostrarMenu()
{
    system("color 03");
    double valorA;
    double valorB;
    int opcion;
    int confirm = 0;
    int confirmDos = 0;
    int confirmTres= 0;
    double suma;
    double resta;
    double multi;
    double divi;
    double facA;
    double facB;

    do
    {
        system("cls");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~         CALCULADORA                          ~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~      Opciones:                               ~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~      1- Ingresar valor de A (A= %0.2f)        ~~~~~~~~~~~~~~~\n",valorA);
        printf("~~~~~~~~~~~~~~~~~      2- Ingresar valor de B (B= %0.2f)        ~~~~~~~~~~~~~~~\n",valorB);
        printf("~~~~~~~~~~~~~~~~~      3- Calcular todas las operaciones       ~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~      4- Mostrar resultados                   ~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~      5- Salir                                ~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        opcion = tomarInt("ingrese una opcion del 1-5: \n","Opcion incorrecta.\n",VALIDAR,6,0);
        switch(opcion)
        {
        case 1:
            valorA=tomarInt("ingrese valor A:","\nsolo numeros\n",NOVALIDAR,0,0);
            confirm=1;
            break;
        case 2:
            valorB=tomarInt("ingrese valor b:  \n","solo numeros\n",NOVALIDAR,0,0);
            confirmDos = 1;
            break;
        case 3:
            if(confirm==1 && confirmDos ==1)
            {
                suma = sumaa(valorA,valorB);
                resta = restaa(valorA,valorB);
                divi= divicion(valorA,valorB);
                multi = multiplicacion(valorA,valorB);
                facA= factorial(valorA);
                facB= factorial(valorB);
                printf("calculos realizados correctamente \n");
                system("pause");
                confirmTres =1;
            }
            else
            {
                printf("falta cargar valores \n");
                system("pause");
            }
            break ;
        case 4:
            if(confirmTres==1)
            {
                system("cls");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~RESULTADOS~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("~~~~~~~~~~~~~~~~~la suma  %.02lf+%.02lf es:%.02lf~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n",valorA,valorB, suma);
                printf("~~~~~~~~~~~~~~~~~la resta  %.02lf-%.02lf es:%.02lf~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n",valorA,valorB,resta);
                printf("~~~~~~~~~~~~~~~~~la multiplicacion  %.02lfx%.02lf es:%.02lf~~~~~~~~~~~~~~~~~~~~\n",valorA,valorB,multi);
                printf("~~~~~~~~~~~~~~~~~la divicion %.02lf/%.02lf es:%.02lf~~~~~~~~~~~~~~~~~~~~~~~~~~~\n",valorA,valorB,divi);
                printf("~~~~~~~~~~~~~~~~~el factorial de %.02lf es:%.02lf~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n",valorA,facA);
                printf("~~~~~~~~~~~~~~~~~el factorial de %.02f es:%.02lf~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n",valorB,facB);
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                system("pause");
            }
            else
            {
                printf("falta calcular valores\n");
                system("pause");
            }
            break;
        case 5:
            printf("hasta la proxima");
            break;

        }
    }
    while(opcion !=5 );
}
