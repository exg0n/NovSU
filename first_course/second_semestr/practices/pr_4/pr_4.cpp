// Вариант 9

using namespace std;

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void task_1()
{
	ifstream file("qwe.txt"); // Открываем файл для чтения

	if (file.is_open()) { // Проверяем успешно ли открыт файл
		string word;
		int short_word_count = 0;

		while (file >> word)
		{
			// Убираем из слов знаки пунктуации чтобы определить длину слова
			word.erase(remove_if(word.begin(), word.end(), ispunct), word.end());

			// Проверяем длину слова
			if (word.length() < 5) {
				short_word_count++;
			}
		}

		cout << "Кол-во котротких слов (<5 символов): " << short_word_count << endl;

		file.close(); // Закрываем файл после чтения
	}
	else {
		cerr << "Неудалось открыть файл." << endl; // Вывод ошибки
	}
}

void task_2()
{
	ifstream file("asd.txt");
	int counter = 0;
	string line;

	if (file.is_open())
	{
		while (getline(file, line))
		{
			if (line[line.size() - 1] == 'z')
				counter++;
		}	
		file.close();
		cout << "Кол-во строк оканчивающиеся на 'z': " << counter;
	}
	else
		cerr << "Файл не удалось прочитать.";
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