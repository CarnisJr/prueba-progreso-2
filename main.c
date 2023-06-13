#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(void){

    char estadoFruta[10];
    float precioLoteDescuento, precioLote;
    int numFrutas = 0;
    int contFrutaMala = 0, contFrutaMadura = 0, contFrutaPasada = 0, contTotal = 0;
    float porcentajeFrutaMala, procentajeFrutaMadura, procentajeFrutaPasada;

    printf("Ingresar el precio original del lote: ");
    scanf("%f", &precioLote);

    do{
        
        printf("Ingrese la condicion de la fruta (mala, madura, pasada) y \'terminar\' para dejar de ingersar: ");
        scanf("%s", estadoFruta);
        if(strcmp(estadoFruta, "mala") == 0){
            contFrutaMala++;
            printf("Se ha ingresado una fruta mala\n");            
        }else if(strcmp(estadoFruta, "madura") == 0){
            contFrutaMadura++; 
            printf("Se ha ingresado una fruta madura\n");            
        }else if(strcmp(estadoFruta, "pasada") == 0){
            contFrutaPasada++;
            printf("Se ha ingresado una fruta pasada\n");            
        }else if(strcmp(estadoFruta, "terminar") == 0){
            continue;
        }else{
            printf("Opcion no valida\n\n");
        }       
    }while(strcmp(estadoFruta, "terminar") != 0);

    //Porcentajes del estado de las frutas 
    contTotal = contFrutaMadura + contFrutaMala + contFrutaPasada;
    porcentajeFrutaMala = 100 * (float) contFrutaMala / (float) contTotal;
    procentajeFrutaMadura = 100 * (float) contFrutaMadura / (float) contTotal;
    procentajeFrutaPasada = 100 *(float) contFrutaPasada / (float) contTotal;
    
    printf("Total de frutas: %d\n", contTotal);
    printf("Frutas malas: %d Porcentaje: %.2f\n", contFrutaMala, porcentajeFrutaMala);
    printf("Frutas maduras: %d Porcentaje: %.2f\n", contFrutaMadura, procentajeFrutaMadura);
    printf("Frutas pasadas: %d Porcentaje: %.2f\n", contFrutaPasada, procentajeFrutaPasada);

    if((porcentajeFrutaMala + procentajeFrutaPasada) >= 30.0){

        printf("No compres el lote\n\n");
    }
    if(porcentajeFrutaMala < 5.0 && procentajeFrutaPasada > 5.0){

        precioLoteDescuento = precioLote * 0.80;
        printf("Se compra el lote al 80%c del precio original: %.2f\n\n", '%', precioLoteDescuento);
    }else   if((porcentajeFrutaMala + procentajeFrutaPasada) > 15.0 && (porcentajeFrutaMala + procentajeFrutaPasada) < 30.0){

        precioLoteDescuento = precioLote * 0.70;
        printf("Se compra el lote con al 70%c del precio orginal: %.2f\n\n", '%', precioLoteDescuento);
    }else{
        printf("Compra el lote al precio original: %.2f\n\n", precioLote);
    }
    
    system("pause");
    return 0;
}