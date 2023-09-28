#include "main.h"

int _sqrt_recursion(int n) {
    if (n < 0) {
        return -1;  // If n is negative, there is no natural square root
    } else if (n == 0 || n == 1) {
        return n;   // Base case: square root of 0 or 1 is the number itself
    } else {
        // Recursive step: find the square root of (n-1) and add 1
        return _sqrt_recursion(n - 1) + 1;
    }
}