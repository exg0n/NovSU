#include <iostream>
#include <vector>
#include <string>

using namespace std;

void draw_horizontal_line()
{
	for (int i = 0; i < 60; i++)
		cout << '*';
}
void task_1()
{
	draw_horizontal_line();
}

void draw_rectangle() 
{
	for (int i = 0; i < 20; ++i)
		for (int j = 0; j < 60; ++j)
			cout << '*';
}
void draw_rectangle2()
{
	for (int i = 0; i < 20; ++i)
		draw_horizontal_line();
}
void task_2()
{
	draw_rectangle();
	cout << endl << endl << endl << endl;
	draw_rectangle2();
}

void mathematical_example()
{
	double x = (sqrt(6) + 6) / 2 + (sqrt(13) + 13) / 2 + (sqrt(21) + 21) / 2;
	cout << "Значение x: " << x;
}
void task_3()
{
	mathematical_example();
}

int sign(int a) {

	if (a < 0)
		return -1;
	else if (a == 0)
		return 0;
	else
		return 1;
}
void task_4()
{
	int x = 0, y = 0;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;

	int z = sign(x) + sign(y);
	cout << "Значение z: " << z;
}

int count_even(const vector<int>& numbers)
{
	int counter = 0;
	for (int number : numbers) {
		if (number % 2 == 0) {
			counter++;
		}
	}
	return counter;
}
int count_odd(const vector<int>& numbers)
{
	int counter = 0;
	for (int number : numbers) {
		if (number % 2 != 0) {
			counter++;
		}
	}
	return counter;
}
vector<int> input_sequence(int size)
{
	vector<int> sequence(size);
	for (int i = 0; i < size; i++) {
		cout << "Введите число " << (i + 1) << ": ";
		cin >> sequence[i];
	}
	return sequence;
}
void task_5()
{
	cout << "Введите 8 чисел для первой последовательности:\n";
	vector<int> a = input_sequence(8);

	cout << "Введите 8 чисел для второй последовательности:\n";
	vector<int> b = input_sequence(8);

	cout << "Количество четных чисел в первой последовательности: " << count_even(a) << endl;
	cout << "Количество нечетных чисел во второй последовательности: " << count_odd(b) << endl;
}

int factorial(int n)
{
	int fact = 1;
	for (int i = 2; i <= n; i++)
		fact *= i;
	return fact;
}
void task_6()
{
	double value = (2.0 * factorial(5) + 3.0 * factorial(8)) / (factorial(6) + factorial(4));
	cout << "Значение выражения: " << value;
}

int sum_of_digits(int number)
{
	int summ = 0;
	while (number > 0) {
		summ += number % 10;
		number /= 10;
	}
	return summ;
}
void task_7()
{
	int num1 = 0, num2 = 0;

	cout << "Введите первое натуральное число: ";
	cin >> num1;

	cout << "Введите второе натуральное число: ";
	cin >> num2;

	int summ1 = sum_of_digits(num1);
	int summ2 = sum_of_digits(num2);

	if (summ1 > summ2)
		cout << "Сумма цифр первого числа больше.";
	else if (summ2 > summ1)
		cout << "Сумма цифр второго числа больше.";
	else
		cout << "Суммы цифр обоих чисел равны.";
}

int count_matches(vector<int>& m, vector<int>& m3)
{
	int counter = 0;
	for (int num : m3)
		if (find(m.begin(), m.end(), num) != m.end())
			counter++;
	return counter;
}
void input_data(vector<int>& m)
{

	int size;
	cout << "Введите количество элементов в массиве: ";
	cin >> size;

	m.resize(size);
	cout << "Введите элементы массива:\n";
	for (int i = 0; i < size; i++)
		cin >> m[i];
}
void task_8()
{
	vector<int> m1;
	vector<int> m2;
	vector<int> m3;

	cout << "Ввод данных для m1:\n";
	input_data(m1);

	cout << "Ввод данных для m2:\n";
	input_data(m2);

	cout << "Ввод данных для m3:\n";
	input_data(m3);

	int count1 = count_matches(m1, m3);
	int count2 = count_matches(m2, m3);

	if (count1 > count2)
		cout << "В массиве m1 больше чисел, имеющихся в массиве m3.";
	else if (count2 > count1)
		cout << "В массиве m2 больше чисел, имеющихся в массиве m3.";
	else
		cout << "Количество чисел из m3, имеющихся в m1 и m2, одинаково.";
}

int nod(int a, int b)
{
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
int nok(int a, int b) {
	return a / nod(a, b) * b;
}
void task_9()
{
	int a = 0, b = 0;

	cout << "Введите два числа: ";
	cin >> a >> b;

	cout << "Наименьшее общее кратное чисел " << a << " и " << b << " равно " << nok(a, b);
}

void task_10()
{
	int a, b;

	cout << "Введите числитель и знаменатель дроби: ";
	cin >> a >> b;

	int divisor = nod(a, b);
	a /= divisor;
	b /= divisor;
	cout << "Сокращенная дробь: " << a << "/" << b;
}

void task_11()
{
	int a = 0, b = 0, c = 0;
	cout << "Введите три числа: ";
	cin >> a >> b >> c;

	int result = nod(nod(a, b), c);
	cout << "Наибольший общий делитель чисел " << a << ", " << b << " и " << c << " равен: " << result;
}

int count_n(string& sentence) {

	int counter = 0;
	for (char c : sentence)
		if (c == 'n' || c == 'N')
			counter++;
	return counter;
}
void task_12()
{
	string sentence1, sentence2;

	cout << "Введите первое предложение: ";
	cin.ignore();
	getline(cin, sentence1);

	cout << "Введите второе предложение: ";
	cin.ignore();
	getline(cin, sentence2);

	int total = count_n(sentence1) + count_n(sentence2);
	cout << "Общее количество букв 'н' в двух предложениях: " << total;
}

// Функция для проверки, является ли год високосным
bool is_leap_year(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
// Функция для подсчета количества дней в месяце
int days_in_month(int month, int year) {
	vector<int> days = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (is_leap_year(year)) {
		days[1] = 29;
	}
	return days[month - 1];
}
void task_13()
{
	int g = 0, m = 0, n = 0;
	cout << "Введите год, месяц и число: ";
	cin >> g >> m >> n;

	int prev_day = n - 1;
	int next_day = n + 1;
	int prev_month = m;
	int next_month = m;
	int prev_year = g;
	int next_year = g;

	if (prev_day == 0) {
		prev_month--;
		if (prev_month == 0) {
			prev_month = 12;
			prev_year--;
		}
		prev_day = days_in_month(prev_month, prev_year);
	}

	if (next_day > days_in_month(m, g)) {
		next_day = 1;
		next_month++;
		if (next_month == 13) {
			next_month = 1;
			next_year++;
		}
	}

	cout << "Дата предыдущего дня: " << prev_year << "-" << prev_month << "-" << prev_day << endl;
	cout << "Дата следующего дня: " << next_year << "-" << next_month << "-" << next_day;

}

void choose_task()
{
	int x = 0;

	cout << "Введите номер задания: ";
	cin >> x;

	if (x > 13 || x < 1)
	{
		cout << "Пожалуйста, введите корректный номер задания.\nВсего заданий 13.\nПовторите попытку.\n";
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
		case 4:
			system("cls");
			task_4();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 5:
			system("cls");
			task_5();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 6:
			system("cls");
			task_6();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 7:
			system("cls");
			task_7();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 8:
			system("cls");
			task_8();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 9:
			system("cls");
			task_9();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 10:
			system("cls");
			task_10();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 11:
			system("cls");
			task_11();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 12:
			system("cls");
			task_12();
			cout << endl;
			system("pause");
			system("cls");
			choose_task();
		case 13:
			system("cls");
			task_13();
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