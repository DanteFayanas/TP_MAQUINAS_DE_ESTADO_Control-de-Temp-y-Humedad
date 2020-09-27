#include <mylib.h>

tyh_t inicio_f(void)
{
    tyh_t config;
    config = parseConfig("config.conf");
    return config;
}

estados_t espera_f(tyh_t config)
{
    estados_t estado = espera;
    printf("En espera \n ") 
        if(T_amb()<T_set-deltaT)                //Calentar
            return calentar;
        if(T_amb()>T_set+deltaT)                //Enfriar                                 
            return enfriar;
        if(H_amb()<H_set-deltaH)                //Humedifica  
            return humedif;
        if(H_amb()>H_set+deltaH)                //Deshumedifica
            return desmhume;  
    return espera;

}

estados_t calentar_f(tyh_t config)
{
    estados_t estado = calentar;
    T_amb++;
    printf("Calentando \n");
    
    return espera;
}

estados_t enfriar_f(tyh_t config)
{
    estados_t estado = enfriar;
    T_amb--;
    printf("Enfriando \n");
    
    return espera;
}

estados_t humedif_t(tyh_t config)
{
    estados_t estado = humedif;
    H_amb++;
    printf("Humedeciendo \n");
    
    return espera;
}
estados_t desmhume_t(tyh_t config)
{
    estados_t estado = desmhume;
    H_amb--;
    printf("Deshumedeciendo \n");
    
    return espera;
}

