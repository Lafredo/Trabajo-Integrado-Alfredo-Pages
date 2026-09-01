# Trabajo Integrador Alfredo Pages
En este trabajo práctico se nos pidió realizar una maquina de estado en base a una temática a elección, en mi caso yo elegí un sistema de control ON-OFF de CO2 en un ambiente ventilado con alarma integrada.
## Memoria Descriptiva
Mi sistema representa un control de Dióxido de Carbono (CO2) ON-OFF con límite de ppm (partículas por millón) configurable y alarma de riesgo. La concentración en ppm de CO2 es leída por un único sensor.
Primero el sensor se deja calentar durante un tiempo definido, una vez cumplido ese tiempo se empiezan a tomar lecturas de CO2 mientras que la concentración sea menor al límite establecido por el usuario, si este limite es superado se enciende una alarma y se apaga el sensor durante un tiempo configurable, una vez cumplido este tiempo se reinicia el ciclo
## Diagrama de la Máquina de Estado
<p align="center">
  <img src="Imagenes/MAQUINA%20DE%20ESTADO.png" alt="Mi Máquina de Estado" width="60%">
</p>

- t: tiempo.
- c: concentración de CO2 en ppm.
- t_calibración: tiempo definido de precalentamiento del sensor.
- t_off: tiempo de apagado del sensor hasta que el ambiente se considere "seguro".
- c_límite: concentración de CO2 máxima definida por el usuario.
