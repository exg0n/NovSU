// Вариант 9

using namespace std;

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");

    ifstream input_file("qwe.txt");
    if (!input_file)
        cerr << "Не удалось открыть текстовый файл";

    ofstream output_file("qwe.bin", ios::binary);
    if (!output_file)
        cerr << "Не удалось открыть бинарный файл";

    string line;
    while (getline(input_file, line)) {
        // Записываем предложение в бинарный файл
        output_file.write(line.c_str(), line.size());
        // Добавляем разделитель между предложениями
        char delimiter = '.';
        output_file.write(&delimiter, sizeof(char));
    }

    input_file.close();
    output_file.close();

    // Открываем бинарный файл для чтения и выводим его содержимое на консоль
    ifstream binary_file("qwe.bin", ios::binary);
    if (!binary_file)
        cerr << "Не удалось открыть бинарный файл";

    cout << "Содержимое бинарного файла: " << endl;
    char character;
    while (binary_file.get(character))
        cout << character;

    // Закрываем бинарный файл
    binary_file.close();
}