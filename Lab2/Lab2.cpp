// Lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#define N 5
void task1(float[N][N]);
void task2(float[N][N]);
void task3(float[N][N]);
void task4(float[N][N]);
void task5(float[N][N]);
void task6(float[N][N]);
void task7(float[N][N]);
void task8(float[N][N]);
void task9(float[N][N]);
void task10(float[N][N]);
void task11(float[N][N]);
void task12(float[N][N]);
void task13(float[N][N]);
void task14(float[N][N]);
void task15(float[N][N]);
void task16(float[N][N]);
void task17(float[N][N]);
void task18(float[N][N]);
void task19(float[N][N]);
void task20(float[N][N]);
void task21(float[N][N]);
void task22(float[N][N]);
void task23(float[N][N]);
void main()
{
    float m[N][N];
    int i, j;
    rand();
    // хаполнение элементов матрицы
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            m[i][j] = rand() / 10.;
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {

            std::cout << std::setw(8) << std::setprecision(5) << m[i][j];
        }
        std::cout << std::endl;
    }
    task1(m);
    task2(m);
    task3(m);
    task4(m);
    task5(m);
    task6(m);
    task7(m);
    task8(m);
    task9(m);
    task10(m);
    task11(m);
    task12(m);
    task13(m);
    task14(m);
    task15(m);
    task16(m);
    task17(m);
    task18(m);
    task19(m);
    task20(m);
    task21(m);
    task22(m);
    task23(m);

}
// нахождение минимума матрицы путем почленого сравнения
void task1(float m[N][N])
{
    float min = m[0][0];
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {

            if (m[i][j] < min)
            {
                min = m[i][j];
            }
        }
    }
    std::cout << "min elem: " << min << std::endl;
}
// нахождение максимума матрицы путем почленого сравнения
void task2(float m[N][N])
{
    float max = m[0][0];
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {

            if (m[i][j] > max)
            {
                max = m[i][j];
            }
        }
    }
    std::cout << "max elem: " << max << std::endl;
}
// нахождение максимума нижнетреугольной матрицы путем почленого сравнения
void task3(float m[N][N])
{
    float max = m[0][0];
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {

            if (m[i][j] > max && j <= i) // выбираются только члены чей стобец меньше или равен строке 
            {
                max = m[i][j];
            }
        }
    }
    std::cout << "max elem lower triangle: " << max << std::endl;
}
// нахождение максимума верхнетреугольной матрицы путем почленого сравнения
void task4(float m[N][N])
{
    float max = m[0][0];
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {

            if (m[i][j] > max && j >= i) // выбираются только члены чей стобец больше или равен строке 
            {
                max = m[i][j];
            }
        }
    }
    std::cout << "max elem upper triangle: " << max << std::endl;
}
// нахождение минимума нижнетреугольной матрицы путем почленого сравнения (аналогично такс3)
void task5(float m[N][N])
{
    float min = m[0][0];
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {

            if (m[i][j] < min && j <= i)
            {
                min = m[i][j];
            }
        }
    }
    std::cout << "min elem lower triangle: " << min << std::endl;
}
// нахождение минимума верхнетреугольной матрицы путем почленого сравнения (аналогично такс5)
void task6(float m[N][N])
{
    float min = m[0][0];
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {

            if (m[i][j] < min && j >= i)
            {
                min = m[i][j];
            }
        }
    }
    std::cout << "min elem upper triangle: " << min << std::endl;
}
// нахождение минимума главной диагонали матрицы путем почленого сравнения 
void task7(float m[N][N])
{
    float min = m[0][0];
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {

            if (m[i][j] < min && j == i) // выбираются только те члены чья строка равна столбцу
            {
                min = m[i][j];
            }
        }
    }
    std::cout << "min elem main diagonal: " << min << std::endl;
}
// нахождение максимума главной диагонали матрицы путем почленого сравнения 
void task8(float m[N][N])
{
    float max = m[0][0];
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {

            if (m[i][j] > max && j == i) // выбираются только те члены чья строка равна столбцу
            {
                max = m[i][j];
            }
        }
    }
    std::cout << "max elem main diagonal: " << max << std::endl;
}

// нахождение минимума второстепенной диагонали матрицы путем почленого сравнения 
void task9(float m[N][N])
{
    float min = m[0][N-1];
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = N-1; j >=0; j--)
        {

            if (m[i][j] < min && j == N - 1 - i) // идет в обратно порядке столбцов 3->2->1
            {
                min = m[i][j];
            }
        }
    }
    std::cout << "min elem minor diagonal: " << min << std::endl;
}
// нахождение максимума второстепенной диагонали матрицы путем почленого сравнения 
void task10(float m[N][N])
{
    float max = m[0][N - 1];
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = N - 1; j >= 0; j--)
        {

            if (m[i][j] > max && j == N - 1 - i)// идет в обратно порядке столбцов 3->2->1
            {
                max = m[i][j];
            }
        }
    }
    std::cout << "max elem minor diagonal: " << max << std::endl;
}
// нахождение среденеарифметического значения матрицы
void task11(float m[N][N])
{
    float average = 0;
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = N - 1; j >= 0; j--)
        {
            average += m[i][j]; // суммируются все элементы
        }
    }
    std::cout << "average: " << average / N / N << std::endl; // среднеарифметическое делится на квадрат строк (для квадратной матрицы)
}

// нахождение среденеарифметического значения нижнетреугольной матрицы принцип выбора членов аналогично нахождения максимума или минимума
void task12(float m[N][N])
{
    float average = 0;
    int i, j, k = 0;
    for (i = 0; i < N; i++)
    {
        for (j = N - 1; j >= 0; j--)
        {

            if (j <= i)
            {
                k++;// введется отдельно количство членов
                average += m[i][j];
            }
        }
    }
    std::cout << "average lower triangle: " << average / k << std::endl; 
}
// нахождение среденеарифметического значения верхнетреугольной матрицы принцип выбора членов аналогично нахождения максимума или минимума
void task13(float m[N][N])
{
    float average = 0;
    int i, j, k = 0;
    for (i = 0; i < N; i++)
    {
        for (j = N - 1; j >= 0; j--)
        {

            if (j >= i)
            {
                k++;// введется отдельно количство членов
                average += m[i][j];
            }
        }
    }
    std::cout << "average upper triangle: " << average / k << std::endl;
}
// нахождение суммы строк матрицы
void task14(float m[N][N])
{
    float sum = 0;
    int i, j, k = 0;
    for (i = 0; i < N; i++)
    {
        sum = 0;
        for (j = 0; j < N; j++) // на каждой итерации i суммируются все значения в строке
        {
            sum += m[i][j];
        }
        std::cout << "row: " << i << " sum: " << sum << std::endl;
    }
}
// нахождение суммы столбцов матрицы
void task15(float m[N][N])
{
    float sum = 0;
    int i, j, k = 0;
    for (i = 0; i < N; i++)
    {
        sum = 0;
        for (j = 0; j < N; j++) // на каждой итерации i суммируются все значения в столбце
        {
            sum += m[j][i];
        }
        std::cout << "column: " << i << " sum: " << sum << std::endl;
    }
}
// нахождение минимума строк матрицы
void task16(float m[N][N])
{
    float min = 0;
    int i = 0, j = 0, k = 0;
    for (i = 0; i < N; i++)
    {
        min = FLT_MAX; // на первой итерации присваивается максимум знаечния double
        for (j = 0; j < N; j++)
        {
            if(m[i][j] < min)  min = m[i][j]; // нахождение минимума строки
        }
        std::cout << "row: " << i << " min: " << min << std::endl; // в конце итерации выводится минимум
    }
}
// нахождение минимума стобцов матрицы
void task17(float m[N][N])
{
    float min = 0;
    int i = 0, j = 0, k = 0;
    for (i = 0; i < N; i++)
    {
        min = FLT_MAX;// на первой итерации присваивается максимум знаечния double
        for (j = 0; j < N; j++)
        {
            if (m[j][i] < min)  min = m[j][i];// нахождение минимума столбца
        }
        std::cout << "column: " << i << " min: " << min << std::endl;// в конце итерации выводится минимум
    }
}
// нахождение максимума строк матрицы (аналогично нахождение минимума)
void task18(float m[N][N])
{
    float max = 0;
    int i = 0, j = 0, k = 0;
    for (i = 0; i < N; i++)
    {
        max = FLT_MIN;
        for (j = 0; j < N; j++)
        {
            if (m[i][j] > max)  max = m[i][j];
        }
        std::cout << "row: " << i << " max: " << max << std::endl;
    }
}
// нахождение максимума стобцов матрицы (аналогично нахождение минимума)
void task19(float m[N][N])
{
    float max = 0;
    int i = 0, j = 0, k = 0;
    for (i = 0; i < N; i++)
    {
        max = FLT_MIN;
        for (j = 0; j < N; j++)
        {
            if (m[j][i] > max)  max = m[j][i];
        }
        std::cout << "column: " << i << " max: " << max << std::endl;
    }
}
// нахождение среднеарифметичского значения строк матрицы
void task20(float m[N][N])
{
    float average = 0;
    int i = 0, j = 0, k = 0;
    for (i = 0; i < N; i++)
    {
        average = 0;
        for (j = 0; j < N; j++)
        {
            average += m[i][j]; // расчет суммы строки на каждой итерации
        }
        std::cout << "row: " << i << " average: " << average / N << std::endl; // в выводе деление на количество столбцов
    }
}
// нахождение среднеарифметичского значения столбцов матрицы
void task21(float m[N][N])
{
    float average = 0;
    int i = 0, j = 0, k = 0;
    for (i = 0; i < N; i++)
    {
        average = 0;
        for (j = 0; j < N; j++)
        {
            average += m[j][i]; // расчет суммы стобца на каждой итерации
        }
        std::cout << "column: " << i << " average: " << average / N << std::endl;// в выводе деление на количество строк
    }
}
// расчет суммы нижне- и верхнетреугольных матриц (выбор анлогичен поимку минимума или максимума) 
void task22(float m[N][N])
{
    float sum = 0;
    int i = 0, j = 0, k = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if(i == j)
                sum += m[j][i];
            sum += m[j][i];
        }
    }
    std::cout << "sum: " << sum  << std::endl; // значение больше чем сумма элементов матрицы так как значения на  главной диагонали повторяются
}
//нахождение значения наиболее близкое к среденеарифметическому
void task23(float m[N][N])
{
    float average = 0;
    float delta = FLT_MAX;
    float elem = 0;
    int i, j;
    // расчет среднеарифметиского
    for (i = 0; i < N; i++)
    {
        for (j = N - 1; j >= 0; j--)
        {
            average += m[i][j];
        }
    }
    average = average / N / N;
    // поиск наоболее близкого значения путем нахождения минимума дельты  где дельта = m[i][j] - average
    for (i = 0; i < N; i++)
    {
        for (j = N - 1; j >= 0; j--)
        {
            if (abs(m[i][j] - average) < delta)
                elem = m[i][j];
        }
    }
    std::cout << "elem: " << elem << std::endl;
}
