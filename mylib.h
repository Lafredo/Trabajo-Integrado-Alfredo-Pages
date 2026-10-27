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

variables_t f_inicio(void){

} // lee el archivo de configuración y carga las variables en config.

estados_t f_calentar(variables_t config){

}// precalienta el sensor mientras t<t_cal y devuelve el siguiente estado SENSING.

estados_t f_sensado(variables_t config){

}// lee el sensor mientras c<c_lim y devuelve el siguiente estado ALARM. --> NECESITA LEER PIN ADC ESP32 (Sensor CO2).

estados_t f_alarmado(variables_t config){

}// prende la alarma mientras t<t_off y vuelve al estado ON. --> NECESITA ENVIAR SEÑAL PIN OUTPUT ESP32 (Alarma).

estados_t (*fsm[])(variables_t);

#endif
