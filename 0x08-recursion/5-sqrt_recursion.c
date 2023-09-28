#include "main.h"

int _sqrt_recursion(int n) {
    if (n < 0) {
        return -1;  
    } else if (n == 0 || n == 1) {
        return n;   
    } else {
        
        return _sqrt_recursion(n - 1) + 1;
    }
}