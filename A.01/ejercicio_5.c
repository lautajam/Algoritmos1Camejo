/*
A fin de crear un ser superior al Experimento 626 (a.k.a. Stich) y así poder capturarlo, el Dr Jumba Jookiba debe recolectar los 10 depredadores más letales de toda la galaxia.
Dada que esta tarea es bastante difícil, Jumba recibió ayuda del Dr Jacques von Hämsterviel con el cual establecieron que dentro de un año deberían capturar en total los 10 depredadores.

Crear un programa que, a partir de la cantidad de depredadores capturados por cada uno, imprima por pantalla “Te capturaremos 626!!!” si entre los dos lograron llegar a 10 o “Maldito hamster incompetente” en caso contrario.
*/

#include <stdio.h>

int main(){
	int cantidad_jumba;
	int cantidad_jacques;
	scanf("%i", &cantidad_jumba);
	scanf("%i", &cantidad_jacques);
	
    int cantidad_total = cantidad_jumba + cantidad_jacques;

    if (cantidad_total >= 10)
    {
        printf("Te capturaremos 626!!!\n");
    }
    else
    {
        printf("Maldito hamster incompetente\n");
    }

	return 0;
}