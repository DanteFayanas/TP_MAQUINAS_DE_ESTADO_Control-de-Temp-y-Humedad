#ifndef MY_LIB
#define MY_LIB
#include <stdio.h>

typedef enum {
  espera = 0,
  calentar = 1,
  enfriar = 2,
  humedif = 3,
  desmhume = 4
}estados_t;

typedef struct {
    char T_amb;
    char T_set;
    char deltaT;
    char H_amb;
    char H_set;
    char deltaH;
}tyh_t;


tyh_t inicio_f(void);

estados_t espera_f(tyh_t);
estados_t calentar_f(tyh_t);
estados_t enfriar_f(tyh_t);
estados_t humedif_t(tyh_t);
estados_t desmhume_t(tyh_t);


char *get_key(char *key);
tyh_t parse_config(char *);

#endif
