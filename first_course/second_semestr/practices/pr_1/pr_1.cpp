// Вариант 9

using namespace std;

#include <iostream>
#include <string>
#include <sstream>

void task_1()
{
	string str;
	int count_a = 0, count_b = 0, count_c = 0;

	cout << "Введите строку: ";
	cin.ignore();
	getline(cin, str);

	for (char element : str)
	{
		if (element == 'a')
			count_a++;
		else if (element == 'b')
			count_b++;
		else if (element == 'c')
			count_c++;
	}
	cout << "Колл-во a: " << count_a << endl;
	cout << "Колл-во b: " << count_b << endl;
	cout << "Колл-во c: " << count_c;
}

void task_2()
{
	string sequence, word, last_word;

	cout << "Введите последовательность слов, разделенных пробелами и заканчивающихся точкой: ";
	cin.ignore();
	getline(cin, sequence);

	// Создаем поток строк для удобства чтения слов
	istringstream iss(sequence);

	while (iss >> word) {
		// Если это не последнее слово, выводим его без первой буквы
		if (!last_word.empty()) {
			cout << last_word << " ";
		}
		// Обновляем последнее слово
		last_word = word;
	}
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
