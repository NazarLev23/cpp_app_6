#include <iostream>
#include <ctime>

using namespace std;

int positive(int num) {
    if (num > 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (positive(num)) {
        cout <<  num << " is positive." << endl;
    }
    else {
        cout <<  num << " is negative." << endl;
    }
    return 0;
}