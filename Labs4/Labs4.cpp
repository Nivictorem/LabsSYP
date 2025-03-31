// Labs4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string.h>
int main(void)
{
    void task1(), task2(), task3(), task4();
    task4();
}
// реализация первого задания где требуется реализовать алгоритм поиска длины, сравнения и объединения строк несколькими методами
void task1()
{
    char str1[] = "qwerty", str2[] = "1234567890";
    int dlina1(char*), dlina2(char*), dlina3(char*);
    void copy(char*, char*), compare(char*, char*), concat(char*, char*);
    std::cout << "lenght str1: "<< dlina1(str1) << 
        " lenght str2: " << dlina1(str2) << std::endl;
    std::cout << "lenght str1: " << dlina2(str1) <<
        " lenght str2: " << dlina2(str2) << std::endl;
    std::cout << "lenght str1: " << dlina3(str1) <<
        " lenght str2: " << dlina3(str2) << std::endl;
    std::cout << "result of compare str1: " << str1 <<
        " str2: " << str2 << std::endl;
    compare(str1, str2);
    std::cout << "result of concat str1: " << str1 <<
        " str2: " << str2 << std::endl;
    concat(str1, str2);
    std::cout << "result of copy str1: " << str1 <<
        " str2: " << str2 << std::endl;
    copy(str1, str2);
}
void task2()
{
    //char str1[] = "qwerty", str2[] = "1234567890";
    char* str1, * str2;
    // используется выделение динамической памяти под массивы на два элемента
    str1 = (char*)malloc(2 * sizeof(char*));
    str2 = (char*)malloc(2 * sizeof(char*));
    // элементам присваиваются значения
    str1[0] = 'a';
    str1[1] = 'b';
    str2[0] = '1';
    str2[1] = '2';
    void copy(char*, char*), compare(char*, char*), concat(char*, char*);
    int dlina1(char*), dlina2(char*), dlina3(char*);
    std::cout << "lenght str1: " << dlina1(str1) <<
        " lenght str2: " << dlina1(str2) << std::endl;
    std::cout << "lenght str1: " << dlina2(str1) <<
        " lenght str2: " << dlina2(str2) << std::endl;
    std::cout << "lenght str1: " << dlina3(str1) <<
        " lenght str2: " << dlina3(str2) << std::endl;
    std::cout << "result of compare str1: " << str1 <<
        " str2: " << str2 << std::endl;
    compare(str1, str2);
    std::cout << "result of concat str1: " << str1 <<
        " str2: " << str2 << std::endl;
    concat(str1, str2);
    std::cout << "result of copy str1: " << str1 <<
        " str2: " << str2 << std::endl;
    copy(str1, str2);
    free(str1);
    free(str2);
}
void task3()
{
    //char str1[] = "qwerty", str2[] = "1234567890";
    char* str1, * str2;
    // используется выделение динамической памяти под массивы на два элемента
    str1 = (char*)calloc(2, sizeof(char*));
    str2 = (char*)calloc(2, sizeof(char*));
    // элементам присваиваются значения
    str1[0] = 'a';
    str1[1] = 'b';
    str2[0] = '1';
    str2[1] = '2';
    void copy(char*, char*), compare(char*, char*), concat(char*, char*);
    int dlina1(char*), dlina2(char*), dlina3(char*);
    std::cout << "lenght str1: " << dlina1(str1) <<
        " lenght str2: " << dlina1(str2) << std::endl;
    std::cout << "lenght str1: " << dlina2(str1) <<
        " lenght str2: " << dlina2(str2) << std::endl;
    std::cout << "lenght str1: " << dlina3(str1) <<
        " lenght str2: " << dlina3(str2) << std::endl;
    std::cout << "result of compare str1: " << str1 <<
        " str2: " << str2 << std::endl;
    compare(str1, str2);
    std::cout << "result of concat str1: " << str1 <<
        " str2: " << str2 << std::endl;
    concat(str1, str2);
    std::cout << "result of copy str1: " << str1 <<
        " str2: " << str2 << std::endl;
    copy(str1, str2);
    free(str1);
    free(str2);
}
void task4()
{
    //char str1[] = "qwerty", str2[] = "1234567890";
    char** arrstr;
    char* str1, * str2;
    // используется выделение динамической памяти под массив хранящий ссылки на два массива
    arrstr = (char**)calloc(2, sizeof(char*));
    // используется выделение динамической памяти под массивы на два элемента
    str1 = (char*)calloc(2, sizeof(char*));
    str2 = (char*)calloc(2, sizeof(char*));
    str1[0] = 'a';
    str1[1] = 'b';
    str2[0] = '1';
    str2[1] = '2';
    arrstr[0] = str1;
    arrstr[1] = str2;
    void copy(char*, char*), compare(char*, char*), concat(char*, char*);
    int dlina1(char*), dlina2(char*), dlina3(char*);
    std::cout << "lenght str1: " << dlina1(arrstr[0]) <<
        " lenght str2: " << dlina1(arrstr[1]) << std::endl;
    std::cout << "lenght str1: " << dlina2(arrstr[0]) <<
        " lenght str2: " << dlina2(arrstr[1]) << std::endl;
    std::cout << "lenght str1: " << dlina3(arrstr[0]) <<
        " lenght str2: " << dlina3(arrstr[1]) << std::endl;
    std::cout << "result of compare str1: " << arrstr[0] <<
        " str2: " << arrstr[1] << std::endl;
    compare(arrstr[0], arrstr[1]);
    std::cout << "result of concat str1: " << arrstr[0] <<
        " str2: " << arrstr[1] << std::endl;
    concat(arrstr[0], arrstr[1]);
    std::cout << "result of copy str1: " << arrstr[0] <<
        " str2: " << arrstr[1] << std::endl;
    copy(arrstr[0], arrstr[1]);
    free(str1);
    free(str2);
    free(arrstr);
}
// поиск длины функцией strlen
int dlina1(char* str)
{
    return strlen(str);
}
// поиск длины просто перебором количесства элементов
int dlina2(char* str)
{
    int i = 0;
    for(i; str[i] != '\0'; i++)
    {

    }
    return i;
}
// поиск длины определением длины массива в байта деленная на количество байт в элементе с учетом завершающего элемента
int dlina3(char* str)
{
    return sizeof(str) / sizeof(str[0]) - 1;
}
// Копиравние реализовано переприсваиванием ссылки на массив
void copy(char* str1, char* str2)
{
    str2 = str1;
}

// Сравнение происходит следующим образом если один из элементов первого массива больше чем второй то считается что первая строка больше также и в обратную
// если все элементы равны то сравнивается длина строк
void compare(char* str1, char* str2)
{
    int i = 0, j = 0, k = 0;
    for (i; str1[i] != '\0'; i++)
    {

    }
    for (j; str2[j] != '\0'; j++)
    {

    }
    while (str1[k] != '\0' || str2[k] != '\0')
    {
        if (str1[k] > str2[k])
        {
            std::cout << "str1 > str2" << std::endl;
            return;
        }
        else if(str1[k] < str2[k])
        {
            std::cout << "str1 < str2" << std::endl;
            return;
        }
        k++;
    }
    if (i > j)
    {
        std::cout << "str1 > str2" << std::endl;
    }
    else 
    {
        std::cout << "str1 == str2" << std::endl;
    }
}
// присоединение строки производится последовательным перечислением первой, а затем второй строки
void concat(char* str1, char* str2)
{
    int i = 0, j = 0;
    while (true)
    {
        if (str1[i] == '\0')
        {
            if (str2[j] != '\0')
            {
                std::cout << str2[j];
                j++;
            }
            else
            {
                std::cout << std::endl;
                return;
            }
        }
        else
        {
            std::cout << str1[i];
            i++;
        }
    }
}


