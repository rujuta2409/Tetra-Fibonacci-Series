#include <stdio.h>


int tetraFib(int n) {
    if (n == 0) {
        return 0;
    } 
    else if (n == 1) {
        return 1;
    } 
    else if (n == 2) {
        return 1;
    } 
    else if (n == 3) {
        return 2;
    } 
    else {
        return tetraFib(n - 1) + tetraFib(n - 2) + tetraFib(n - 3) + tetraFib(n - 4);
    }
}  


int main() {
    int n;


    printf("Enter the number of terms: ");
    scanf("%d", &n);


    printf("Tetra-Fibonacci Series:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tetraFib(i));
    }
}
