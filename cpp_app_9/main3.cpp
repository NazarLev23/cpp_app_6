#include <iostream>
#include <ctime>
using namespace std;

int cube(int a) {
	return a * a * a;
}

int main() {
	int number;
	cout << "Enter a number: ";
	cin >> number;
	cout << "The cube of " << number << " is " << cube(number) << endl;
	return 0;
}