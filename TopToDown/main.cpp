#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int fib(int n, int *arr) {
    if (arr[n] != -1) {
        return arr[n];
    }
    if (n <= 2) {
        arr[n] = 1;
    } else {
        arr[n] = fib(n - 1, arr) + fib(n - 2, arr);
    }
    return arr[n];
}

int Fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    int *arr = new int [n + 1];
    for (int i = 0; i < n + 1; i++) {
        arr[i] = -1;
    }
    return fib(n, arr);
}

int main()
{
    cout << Fibonacci(3) << endl;
}
