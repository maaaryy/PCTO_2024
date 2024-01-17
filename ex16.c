#include<stdio.h>

int main(){
    float temperaturaCelsius;
    float zeroAssoluto = -273.15;
    
    printf("inserisci una temperatura in celsius:\n");
    scanf("%f", &temperaturaCelsius);
    if(temperaturaCelsius < zeroAssoluto){
        printf("errore\n");
    }else{
        printf("fahrenheit: %f F\n ", 1.8*temperaturaCelsius + 32);
        printf("kelvin: %f K\n ", temperaturaCelsius + 273.15);
    }
    return(0);
}