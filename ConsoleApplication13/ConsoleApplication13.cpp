#include <iostream>
using namespace std;

void printPattern(int rows) {
    for (int i = 0; i < rows; i++) {
        int spaces = rows - i - 1;
        int nums = i;
        int stars = i + 1;
        if (i == (rows % 5 + 5) % 5) { // Перевірка, чи потрібно виводити * на поточному рядку
            stars += 1;
        }
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        for (int j = 0; j < nums; j++) {
            cout << nums;
        }
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter Number: ";
    cin >> size;
    if (size <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    printPattern(size);
    return 0;
}
