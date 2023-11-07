// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Ru");
    const int size = 10;
        int arr[size];
        int sum = 0;

       cout << "Введите элементы массива:" << endl;
        for (int i = 0; i < size; i++) {
           cin >> arr[i];
        }

        for (int i = 0; i < size; i++) {
            if (arr[i] % 2 != 0) {
                sum += arr[i];
            }       
        }

       cout << "Сумма нечетных чисел в массиве: " << sum << endl;

        return 0;
    }