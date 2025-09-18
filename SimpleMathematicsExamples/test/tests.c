#include <stdio.h>
#include <assert.h>
#include "../src/feladatok.h"
#include <math.h>

void test_sum_to_n() {
    assert(sum_to_n(1) == 1);
    assert(sum_to_n(5) == 15);
    assert(sum_to_n(10) == 55);
    assert(sum_to_n(0) == 0);
    printf("test_sum_to_n OK\n");
}
void test_factorial() {
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(5) == 120);
    assert(factorial(10) == 3628800);
    printf("test_factorial OK\n");
}

void test_fibonacci() {
    assert(fibonacci(0) == 0);
    assert(fibonacci(1) == 1);
    assert(fibonacci(5) == 5);
    assert(fibonacci(10) == 55);
    printf("test_fibonacci OK\n");
}

void test_is_prime() {
    assert(is_prime(2) == 1);
    assert(is_prime(3) == 1);
    assert(is_prime(4) == 0);
    assert(is_prime(29) == 1);
    assert(is_prime(1) == 0);
    printf("test_is_prime OK\n");
}

void test_gcd() {
    assert(gcd(12, 18) == 6);
    assert(gcd(7, 13) == 1);
    assert(gcd(100, 85) == 5);
    assert(gcd(0, 10) == 10);
    printf("test_gcd OK\n");
}

void test_digit_sum() {
    assert(digit_sum(123) == 6);
    assert(digit_sum(9999) == 36);
    assert(digit_sum(0) == 0);
    assert(digit_sum(-456) == 15);
    printf("test_digit_sum OK\n");
}

void test_is_armstrong() {
    assert(is_armstrong(153) == 1);
    assert(is_armstrong(370) == 1);
    assert(is_armstrong(371) == 1);
    assert(is_armstrong(9474) == 1);
    assert(is_armstrong(100) == 0);
    printf("test_is_armstrong OK\n");
}

void test_multiply() {
    int A[2][3] = {{1,2,3},{4,5,6}};
    int B[3][2] = {{7,8},{9,10},{11,12}};
    int C[2][2];
    multiply(2,3,2,A,B,C);
    assert(C[0][0] == 58 && C[0][1] == 64);
    assert(C[1][0] == 139 && C[1][1] == 154);
    printf("test_multiply OK\n");
}

void test_lcm() {
    assert(lcm(4, 6) == 12);
    assert(lcm(10, 15) == 30);
    assert(lcm(7, 3) == 21);
    assert(lcm(0, 5) == 0);
    printf("test_lcm OK\n");
}

void test_transpose() {
    int A[2][3] = {{1,2,3},{4,5,6}};
    int B[3][2];
    transpose(2,3,A,B);
    assert(B[0][0] == 1 && B[0][1] == 4);
    assert(B[1][0] == 2 && B[1][1] == 5);
    assert(B[2][0] == 3 && B[2][1] == 6);
    printf("test_transpose OK\n");
}

int main() {
    test_sum_to_n();
    test_factorial();
    test_fibonacci();
    test_is_prime();
    test_gcd();
    test_lcm();
    test_digit_sum();
    test_is_armstrong();
    test_transpose();
    test_multiply();
}
