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

    //2
//const int n = 6;
//int arr[n] = { 5, 3, 8, 1, 4, 2 };
//
//cout << "початковий масив: ";
//for (int i = 0; i < n; i++) {
//    cout << arr[i] << " ";
//}
//cout << endl;
//
//
//for (int i = 0; i < n - 1; i++) {
//    int swapcount = 0;
//    for (int j = 0; j < n - i - 1; j++) {
//        if (arr[j] > arr[j + 1]) {
//            int temp = arr[j];
//            arr[j] = arr[j + 1];
//            arr[j + 1] = temp;
//            swapcount++;
//        }
//    }
//
//    if (swapcount == 0) {
//        break;
//    }
//}
//
//cout << "відсортований масив: ";
//for (int i = 0; i < n; i++) {
//    cout << arr[i] << " ";
//}
//cout << endl;
//
//return 0;


//3

int arr[] = { 3, 6, 1, 5, 2, 4 };
int n = sizeof(arr) / sizeof(arr[0]);

cout << "Початкова стопка: ";
for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
cout << endl;


for (int currSize = n; currSize > 1; currSize--) {

    int maxIdx = 0;
    for (int i = 1; i < currSize; i++) {
        if (arr[i] > arr[maxIdx])
            maxIdx = i;
    }


    if (maxIdx != currSize - 1) {

        if (maxIdx != 0) {
            for (int i = 0, j = maxIdx; i < j; i++, j--) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            cout << "Переворот верхніх " << maxIdx + 1 << " елементів: ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
        }


        int last = currSize - 1;
        for (int i = 0, j = last; i < j; i++, j--) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        cout << "Переворот верхніх " << currSize << " елементів: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }
}

cout << "Відсортована стопка: ";
for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
cout << endl;

return 0;
}
