#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "header.h"

void kula()
{
	double r;
	printf("Podaj promien kuli (jesli to liczba calkowita zapisz w postaci np. 15.0 \n");
	scanf("%lf", &r);
	printf("Objentosc kuli= %.2lf \n", (4*r*r*r*M_PI)/3);
	printf("Pole powierzchni kuli= %.2lf \n", 4*r*r*M_PI);
	printf("Podaj dowolna liczbe, by kontynuowac \n");
	scanf("%lf", &r);
}
