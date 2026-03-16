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
    setlocale(LC_ALL, "");
    char str[50];
    cout << "Введите строку: ";
    gets_s(str);
    cout << "n = ";
    cin >> n;
    while (i < strlen(str)) {
        int k = 0;
        while (str[i] != ' ' && str[i] != '\0') {
            k++;
            i++;
        }
        if (k != n) kol++;
        i++;
    }
    cout << kol;
    return 0;
    ne poluchilos
}
