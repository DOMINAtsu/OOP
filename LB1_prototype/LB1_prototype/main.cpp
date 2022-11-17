#include <iostream>
using namespace std;

#include "function.h"
#include  "Header.h"
#include "Number.h"

void LB1();
void LB2();
void LB3();

int main()
{
	bool isRunning = true;
	int choice = 0;
	do
	{
	system("cls");
	cout << "1. Lab1" << endl;
	cout << "2. Lab2" << endl;
	cout << "3. Lab3" << endl;
	cout << "4. Lab4" << endl;
	cout << "5. Lab5" << endl;
	cout << "6. Lab6" << endl;
	cout << "7. Lab7" << endl;
	cout << "8. Lab8" << endl;
	cout << endl;
	cout << "0. Exit" << endl;
	cout << "Your choice: ";
	cin >> choice;

	switch (choice)
	{
	case 0:
		isRunning = false;
		break;
	case 1:
		LB1();
		break;
	case 2:
		LB2();
		break;
	case 3:
		LB3();
		break;
	}
} while (isRunning);

return 0;
}

void LB1()
{
	system("cls");
	Object obj("Boll", "Green", 5, 5);
	obj.Output();
	cout << endl;
	obj.Input();
	cout << endl;
	obj.Output();
	cout << endl;
	obj.setName("X");
	cout << "Name: " << obj.getName() << endl;
	system("pause");
}

void LB2()
{
	system("cls");
	Object obj("Object", "White", 55, 33);
	Sphere sphere("Sphere", "Green", 5, 55, 25);
	obj.Output();
	cout << endl;
	sphere.Output();
	sphere.SetRadius(999);
	cout << endl;
	sphere.Output();
	system("pause");
}

void LB3()
{
	system("cls");
	Number num1 = 5;
	Number num2 = 10;

	cout << "num1 + num2 = " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << "num1 - num2 = " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	cout << "num1 * num2 = " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	cout << "num1 / num2 = " << num1 << " / " << num2 << " = " << num1 / num2 << endl;

	cout << endl;

	cout << "num1++ = " << num1++ << endl;
	cout << "num2-- = " << num2-- << endl;

	cout << endl;

	cout << "++num1 = " << ++num1 << endl;
	cout << "--num2 = " << --num2 << endl;

	cout << endl;

	cout << "(num1 == num2) ==> (" << num1 << " == " << num2 << ") ==> " << (num1 == num2) << endl;
	cout << "(num1 >= num2) ==> (" << num1 << " >= " << num2 << ") ==> " << (num1 >= num2) << endl;
	cout << "(num1 <= num2) ==> (" << num1 << " <= " << num2 << ") ==> " << (num1 <= num2) << endl;

	cout << endl;

	Number num3 = 0;
	cout << "Num3 = " << num3 << endl;
	num3 = 5;
	cout << "(5) Num3 = " << num3 << endl;

	system("pause");
}