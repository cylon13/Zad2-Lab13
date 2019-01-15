#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

int main()
{
    int ctrl;
    printf("Program oblicz pola i objetosci bryl i figur plaskich\n");
    while(1)
    {
        printf("\n");
        printf("Wybierz figure:\n");
	printf("Figury plaskie\n");
        printf("1 - Trojkot\n");
	printf("2 - Prostokat\n");
	printf("3 - Kolo\n");
	printf("\n");
	printf("Bryly:\n");
        printf("4 - Szescian\n");
	printf("5 - Kula\n");
	printf("6 - Walec\n");
	printf("\n");
        printf("7 - Wyjscie\n");
        scanf("%d", &ctrl);
        printf("\n");
        switch(ctrl)
        {
            case 1: {troj(); break;}
	    case 2: {prost(); break;}
	    case 3: {kolo(); break;}
	    case 4: {szesc(); break;}
	    case 5: {kula(); break;}
	    case 6: {walec(); break;}
            case 7: {break;}
            default : {printf("bledna opcja\n"); break;}
        }
        if(ctrl==7) break;
    }
    return 0;
}
