#include <iostream>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int i, n, max;
	do /*начало проверки условия*/
	{
		cout << "Введите количество чисел(n > 0) "; cin >> n;
	} while (n <= 0); /*конец проверки условия*/
	int* mas = new int[n];
	cout << "<Введите элементы массива : \n";
	for (i = 0; i < n; i++)
	{
		cin >> mas[i];
	}
	max = mas[0];
	for (i = 1; i < n; i++)
	{
		if (mas[i] > max)
		{
			max = mas[i];
		}
	}
	cout << "Максимальный элемент массива" << max;
	delete[]mas;
	system("pause >> void");
	return 0;
}
