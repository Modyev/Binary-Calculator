#include <iostream>

using namespace std;

void Binary(int number) {
    int binaryNum[8], i = 0;

    while (number > 0) {
        binaryNum[i++] = number % 2;
        number /= 2;
    }

    cout << "Binary of your number: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
    cout << endl;
}

void Octal(int number) {
    int octal[8], y = 0;

    while (number > 0) {
        octal[y++] = number % 8;
        number /= 8;
    }

    cout << "Octal of your number: ";
    for (int j = y - 1; j >= 0; j--) {
        cout << octal[j];
    }
    cout << endl;
}

void HexaDecimal(int number) {
    char hexa[8];
    int z = 0;

    while (number > 0) {
        int currentNum = number % 16;
        hexa[z++] = (currentNum < 10) ? '0' + currentNum : 'A' + (currentNum - 10);
        number /= 16;
    }

    cout << "Hexadecimal of your number: ";
    for (int j = z - 1; j >= 0; j--) {
        cout << hexa[j];
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Input your number: ";
    cin >> number;

    Binary(number);
    Octal(number);
    HexaDecimal(number);

    return 0;
}
