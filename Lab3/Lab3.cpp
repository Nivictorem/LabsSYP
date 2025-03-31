// Lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <conio.h> 
#include <iostream>
#define N 13
void task1(int[N]);
void bubleSort(int[N]);
int Divide(int[N], int left, int right, int midle);
void QuikSort(int[N], int left, int right);
void QuikSortReverse(int[N], int left, int right);
int main()
{
    int mass[] = { 2,5,-8,1,-4,6,3,-5,-9,13,0,4,9 };
    int n = N;
    std::cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << mass[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Sort by minimum: " << std::endl;
    task1(mass);
    std::cout << "Sort by buble sort: " << std::endl;
    bubleSort(mass);
    std::cout << "Sort by quik sort: " << std::endl;
    QuikSort(mass, 0, 12);
    std::cout << "Sort by quik sort reverse: " << std::endl;
    QuikSortReverse(mass, 0, 12);
    for (int i = 0; i < n; i++)
    {
        std::cout << mass[i] << " ";
    }
    std::cout << std::endl;
}
// Сортировка методом мин-макс 
/*
* Алгоритм соритировки реализован следующим образом: 
* на каждой итерации находится минимум и подсталвяется на следующее после предыдущего минимума место
* то есть на первой итерации подставляется на 0 место, затем на первое и т.д.
*/
void task1(int mass[N])
{
    int imin, imax;
    int n = N;
    int i;
    imin = i = 0;
    imax = i = 0;
    for (i = 0; i < n - 1; i++)
    {
        imin = i;
        for (int j = i+1; j < n; j++)
        {
            if (mass[j] < mass[imin]) imin = j;
        }
        int t = mass[i];
        mass[i] = mass[imin];
        mass[imin] = t;
    }
}
// Сортировка пузырьком
/*
* Алгоритм соритировки реализован следующим образом:
* на каждой итерации сравниваются ээлементы если следущий элемент больше то они меняются местами
* соотвественно последней итерации второго цикла самый большой элемент будет в конце списка
* и т.д.
*/
void bubleSort(int mass[N])
{
    int n = N;
    int i;    
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (mass[j] > mass[j + 1])
            {
                int t = mass[j];
                mass[j] = mass[j+1];
                mass[j+1] = t;
            }
        }
    }    

}
// Быстрая сортировка
/*
* Алгоритм соритировки реализован следующим образом:
* алгоритм с рекурсиейна каждом входе определяется индекс центрального элемента
* затем в метод Divide элементы в массиве распредялются так, чтобы справва от центрального элемента были элементы больше него, а слева элементы меньше него
* затем в метод QuikSort передаются индексы границ справа и слева определяя следующие области потребные в сортировки
* условие выхода:  правая и левая граница равны
*/
void QuikSort(int mass[N], int left, int right)
{
    if (left >= right) return;
    int n = N;
    int i, middle1;
    int midle = left + (right - left) / 2;
    middle1 = midle;
    midle = Divide(mass, left, right, midle);
    QuikSort(mass, left, midle - 1);
    QuikSort(mass, midle + 1, right);
}
int Divide(int mass[N], int left, int right, int midle)
{
    int n = N;
    int i, j, midleIndex;
    if (left >= right) return left;
    i = left;
    j = right;
    while (true)
    {

        if (i > right)
            return midle;
        if (i >= midle)
        {
            if (mass[i] < mass[midle])
            {
                int t = mass[i];
                mass[i] = mass[midle];
                mass[midle] = t;
                midle = i;
            }
            i++;
        }
        else
        {
            if (mass[i] > mass[midle])
            {
                int t = mass[j];
                mass[j] = mass[i];
                mass[i] = t;
                if (j == midle)
                {
                    midle = i;
                }
                j--;
            }
            else
            {
                i++;
            }
        }

    }

    return midleIndex;
}
// обратная быстрая сортировка
/*
* вызывается быстрая сортировка и элементы сортируются
* затем переприсваиваются в обратном порядке
*/
void QuikSortReverse(int mass[N], int left, int right)
{
    QuikSort(mass, left, right);
    int middle = left + (right - left) / 2;
    for (int i = left; i <= middle; i++)
    {
        int t = mass[i];
        mass[i] = mass[right - i];
        mass[right - i] = t;
    }

}