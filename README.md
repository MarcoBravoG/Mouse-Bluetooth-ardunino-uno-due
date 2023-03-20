# Mouse-Bluetooth-ardunino-uno-due

Este github incluye el código completo y el circuito para comunicarse entre 2 Arduino de forma inalámbrica mediante el uso de 2 módulos Bluetooth HC-05.

En primer lugar, debemos emparejar los 2 dispositivos Bluetooth entre sí y luego debe continuar con el circuito y el código anteriores.

Los comandos AT para el módulo Bluetooth esclavo son:

EN
EN+FUNCIÓN=0
¿AT+DIRECCIÓN?
Los comandos AT para el módulo maestro de Bluetooth son:

EN
EN+FUNCIÓN=1
AT+BIND=00XX,XX,XXXXXX (dirección MAC del módulo Bluetooth esclavo)
Para saber más, mire este video: https://youtu.be/KEaU2RZ8WOI
