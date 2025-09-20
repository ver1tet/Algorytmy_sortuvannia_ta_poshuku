#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
SetConsoleOutputCP(1251);
const int N = 5;
long long mobiles[N] = { 671234567, 955555555, 639876543, 502223344, 931112233 };
long long homes[N] = { 3214567, 2345678, 5671234, 1112223, 7654321 };

int choice;

do {
    cout << "\n===== ДОВІДНИК =====\n";
    cout << "1. Відсортувати за мобільними\n";
    cout << "2. Відсортувати за домашніми\n";
    cout << "3. Вивести список\n";
    cout << "4. Вихід\n";
    cout << "Ваш вибір: ";
        cin >> choice;

    if (choice == 1) {
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (mobiles[j] > mobiles[j + 1]) {
                    long long temp = mobiles[j];
                    mobiles[j] = mobiles[j + 1];
                    mobiles[j + 1] = temp;

                    long long temp2 = homes[j];
                    homes[j] = homes[j + 1];
                    homes[j + 1] = temp2;
                }
            }
        }
cout << "Відсортовано за мобільними.\n";

    }
    else if (choice == 2) {
        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - i - 1; j++) {
                if (homes[j] > homes[j + 1]) {
                    long long temp = homes[j];
                    homes[j] = homes[j + 1];
                    homes[j + 1] = temp;

                    long long temp2 = mobiles[j];
                    mobiles[j] = mobiles[j + 1];
                    mobiles[j + 1] = temp2;
                }
            }
        }
    cout << "Відсортовано за домашніми.\n";
        }
    else if (choice == 3) {
            cout << "---------------------------------\n";
            for (int i = 0; i < N; i++) {
                cout << i + 1 << ". моб.: " << mobiles[i]
                    << " | дом.: " << homes[i] << "\n";
            }
            cout << "---------------------------------\n";
        }
        else if (choice == 4) {
            cout << "Вихід...\n";
        }
        else {
            cout << "Неправильний вибір!\n";
        }
    } while (choice != 4);

    return 0;
}
