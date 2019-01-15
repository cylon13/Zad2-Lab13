#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "header.h"

void walec()
{
	double r,h;
	printf("Podaj promien walca (jesli to liczba calkowita zapisz w postaci np. 15.0 \n");
	scanf("%lf", &r);
	printf("Podaj wysokosc walca (jesli to liczba calkowita zapisz w postaci np. 15.0 \n");
	scanf("%lf", &h);
	printf("Objentosc kuli= %.2lf \n", r*r*h*M_PI);
	printf("Pole powierzchni kuli= %.2lf \n", 2*M_PI*r*(r+h));
	printf("Podaj dowolna liczbe, by kontynuowac \n");
	scanf("%lf", &r);
}
