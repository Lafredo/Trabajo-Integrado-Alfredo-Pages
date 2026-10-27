#ifndef MY_LIB
#define MY_LIB
#include <stdio.h>

typedef enum {
  ON = 0,
  SENSING = 1,
  ALARM = 2
}estados_t;

typedef struct {
  char t;         // tiempo
  char t_cal;     // tiempo calibracion
  char t_off;    // tiempo off
  char c;          //concentracion en ppm
  char c_lim;   //limite de CO2
}variables_t;

variables_t f_inicio(void); // lee el archivo de configuración y carga las variables.

estados_t f_calentar(variables_t){

}

estados_t f_sensado(variables_t){

}

estados_t f_alarmado(variables_t){

}

estados_t (*fsm[])(variables_t);

#endif
