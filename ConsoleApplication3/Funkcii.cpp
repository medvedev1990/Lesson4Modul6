#include<iostream>
#include<stdio.h>
#include<locale.h>
#include"Header.h"
#include<stdarg.h>
#include<time.h>
#include<math.h>

using namespace std;
int pifagor(int *katet1, int *katet2)
{
	int gipotenuza = (pow(*katet1, 2)) + (pow(*katet2, 2));
	gipotenuza = sqrt(gipotenuza);
	return gipotenuza;
}
void rasstoyanie(double *x1, double *x2, double *y1, double *y2)
{
	double km1;
	double km2;
	if (*x1 > *y1)
		km1 = *x1 - *y1;
	else
		km1 = *y1 - *x1;
	printf("Расстояние меджу точками х1 и у1 = %f\n", km1);
	if (*x2 > *y2)
		km2 = *x2 - *y2;
	else
		km2 = *y2 - *x2;
	printf("Расстояние меджу точками х2 и у2 = %f\n", km2);
}
/*int f(int *a, int *b)
{
	int c = (*a) / (*b);
	return c;
}
int f(int *c, int *b)
{
	int d = (*c) + (*b);
	return d;
}*/
void swap(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
	cout << "parametr a = " << *a << " b = " << *b << endl;
}
void drobi(int*a, int *b)
{
	int c;
	int i;
	if (*a > *b)
	{
		for (i = 1;i <= *b;i++)
		{
			if ((*a%i == 0) && (*b%i == 0))
				c = i;
		}
		*a = *a / c;
		*b = *b / c;
		printf("общий делитель %d числитель %d знаменатель %d\n", c, *a, *b);
	}
	else if (*b > *a)
	{
		for (i = 1;i <= *a;i++)
		{
			if ((*a%i == 0) && (*b%i == 0))
				c = i;
		}
		*a = *a / c;
		*b = *b / c;
		printf("общий делитель %i числитель %i знаменатель %i\n", c, *a, *b);
	}
	else
	{
		c = *b;
		*a = *a / c;
		*b = *b / c;
		printf("общий делитель %d числитель %d знаменатель %d\n", c, *a, *b);
	}
}
void ZappMass(int*m, int*val)
{
	int i;
	for (i = 0;i < *val;i++)
	{
		m[i] = 0 + rand() % 50;
	}
}
void printMass(int *m, int *val)
{
	int i;
	for (i = 0;i < *val;i++)
		printf("%d\t", *(m + i));
	printf("\n");
	printf("---------------------------\n");
}
void maxMin(int*m, int*val)
{
	int i;
	int max = m[0];
	int min = m[0];
	for (i = 0;i < *val;i++)
	{
		if (m[i] > max)
			max = m[i];
		if (m[i] < min)
			min = m[i];
	}
	printf("max = %d, min = %d", max, min);
}
void copyMass(int *m, int (*copymass)[4], int *val2)
{
	int i, j;
	int chek = 0;
	for (i = 0;i < *val2;i++)
	{
		for (j = 0;j < *val2;j++)
		{
			copymass[i][j] = m[chek];
			chek++;
			cout << copymass[i][j] << "\t";
		}
		cout << endl;
	}
}
void sortirovkaMass2(int(*mass)[4], int *val)
{
	int i, j, m, a;
	for (i = 0;i < *val;i++)
	{
		for (j = 0;j < *val;j++)
		{
			for (a = *val - 1;a > j;a--)
			{
				if (mass[i][a] < mass[i][a - 1])
				{
					m = mass[i][a];
					mass[i][a] = mass[i][a - 1];
					mass[i][a - 1] = m;
				}
			}
		}
	}
}
void printMass2(int(*mass)[4], int*val)
{
	printf("----------------------\n");
	int i, j;
	for (i = 0;i < *val;i++)
	{
		for (j = 0;j < *val;j++)
		{
			printf("%d\t", mass[i][j]);
		}
		printf("\n");
	}
}
void chet(int *mass, int*val)
{
	int i;
	int chet = 0;
	int nechet = 0;
	for (i = 0;i < *val;i++)
	{
		if (mass[i] % 2 == 0)
			chet++;
		else
			nechet++;
	}
	printf("четных чисел в массиве %d, не четных чисел %d\n", chet, nechet);
}

