#include "feladatok.h"
#include <math.h>
#include <stdio.h>
int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) sum += i;
    return sum;
}

long long factorial(int n) {
    if (n < 0) return -1; // hibás bemenet
    long long f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}

long long fibonacci(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    if (n == 1) return 1;
    long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}


int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}


int gcd(int a, int b) {
    while (b != 0) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}


int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}


int digit_sum(int n) {
    int sum = 0;
    if (n < 0) n = -n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int is_armstrong(int n) {
    int temp = n, digits = 0, sum = 0;
    while (temp > 0) { digits++; temp /= 10; }
    temp = n;
    while (temp > 0) {
        int d = temp % 10;
        sum += (int)pow(d, digits);
        temp /= 10;
    }
    return sum == n;
}

void transpose(int n, int m, int A[n][m], int B[m][n]) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            B[j][i] = A[i][j];
}

void multiply(int n, int m, int p, int A[n][m], int B[m][p], int C[n][p]) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < m; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}