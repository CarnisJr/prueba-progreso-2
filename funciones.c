#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
    

char validacionDeOpcion(){

    char selectorMenu;

    do{
        printf("Bienvenido a \"____\"\n\n");
        printf("1. Descansar\n2. Buscar Agua\n3. Cazar\n4. Buscar Objetos\n\n");
        printf("Ingrese una opcion: ");
        scanf(" %c", &selectorMenu);
        if(isdigit(selectorMenu) != 1)
            printf("ERROR\n");
            
        system("pause");
        system("cls");
        fflush(stdin);
            
    }while(isdigit(selectorMenu) != 1);

    return selectorMenu;
}
