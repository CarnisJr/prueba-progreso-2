#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include "funciones.h"

int main(void){

    char selector;
    int condicion;

    do{
        selector = validacionDeOpcion();

        switch (selector)
        {
        case 49:                                        //49 = '1'
            printf("Descansaste\n");
            system("pause");
            system("cls");
            break;
        case 50:                                        //48 = '2'
            printf("Buscas agua\n");
            system("pause");
            system("cls");
            break;
        case 51:                                        //51 = '3'
            printf("estas cazando\n");
            system("pause");
            system("cls");
            break;
        case 52:                                        //52 = '4'
            printf("Buscas objetos\n");
            system("pause");
            system("cls");
            break;
        default:
            printf("Opcion no valida\n");
            system("pause");
            system("cls");
            break;
        }

    }while(condicion); 

    return 0;
}