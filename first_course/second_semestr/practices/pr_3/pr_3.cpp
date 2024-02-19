// Вариант 9

using namespace std;

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

void task_1()
{
	vector<char> vec(10);
	srand(time(0));

	for (char& c : vec)
		c = '0' + rand() % 10;

	cout << "Вектор чисел: ";
	for (char num : vec)
		cout << num << " ";

	cout << endl;

	cout << "Четные цифры в векторе: ";
	for (char num : vec) {
		int digit = num - '0';

		if (digit % 2 == 0)
			std::cout << num << " ";
	}
}


// Функция для проверки, является ли символ гласной буквой
bool isVowel(char c) {
	// Приводим символ к нижнему регистру
	c = tolower(c);
	// Проверяем, является ли символ одной из гласных букв
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Функция для вывода гласных букв из массива символов, на который указывает указатель
void printVowels(char* ptr, int size) {
	cout << "Гласные буквы в массиве: ";
	for (int i = 0; i < size; ++i) {
		if (isVowel(*ptr)) { // Проверяем, является ли текущий символ гласной буквой
			cout << *ptr << " "; // Если да, выводим его
		}
		ptr++; // Переходим к следующему символу в массиве
	}
}
void task_2()
{
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char* ptr = arr; // Указатель на начало массива

	printVowels(ptr, sizeof(arr) / sizeof(arr[0])); // Вызываем функцию для вывода гласных букв

}

void choose_task()
{
	int x = 0;

	cout << "Введите номер задания: ";
	cin >> x;

	if (x > 2 || x < 1)
	{
		cout << "Пожалуйста, введите корректный номер задания.\nВсего заданий: 2.\nПовторите попытку.\n";
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
		}
	}
}

int main()
{
	setlocale(LC_ALL, "russian");

	choose_task();
}