#include <iostream>
#include <ctime>

using namespace std;

void Rectangle(int N, int K) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int N,K;
    cout << "Enter the first number: ";
    cin >> N;
    cout << "Enter the second number: ";
    cin >> K;
    Rectangle(N, K);
    return 0;
}
