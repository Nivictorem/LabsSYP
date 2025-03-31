// Labs.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.ооооо

#include <iostream>
#include <cstdint>
#define PR(x) printf("x=%u, x=%d, &x=%u\n", x, *x, &x)
void task1();
void task2();
void task21();
void task22();
void task3();
int main()
{
    task1();
    task2();
    task21();
    task22();
    task3();
}
// возведение числа x (вводится пользователем) в степени от 0  до 9
void task1()
{
    std::cout << "Task 1:" << std::endl;
    int i, k, j;
    int power(int, int);
    std::cout << "x = ";
    std::cin >> j;
    for (i = 0; i < 10; i++)
    {
        k = power(j, i);
        std::cout << "i = " << i << ", k = " << k << std::endl;
    }
}
//функция возведения числа в степень (реализована умножем числа на самого себя)
int power(int x, int n)
{
    int i, p = 1;
    for (i = 0; i < n; i++) p *= x;
    return p;
}
void task2()
{
    std::cout << "Task 2:" << std::endl;
    int mas[] = { 100, 200, 300 };
    int* ptr1, * ptr2; // иниицализация укзателей
    ptr1 = mas; // указывает на первый элемент массива
    ptr2 = &mas[2]; // указывает на трети элемент массива
    PR(ptr1);
    ptr1++; // указывает на следующий эдемент массива так как была прибавлена 1
    PR(ptr1);
    PR(ptr2);
    ++ptr2; // указатель на следующий блок памяти (не указывает на элемент массива)
    printf("ptr2 - ptr1 = %u\n", ptr2 - ptr1); // результат 2 так как это разница между указателями
}
// аналогично task2
void task21()
{
    std::cout << "Task 2.1:" << std::endl;
    float mas[] = { 100, 200, 300 };
    float* ptr1, * ptr2;
    ptr1 = mas;
    ptr2 = &mas[2];
    PR(ptr1);
    ptr1++;
    PR(ptr1);
    PR(ptr2);
    ++ptr2;
    printf("ptr2 - ptr1 = %u\n", ptr2 - ptr1);
}
// аналогично task2
void task22()
{
    std::cout << "Task 2.2:" << std::endl;
    double mas[] = { 100, 200, 300 };
    double* ptr1, * ptr2;
    ptr1 = mas;
    ptr2 = &mas[2];
    PR(ptr1);
    ptr1++;
    PR(ptr1);
    PR(ptr2);
    ++ptr2;
    printf("ptr2 - ptr1 = %u\n", ptr2 - ptr1);
}
// 3 задание с обменом
void task3(void)
{
    std::cout << "Task 3:" << std::endl;
    int a = 2, b = 5;
    void obmen1(int, int);
    void obmen2(int*, int*);
    void obmen3(int&, int&);
    std::cout << "before changing: a= " << a << ", b = " << b << std::endl;
    obmen1(a, b);
    std::cout << "before changing1: a= " << a << ", b = " << b << std::endl;
    obmen2(&a, &b);
    std::cout << "before changing2: a= " << a << ", b = " << b << std::endl;
    obmen3(a, b);
    std::cout << "before changing3: a= " << a << ", b = " << b << std::endl;
}
// обмен по значению (невозможен так как в метод копируются данные)
void obmen1(int a, int b)
{
    int k;
    k = a;
    a = b;
    b = k;
    
}
// обмен через значения указателей
void obmen2(int* a, int* b)
{
    int k;
    k = *b;
    *b = *a;
    *a = k;
}
// обмен через значения ссылок
void obmen3(int& a, int& b)
{
    int k;
    k = b;
    b = a;
    a = k;
}