#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int Fibonacci(int n) {
    int *arr = new int [n + 1];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < n + 1; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}

int main()
{
    cout << Fibonacci(3) << endl;
}
