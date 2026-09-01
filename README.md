# Trabajo Integrador Alfredo Pages
En este trabajo práctico se nos pidió realizar una maquina de estado en base a una temática a elección, en mi caso yo elegí un sistema ON-OFF de control de CO2 en un ambiente con alarma integrada.
## Memoria Descriptiva
Mi sistema representa un control de Dióxido de Carbono (CO2) ON-OFF con límite de ppm (partículas por millón) configurable y alarma de riesgo. La concentración en ppm de CO2 es leída por un único sensor.
Primero el sensor se deja calentar durante un tiempo definido, una vez cumplido ese tiempo se empiezan a tomar lecturas de CO2 mientras que la concentración sea menor al límite establecido por el usuario, si este limite es superado se enciende una alarma y se apaga el sensor durante un tiempo configurable, una vez cumplido este tiempo se reinicia el ciclo

<p align="center">
  <img src="Imagenes/MAQUINA%20DE%20ESTADO.png" alt="Mi Máquina de Estado" width="60%">
</p>

![Mi Máquina de Estado](Imagenes/MAQUINA%20DE%20ESTADO.png)
