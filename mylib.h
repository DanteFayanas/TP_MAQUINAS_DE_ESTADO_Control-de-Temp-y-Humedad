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

typedef enum {
  tset= 0,
  hset= 1,
  dt= 2,
  dh= 3,
}casos_t;

typedef struct {
    char T_set;
    char deltaT;
    char H_set;
    char deltaH;
}tyh_t;

char T_amb (void);
char H_amb (void);

tyh_t inicio_f(void);

estados_t espera_f(tyh_t);
estados_t calentar_f(tyh_t);
estados_t enfriar_f(tyh_t);
estados_t humedif_t(tyh_t);
estados_t desmhume_t(tyh_t);


char *get_key(char *key);
tyh_t parse_config(char *);

#endif
