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
    config.T_amb = leerTemp();
    config.H_amb = leerHum();
    printf("En espera ")

    return ()
}

estados_t calentar_f(tyh_t config)
{
    estados_t estado = calentar;


    return()
}

estados_t enfriar_f(tyh_t config)
{
    estados_t estado = enfriar;

    return ()
}

estados_t humedif_t(tyh_t config)
{
    estados_t estado = humedif;

    return ()
}
estados_t desmhume_t(tyh_t config)
{
    estados_t estado = desmhume;

    return ()
}

