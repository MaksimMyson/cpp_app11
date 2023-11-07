#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

template <typename T>
void sumArrays(const T* arrA, const T* arrB, T* arrC, int size) {
    for (int i = 0; i < size; ++i) {
        arrC[i] = arrA[i] + arrB[i];
    }
}

int main() {
    const int size = 5;
    int arrA[size];
    int arrB[size];
    int arrC[size];

    srand(static_cast<unsigned>(time(0)));

    cout << "Array A: ";
    for (int i = 0; i < size; ++i) {
        arrA[i] = rand() % 10;
        cout << arrA[i] << " ";
    }
    cout << endl;

    cout << "Array B: ";
    for (int i = 0; i < size; ++i) {
        arrB[i] = rand() % 10;
        cout << arrB[i] << " ";
    }
    cout << endl;

    sumArrays(arrA, arrB, arrC, size);

    cout << "Array C (sum of A and B): ";
    for (int i = 0; i < size; ++i) {
        cout << arrC[i] << " ";
    }
    cout << endl;

    return 0;
}