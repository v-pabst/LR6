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


using namespace std;
const int A = 6, B = 10;
int main()
{
	setlocale(LC_ALL, "");
	srand(time(0));
	int k;
	int mas[A][B];
	int i, j, t;
	for (i = 0; i < A; i++) {
		for (j = 0; j < B; j++) {
			if (j == 0) mas[i][j] = i + 1;
			else {
				mas[i][j] = rand()%(100);
			}
		}
	}
	cout << "Исходный массив:\n";
	for (i = 0; i < A; i++) {
		for (j = 0; j < B; j++)
			printf("%8.2i", mas[i][j]);
		printf("\n");
	}
	cout << "k = ";
	cin >> k;
	for (i = 0; i < A; i++) {
		for (j = B-1; j > i; j--) {
			if (j == 1)break;
			if (mas[k-1][j-1] > mas[k-1][j]){
				for (int row = 0; row < A; row++) {
					t = mas[row][j - 1];
					mas[row][j - 1] = mas[row][j];
					mas[row][j] = t;
				}
			}
		}
	}
	cout << "Упорядоченный массив:\n";
	for (i = 0; i < A; i++) {
		for (j = 0; j < B; j++)
			printf("%8.2i", mas[i][j]);
		printf("\n");
	}
}
