#include <iostream>

using namespace std;

int main() {
    int A[25] = {1, 0, 5, 0, 3, 0, 8, 0, 7, 0, 2, 0, 4, 0, 6, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0};
    int newSize = 0;

    for (int i = 0; i < 25; i++) {
        if (A[i] != 0) {
            A[newSize] = A[i];
            newSize++;
        }
    }

    for (int i = newSize; i < 25; i++) {
        A[i] = 0;
    }

    for (int i = 0; i < 25; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
