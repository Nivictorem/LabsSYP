// Lab5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void task1();
void task2();
void task3();
void task4(char* argv);
void main(int args, char** argv)
{
	task4(argv[1]);
	char ch, name[50];
	FILE* in;
	printf("Введите имя файла для просмотра: ");
	scanf("%s", name);
	if ((in = fopen(name, "r")) == NULL)
		printf("Файл %s не открыт", name);
	else
	{
		while (!feof(in))
		{
			ch = getc(in);
			putchar(ch);
		}
	}
}
void task1()
{
	char ch, name[50];
	FILE* in;
	// для вывода на русском используется функция setlocale
	setlocale(LC_ALL, "Russian");
	printf("Введите имя файла для просмотра: ");
	// задаем путь файла
	scanf_s("%s", name,50);
	// открываем файл на чтение
	fopen_s(&in, name, "r");
	if (in == NULL)
		printf("Файл %s не открыт", name);
	else
	{
		while (!feof(in))
		{
			// получание символа сразу передается вывод таким образом пропущен ненужный переход
			putchar(getc(in));
		}
	}
}
// функция определения пустых символов в тексте
void task2()
{
	char ch, name[50];
	int i = 0;
	FILE* in;
	setlocale(LC_ALL, "Russian");
	printf("Введите имя файла для просмотра: ");
	scanf_s("%s", name, 50);
	fopen_s(&in, name, "r");
	if (in == NULL)
		printf("Файл %s не открыт", name);
	else
	{
		while (!feof(in))
		{
			ch = getc(in);
			if (ch == ' ' || ch == '\n' || ch == '\a' || ch == 'r') // если присутсвуют пустые символы то индекс увеличивается
				i++;
			putchar(ch);
		}
	}
	// вывод пустых символов
	std::cout << '\n' << i;
}
// определение первого вхождение слова в тексте
void task3()
{

	char ch, name[50];
	char* str1;
	char str2[] = "d"; // задаем искомое слово
	int i = 0;
	FILE* in, *out; // определяем файлы вводы и вывода
	setlocale(LC_ALL, "Russian");
	printf("Введите имя файла для просмотра: ");
	scanf_s("%s", name, 50);
	fopen_s(&in, name, "r");
	if (in == NULL)
		printf("Файл %s не открыт", name);
	else
	{
		while (!feof(in))
		{
			getc(in);
			i++; // определяем количество символов в входном файле
		}
		// смещаем указатель вначало
		rewind(in);
		// выделяем память под текст входного файлы
		str1 = (char*)calloc(i, sizeof(char*));
		// считываем весь текст
		fread(str1, 1, i - 1, in);
		// задаем строку с текстом файлы
		std::string text{ str1 };
		// используем встроеную фанкцию find
		std::cout <<"1 вхождение: " << text.find(str2) << std::endl;
		// открываем файл вывода на запись
		fopen_s(&out, R"(C:\Users\Public\out.txt)", "w");
		// выводим первое вхождение символа d в файл вывода
		fputs("1 вхождение: ", out);
		char buff[20];
		int a = text.find(str2);
		_itoa_s(a, buff, 10);
		fputs(buff, out);
		// закрываем потоки чтения и записи
		fclose(in);
		fclose(out);
	}
}
// шифрование с функцие шиврования c = c^i где с - символ входного файла, i элемент строки переданного через командную строку
void task4(char* argv)
{
	char ch, name[50];
	char* str1, *str2;
	int i = 0;
	int lenCommandLines = strlen(argv);
	int lenSymbols = 0;
	FILE* in, * out;
	setlocale(LC_ALL, "Russian");
	printf("Введите имя файла для просмотра: ");
	scanf_s("%s", name, 50);
	fopen_s(&in, name, "r");
	if (in == NULL)
		printf("Файл %s не открыт", name);
	else
	{
		while (!feof(in))
		{
			getc(in);
			i++; // определяем количество символов в входном файле
		}
		rewind(in);
		str1 = (char*)calloc(i, sizeof(char*));
		str2 = (char*)calloc(i, sizeof(char*));
		// считываем весь текст
		fread(str1, 1, i - 1, in);
		fopen_s(&out, R"(C:\Users\Public\out.txt)", "w");
		lenSymbols = i;
		for (i = 0; i < lenSymbols; i++)
		{
			int index = (i) % lenCommandLines; // определяем индекс элемента строки шифрования
			int commandint = (int)(argv[index] - '0');  // получаем степень
			int symb = str1[i];
			int intNewsymb = pow(symb, commandint); // производим возведение в степень
			char afterKey = (char)(intNewsymb); // символ после шифрования
			str2[i] = afterKey; // присваиваем символ после шифрования i элементу масива хранящему символы после шифрования 
		}
		for (i = 0; i < lenSymbols; i++)
		{
			// производим дешифрование по аналогичной схеме указанной выше
			int index = (i) % lenCommandLines; 
			int commandint = (int)(argv[index] - '0');
			int symb = str2[i];
			int intNewsymb = pow(symb, 1.0 / commandint);
			char afterKey = (char)(intNewsymb);
			str1[i] = afterKey;
		}
		// результат после дешифрования хранится в файле вывода
		fputs(str2, out);
		fclose(in);
		fclose(out);
	}
}