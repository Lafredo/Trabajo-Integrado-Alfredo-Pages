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

variables_t f_inicio(){

} // lee el archivo de configuración y carga las variables.

estados_t f_calentar(variables_t config){

}// precalienta el sensor y devuelve el siguiente estado SENSING.

estados_t f_sensado(variables_t config){

}// lee el sensor y devuelve el siguiente estado ALARM.

estados_t f_alarmado(variables_t config){

}// prende la alarma y vuelve al estado ON.

estados_t (*fsm[])(variables_t);

#endif
