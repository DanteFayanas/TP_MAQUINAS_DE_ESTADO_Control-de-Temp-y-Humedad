#include "mylib.h"

int main (){

    temperatura_t config;
    estados_t estados = espera; //Incio de la maquina
    printf("Control de Temperatura y Humedad \n");
    config = inicio_f();
    printf()
    while (1)
    {
        switch (estado)
        {
            case espera:
                estados = espera_f(config);
                break;
            case calentar:
                estados = calentar_f(config);
                break;
            case enfriar:
                estados = enfriar_f(config);
                break;
            case humedif:
                estados = humedif_f(config);
                break;
            case desmhume:
                estados = desmhume_f(config);
                break;
                        
    
        }
     }
        return 0;
 }