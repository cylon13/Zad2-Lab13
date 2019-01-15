#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

void prost()
{
	double a,b;
	printf("Podaj bok a prostokata (jesli to liczba calkowita zapisz w postaci np. 15.0 \n");
	scanf("%lf", &a);
	printf("Podaj bok b prostokata (jesli to liczba calkowita zapisz w postaci np. 15.0 \n");
	scanf("%lf", &b);
	printf("Pole trojkota = %.2lf \n", a*b);
	printf("Podaj dowolna liczbe, by kontynuowac \n");
	scanf("%lf", &a);
}
