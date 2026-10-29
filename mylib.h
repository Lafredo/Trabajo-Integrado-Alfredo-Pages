#ifndef MY_LIB
#define MY_LIB
#include <stdio.h>

typedef enum {
  ON = 0,
  SENSING = 1,
  ALARM = 2
}estados_t;

typedef struct {
  int t;         // tiempo
  int t_cal;     // tiempo calibracion
  int t_off;    // tiempo off
  int c;          //concentracion en ppm
  int c_lim;   //limite de CO2
  char SENSOR; //PIN ADC
  char ALARMA; //PIN OUTPUT
}variables_t;

variables_t f_inicio(void);
estados_t f_calentar(variables_t config);
estados_t f_sensado(variables_t config);
estados_t f_alarmado(variables_t config);
estados_t (*fsm[])(variables_t);

variables_t f_inicio(void){
  FILE *fp;
  variables_t aux = {0};

  if((fp = fopen("config.conf","rt+")) == NULL){
    printf("No se pudo abrir el archivo");
    return aux;
  }

  if (fscanf(fp, "t_cal = %d", &aux.t_cal) != 1 || fscanf(fp, "t_off = %d", &aux.t_off) != 1 ||
      fscanf(fp, "c_lim = %d", &aux.c_lim) != 1 || fscanf(fp, "SENSOR = %c", &aux.SENSOR) != 1 ||
      fscanf(fp, "ALARMA = %c", &aux.ALARMA) != 1) 
    {
        printf("Error al leer la configuracion\n");
        aux = (variables_t){0};
    }

  fclose(fp);
  return aux;
} // lee el archivo de configuración y carga las variables en config.

estados_t f_calentar(variables_t config){

}// precalienta el sensor mientras t<t_cal y devuelve el siguiente estado SENSING.

estados_t f_sensado(variables_t config){

}// lee el sensor mientras c<c_lim y devuelve el siguiente estado ALARM. --> NECESITA LEER PIN ADC ESP32 (Sensor CO2).

estados_t f_alarmado(variables_t config){

}// prende la alarma mientras t<t_off y vuelve al estado ON. --> NECESITA ENVIAR SEÑAL PIN OUTPUT ESP32 (Alarma).

#endif
