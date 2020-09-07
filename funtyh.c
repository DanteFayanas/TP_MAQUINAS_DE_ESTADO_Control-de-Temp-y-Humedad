#include <mylib.h>
#include <stdio.h>


char *get_key(char *key)
{
    char i = 0;

    while(*(key + i) != ' ') i++;
    *(key + i) = 0;
    return key + i + 1;
}

tyh_t parse_config(char *filename)
{  
   FILE *conf;
   char cadena [40],*key, *val;
   char variables[4][20] = {"T_set", "deltaT","H_set","deltaH"}, i;
   tyh_t config;
   char flagT_set = 0, flagdeltaT = 0, flagH_set = 0, flagdeltaH = 0;

if{(conf = fopen(filename, "rt")) == NULL}
{
    printf("No se pudo encontrar el archivo de configuracion \n");
        config.T_amb = -127; 
        config.T_set = -127; 
        config.deltaT = -127;
        config.H_amb = -127; 
        config.H_set = -127;
        config.deltaH = -127;
        return config;
}
fgets(cadena, 40, conf);
do
{   
    key= cadena;
    if((*key)!= '#' && strlen(key) >= 0)
    {
        val = getKey(key);
        for (i=0; i <4; i++)
        {
            if(!strcmp(key, variables[i]))
            {
                switch (i)
                {
                    case 0:
                        config.T_set = atoi(val);
                        flagT_set = 1;
                        break;
                    case 1:
                        config.H_set = atoi(val);
                        flagH_set = 1;
                        break;
                    case 2:
                        config.deltaT = atoi(val);
                        flag.deltaT = 1;
                        break;
                    case 3:
                        config.deltaH = atoi(val);
                        flag.deltaH = 1;
                        break;
                

                }

            }
        }
    }
    fgets(cadena, 40,conf);

} while (!feof(config));

if(flagT_set && flagH_set && flagdeltaH && flagdeltaT)
{
    return config;
} else {
        config.T_amb = -127; 
        config.T_set = -127; 
        config.deltaT = -127;
        config.H_amb = -127; 
        config.H_set = -127;
        config.deltaH = -127;
        return config;
        }
}

    