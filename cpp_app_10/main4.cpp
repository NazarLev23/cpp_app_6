#include <iostream>
#include <ctime>

using namespace std;

int max(int num1, int num2) {
    int max_num = num1;
    for (int i = num1; i <= num2; i++) {
        if (i > max_num) {
            max_num = i;
        }
    }
    return max_num;
}

int main() {
    int num1, num2;
    cout << "Enter the first numbers: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cin >> num1 >> num2;
    cout << "The maximum number is " << max(num1, num2) << endl;
    return 0;
}
