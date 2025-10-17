// prack2_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>
#include <locale>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    // Тема: Многомерные массивы

    const int rows = 2;
    const int columns1 = 3;
    const int columns2 = 2;
    const int totalColumns = columns1 + columns2;

    int array1[rows][columns1];
    int array2[rows][columns2];
    int array12[rows][totalColumns];
    int i;
    int j;

    int sum = 0;

    srand(time(NULL));

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns1; j++) {
            array1[i][j] = rand() % 10;
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns2; j++) {
            array2[i][j] = rand() % 5;
            cout << array2[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns1; j++) {
            array12[i][j] = array1[i][j];
            sum += array1[i][j];
        }

        for (j = 0; j < columns2; j++) {
            array12[i][columns1 + j] = array2[i][j];
            sum += array2[i][j];
        }
    }


    for (i = 0; i < rows; i++) {
        for (j = 0; j < totalColumns; j++) {
            cout << array12[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Сумма всех элементов: " << sum << endl;

    return 0;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
