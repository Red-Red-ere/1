#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

void fib_1(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; ++i) {
        cout << a << endl;
        int next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    setlocale(LC_ALL, "RUS");
    cout << "Hello, Word!" << endl;
    int n;
    cout << "n:";
    cin >> n;
    cout << "fib(" << n << ") = " << fib(n) << endl;
    cout << "Первые " << n << " чисел Фибоначчи" << endl;
    fib_1(n);
    return 0;
}
