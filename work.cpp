#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    cout << "Hello, Word!" << endl;
    int n;
    cout << "n:";
    cin >> n;
    cout << "fib(" << n << ") = " << fib(n) << endl;
    return 0;
}
