#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <time.h>
#include "Header.h"


using namespace std;

void main()
{
	setlocale(LC_ALL, ("Rus"));
	srand(time(NULL));
	int nz;
	do
	{
		printf("Vvedite nomer zadaniya?");
		scanf("%d", &nz);
		if (nz == 1)
		{
		/*	15.	������ ����� ����� N � ������ �� N ����� �����. 
		����������, ���� �� � ������� ����� 20.*/
			int * arr;
			int k, count = 0;
			cout << "Zadaite chislo?" << endl;
			cin >> k;
			arr = (int*)calloc(k, sizeof(int));
			for (int i = 0; i < k; i++)
			{
				arr[i] = 1 + rand() % 50;
				cout << arr[i] << "\t";
			}
			cout << endl;
			for (int i = 0; i < k; i++)
			{
				if (arr[i] == 20)
					count++;
			}
			if (count>0)
				cout << "V massive est' chislo 20" << endl;
			else
				cout << "V massive net chisla 20" << endl;
		}
		else if (nz == 2)
		{
			int a[10], max = 0, min = 0;
			create(a, 10, 1, 30);
			for (int i = 0; i < 10; i++)
			{
				if (a[i] > a[max])
					max = i;
			}
			for (int i = 0; i < 10; i++)
			{
				if (a[i] < a[min])
					min = i;
			}
			cout << a[max] << " - " << a[min] << endl;
			int pr = a[max] * a[min];
			cout << pr << endl;
		}
		else if (nz == 3)
		{
			/*13.	������ ����� ����� N.������� ������ �� N ������������ �����.
				��������� ����� ������������ � ������������� ���������.*/
			int * arr;
			int k, sum = 0, max = 0, min = 0;
			cout << "Zadaite chislo?" << endl;
			cin >> k;
			arr = (int*)calloc(k, sizeof(int));
			create(arr, k, 0, 30);
			for (int i = 0; i < k; i++)
			{
				if (arr[i] > arr[max])
					max = i;
			}
			for (int i = 0; i < k; i++)
			{
				if (arr[i] < arr[min])
					min = i;
			}
			sum = arr[max] + arr[min];
			cout << "Sum = " << sum << endl;

		}
		else if (nz == 4)
		{
		/*	12.	������ ����� ����� N � ������ �� N ������������ �����.
				���������� ������ ���������� �������������� �������� �������*/
			int * arr;
			int k, t;
			cout << "Zadaite chislo?" << endl;
			cin >> k;
			arr = (int*)calloc(k, sizeof(int));
			create(arr, k, -10, 30);
			for (int i = 0; i < k; i++)
			{
				if (arr[i] < 0)
					t = i;
			}
			cout << t << endl;

		}
		else if (nz == 5)
		{
			/*11.	������ ������������ �����.������� �� ��� ������.
				���������� ���������� ��������������� ��������� �������*/
			int * arr;
			int k, count=0;
			cout << "Zadaite chislo?" << endl;
			cin >> k;
			arr = (int*)calloc(k, sizeof(int));
			create(arr, k, -10, 30);
			for (int i = 0; i < k; i++)
			{
				if (arr[i] > 0)
					count++;
			}
			cout << count << endl;
		}
		else if (nz == 6)
		{
			/*10.	������ ������������ �����.������� �� ��� ������.
				���������� ������� �������������� ��������� �������.*/
			int * arr;
			int k, count = 0, sr;
			cout << "Zadaite chislo?" << endl;
			cin >> k;
			arr = (int*)calloc(k, sizeof(int));
			create(arr, k, -10, 30);
			for (int i = 0; i < k; i++)
			{
				count += arr[i];
			}
			sr = count / k;
			cout << sr << endl;
		}
		else if (nz == 7)
		{
			/*9.	������ ����� ����� N � ������ �� N ����� �����.
				���������� ���������� ������� �������*/
			int * arr;
			int k,  min = 0;
			cout << "Zadaite chislo?" << endl;
			cin >> k;
			arr = (int*)calloc(k, sizeof(int));
			create(arr, k, 0, 30);
			for (int i = 0; i < k; i++)
			{
				if (arr[i] < arr[min])
					min = i;
			}
			cout << arr[min] << endl;

		}
		else if (nz == 8)
		{
			/*8.	������ ������������ �����.
				������� �� ��� ������ ���������� ���������� ������� �������*/
			int * arr;
			int k, max = 0;
			cout << "Zadaite chislo?" << endl;
			cin >> k;
			arr = (int*)calloc(k, sizeof(int));
			create(arr, k, 0, 30);
			for (int i = 0; i < k; i++)
			{
				if (arr[i] > arr[max])
					max = i;
			}
			cout << arr[max] << endl;
		}
		else if (nz == 9)
		{
			/*7.	������ ����� ����� N.������� ������ �� N ������������ �����.
				��������� ������������ ���������, ������ ������� ������ 7.*/

		}
		else if (nz == 10)
		{
			/*6.	������ ����� ����� N � ������ �� N ������������ �����.
				���������� ���������� ������������� ��������� �������*/
			int * arr;
			int k, count = 0;
			cout << "Zadaite chislo?" << endl;
			cin >> k;
			arr = (int*)calloc(k, sizeof(int));
			create(arr, k, -10, 30);
			for (int i = 0; i < k; i++)
			{
				if (arr[i] < 0)
					count++;
			}
			cout << count << endl;
		}
		else if (nz == 11)
		{
			/*5.	������ ����� �����.������� �� ��� ������.
				��������� ����� ������ ��������� �������*/
			int * arr;
			int k, count = 0;
			cout << "Zadaite chislo?" << endl;
			cin >> k;
			arr = (int*)calloc(k, sizeof(int));
			create(arr, k, 0, 30);
			for (int i = 0; i < k; i++)
			{
				if (arr[i] % 2 == 0)
					count += arr[i];
			}
			cout << count << endl;
		}
	} while (nz == 999);
}