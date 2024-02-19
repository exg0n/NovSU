// Вариант 9

using namespace std;

#include <iostream>
#include <vector>

// Функция для вычисления значения F(n)
int F(int n) {

	if (n == 0)
		return 0;
	else if (n % 2 == 0)
		return F(n / 2);
	else
		return 1 + F(n - 1);
}

void task_1()
{
	int count = 0;

	for (int n = 1; n <= 500; ++n)
		if (F(n) == 3)
			count++;

	cout << "Количество чисел n, для которых F(n) = 3: " << count << endl;
}

vector<int> pascal(int n) {
	vector<int> row;
	// Если n равно 0, вернем пустую строку
	if (n == 0) {
		return row;
	}
	// Добавляем первый элемент в строку
	row.push_back(1);
	// Для каждого последующего элемента в строке
	for (int i = 1; i <= n; ++i) {
		// Расширяем строку на один элемент
		row.push_back(1);
		// Вычисляем элементы строки, кроме первого и последнего
		for (int j = i - 1; j > 0; --j)
			row[j] = row[j] + row[j - 1];
	}
	return row;
}
void task_2()
{
	int n;
	cout << "Введите число n: ";
	cin >> n;

	vector<int> result = pascal(n);

	// Выводим результат
	cout << "n-ая строка треугольника Паскаля: ";
	for (int num : result)
		cout << num << " ";
}

// Функция для вычисления степени числа
double power(double base, int exponent) {
	if (exponent == 0)
		return 1;
	else
		return base * power(base, exponent - 1);
}
void task_3()
{
	double base;
	int exponent;

	// Ввод базы и степени
	cout << "Введите число: ";
	cin >> base;
	cout << "Введите степень: ";
	cin >> exponent;

	// Вывод результата
	cout << "Результат: " << power(base, exponent);
}

void choose_task()
{
	int x = 0;

	cout << "Введите номер задания: ";
	cin >> x;

	if (x > 3 || x < 1)
	{
		cout << "Пожалуйста, введите корректный номер задания.\nВсего заданий: 3.\nПовторите попытку.\n";
		system("pause");
		system("cls");
		choose_task();
	}
	else
	{
		switch (x)
		{
		case 1:
			system("cls");
			task_1();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 2:
			system("cls");
			task_2();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 3:
			system("cls");
			task_3();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		}
	}
}

int main()
{
	setlocale(LC_ALL, "russian");

	choose_task();
}