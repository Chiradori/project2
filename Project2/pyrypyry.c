#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
#include <math.h>
#include <string.h>
#define M_PI 3.142

// Uzywane zmienne: char, string, int, double
// String jest tablica char 
// Funkcje: Menu pozwalajace na wybranie jednej z 3 opcji: 
// Obliczanie pola elipsy, porownywanie dlugosci slow oraz wylaczenie programu

void menu();
void poleElipsy();
void porownywanie();

void main()
{
	while(1)
	{
		menu();
	}
}

void menu()
{
	char odp;
	printf("Opcje\na) Oblicz pole elipsy\nb) Porownywanie slow\nc) Wylacz program\n");
	scanf_s("%c", &odp);
	switch (odp)
	{
		case 'a':
		{
			poleElipsy();
			break;
		}
		case 'b':
		{
			porownywanie();
			break;
		}
		case 'c':
		{
			exit(0);
			break;
		}
		default:
		{
			system("cls");
			menu();
			break;
		}
	}
}

void poleElipsy()
{
	system("cls");
	int a, b;
	double p; // pole
	printf("Program do obliczania pola elipsy\n");
	printf("Podaj a:\n");
	scanf_s("%i", &a);
	printf("Podaj b:\n");
	scanf_s("%i", &b);
	p = M_PI * a*b;
	printf("\nTwoj wynik to:\n%G\n", p);
	system("pause");
}

void porownywanie()
{
	system("cls");
	char a[100];
	char b[100];
	printf("Program do porownywania dlugosci slow\n");
	printf("Podaj pierwsze slowo a\n");
	scanf_s("%s", &a,100);
	printf("Podaj drugie slowo b\n");
	scanf_s("%s", &b,100);
	printf("Wynik\n");
	if (strlen(a) == strlen(b))
	{
		printf("Sa rowne\n");
	}
	else
	{
		if (strlen(a) > strlen(b))
		{
			printf("Slowo %s jest dluzsze od %s\n", a, b);
		}
		else
		{
			printf("Slowo %s jest dluzsze od %s\n", b, a);
		}
	}
	system("pause");
}