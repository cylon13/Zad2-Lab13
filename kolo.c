#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "header.h"

void kolo()
{
	double r;
	printf("Podaj promien kola (jesli to liczba calkowita zapisz w postaci np. 15.0 \n");
	scanf("%lf", &r);
	printf("Pole kola= %.2lf \n", r*r*M_PI);
	printf("Podaj dowolna liczbe, by kontynuowac \n");
	scanf("%lf", &r);
}
