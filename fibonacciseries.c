/*write the c program to find write the fibonacci in c using iteration*/
#include<stdio.h>

int fibonacci_iterative(int n) {
    if (n <= 0)
        return -1;
    else if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else {
        int prev = 0, curr = 1, temp;
        for (int i = 2; i < n; i++) {
            temp = curr;
            curr = prev + curr;
            prev = temp;
        }
        return curr;
    }
}

int main() {
    int n = 10;
    printf("The %dth term of the Fibonacci sequence is %d\n", n, fibonacci_iterative(n));
    return 0;
}

