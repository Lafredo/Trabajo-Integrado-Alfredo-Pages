#include "mylib.h"

int main() {
    variables_t config;
    estados_t estado = ON; // primer estado
    estados_t (*fsm[])(variables_t) = {f_calentar, f_sensado, f_alarmado};
    config = f_inicio();
    while(1) estado = (*fsm[estado])(config);

  return 0;
}
