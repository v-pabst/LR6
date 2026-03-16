// LR6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int n;
    int i = 0;
    int kol = 0;
    int len = 0;
    setlocale(LC_ALL, "");
    char str[100];
    cout << "Введите строку: ";
    gets_s(str);
    cout << "n = ";
    cin >> n;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            len++;
        }
        else {
            if (len > 0 && len != n) kol++;
            len = 0;
        }
        i++;
    }
    if (len > 0 && len != n) kol++;
    cout << kol;
    return 0;
}
