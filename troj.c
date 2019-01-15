#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

void troj()
{
	double a,h;
	printf("Podaj bok trojota (jesli to liczba calkowita zapisz w postaci np. 15.0 \n");
	scanf("%lf", &a);
	printf("Podaj wysokosc opuszczona na ten bok (jesli to liczba calkowita zapisz w postaci np. 15.0 \n");
	scanf("%lf", &h);
	printf("Pole trojkota = %.2lf \n", a*h/2);
	printf("Podaj dowolna liczbe, by kontynuowac \n");
	scanf("%lf", &a);
}
