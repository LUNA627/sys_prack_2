// prack2_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
#include <locale>
using namespace std;

class Employee {
	private : char name[32];
	private : int salary;

	public: double SataryUp(float procent, int salaryUp) {
		return procent * salaryUp;
	}

public: Employee(char _name[32], int _salary) {
	strncpy(name, _name, 32);
	salary = _salary;
}

public: void toString() {
	cout << name;
	cout << " - ";
	cout << salary;
}

};




int main()
{
	setlocale(LC_ALL, "Russian");

	
	char name[32];
	cout << "Введите имя: ";
	cin >> name;

	int salary;
	cout << "Введите зарплату: ";
	cin >> salary;

	if (salary < 0) {
		cout << "Зп не может быть меньше 0" << endl;
		return 0;
	}

	int totalSalary = 0;

	float procent;
	cout << "Введите процент к зп (не больше 20 %): ";
	cin >> procent;

	if (procent < 0 || procent > 20) {
		cout << "Процент к зп не может быть меньше 0 и больше 20" << endl;
		return 0;
	}

	Employee employee1(name, salary);

	employee1.toString();

	totalSalary = employee1.SataryUp(procent, salary);

	cout << "\nИтоговая зарплата: " << totalSalary << endl;


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
