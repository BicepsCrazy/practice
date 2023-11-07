// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    int num1;
    int num2;
    int num3;
    int num4;
    cout << "введите первое число" << endl;
    cin >> num1;
    cout << "введите второе число" << endl;
    cin >> num2;

    cout << num1 << "*" << num2 << "=?";
    num3 = num1 * num2;
    cin >> num4;
    if (num4 == num3) {
        cout << "это правильный ответ" << endl;


    }
    else {
        cout << "это неправильный ответ =( " << endl;
        cout << "правильный ответ: " << num1 * num2;
        
    }
}