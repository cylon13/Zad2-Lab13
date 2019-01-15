#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

void szesc(){
	double a;
	printf("Podaj bok szescianu (jesli to liczba calkowita zapisz w postaci np. 15.0 \n");
	scanf("%lf", &a);
	printf("Objetosc szescianu = %.2lf \n", a*a*a);
	printf("Pole powierzchni szescianu = %.2lf \n", a*a*6);
	printf("Podaj dowolna liczbe, by kontynuowac \n");
	scanf("%lf", &a);
}
