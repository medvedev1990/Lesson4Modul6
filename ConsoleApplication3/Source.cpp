#include<iostream>
#include<stdio.h>
#include<locale.h>
#include"Header.h"
#include<stdarg.h>
#include<time.h>
#include<math.h>

using namespace std;

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	cout.precision(5);
	cout.setf(ios::boolalpha);
	int n, exit;//Почему если указать тип short int ввести scanf ("%d",&exit), команда while(exit==1) выдает ошибка на любой цифре кроме 1; 
	do
	{
		printf("Enter number exemple: ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
		{
			/*1.Определите функцию double f(double x, double y), которая вычисляет и возвращает длину гипотенузы прямоугольного треугольника, когда две другие стороны x и y известны*/
			int katet1;
			int katet2;
			int gipotenuza;
			printf("Введите длину катета: ");
			scanf("%d", &katet1);
			printf("введите длину второго катета: ");
			scanf("%d", &katet2);
			printf("\n");
			gipotenuza = pifagor(&katet1, &katet2);
			printf("длина гипотенузы = %d\n", gipotenuza);
		}
		break;
		case 2://как нужно обзначить тип double в команде scanf(%d,%i,%f не принимают значения данного типа)
		{
			/*2.Напишите функцию double f(double x1, double y1, double x2, double y2), которая вычисляет расстояние между двумя точками (xl, yl) и (x2, y2).*/
			double x1, x2, y1, y2;
			printf("Введите точку x1: ");
			cin >> x1;
			printf("Введите точку x2: ");
			cin >> x2;
			printf("Введите точку y1: ");
			cin >> y1;
			printf("Введите точку y2: ");
			cin >> y2;
			rasstoyanie(&x1, &x2, &y1, &y2);
		}
		break;
		case 3:
		{
			/*3.Напишите несколько функций с одним именем int f(…) и с разными наборами параметров. Продемонстрируйте работу перегруженных функций
			int a, b, c, d;
			printf("enter parametr a: ");
			scanf("%d", &a);
			printf("enter parametr b: ");
			scanf("%d", &b);
			printf("enter parametr c: ");
			scanf("%d", &c);
			printf("enter parametr c: ");
			scanf("%d", &c);
			d = f(&a, &b);
			printf("Перегружена функция f: %d", &d);
			*/
		}
		break;
		case 4:
		case 5:
		{
			/*Напишите функцию swap(int* a, int* b), которая изменяет значения параметров a и b так, что новое значение a равно старому значению b и наоборот. */
			int a, b;
			printf("please enter parametrs a: ");
			scanf("%d",&a);
			printf("please enter parametrs b: ");
			scanf("%d", &b);
			swap(&a, &b);
		}
		break;
		case 6:
		{
			/*6.Даны два натуральных числа a и b, обозначающие соответственно числитель и знаменатель дроби. Сократить дробь, используя функцию определения наибольшего общего делителя*/
			int a, b;
			printf("введите числитель дроби: ");
			scanf("%d", &a);
			printf("введите знаменатель дроби: ");
			scanf("%d", &b);
			drobi(&a, &b);
		}
		break;
		case 7:
		{
			/*7.В заданном массиве целых чисел найти максимальное и минимальное число, использую функции определения максимального и минимального числа*/
			int mass[10];
			int val = 10;
			ZappMass(mass, &val);
			printMass(mass, &val);
			maxMin(mass, &val);
		}
		break;
		case 8:
		{
			/*8.Задан одномерный массив из 16 элементов. Сформировать двухмерный массив 4×4, 
			в котором элементы увеличиваются слева направо, используя функции сортировки и преобразования одномерного массива в двухмерный массив*/
			int mass[16];
			int mass2[4][4];
			int val = 16;
			int val2 = 4;
			ZappMass(mass, &val);
			printMass(mass, &val);
			copyMass(mass, &(mass2)[4], &val2);
			sortirovkaMass2(&(mass2)[4], &val2);
			printMass2(&(mass2)[4], &val2);
		}
		break;
		case 9:
		{
			/*9.С помощью функции random(n) сгенерировать массив чисел от 0 до 50 
			и определить количество четных и нечетных чисел в этом массиве. Для определения четных и нечетных чисел использовать функцию*/
			int m[10];
			int val = 10;
			ZappMass(m, &val);
			printMass(m, &val);
			chet(m, &val);
		}
		break;
		default:printf("Don't number exemple! Please repeat enter number exemple!\n");
			break;
		}
		printf("Do Your want to continue? 1-Yes 2-No: ");
		scanf("%d", &exit);
	} while (exit == 1);

}