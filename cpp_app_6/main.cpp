#include <iostream>
#include <ctime>

using namespace std;

void printRectangle(int N, int K) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= K; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int N = 5;
    int K = 10;
    printRectangle(N, K);
    return 0;
}
