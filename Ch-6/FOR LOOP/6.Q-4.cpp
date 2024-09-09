#include <stdio.h>

// for loop

int main() {
    int N;

    printf("Enter any number: ");
    scanf("%d", &N);

    int a = 0, b = 1, c;

    if (N <= 0) {
        printf("The number of terms should be greater than 0.\n");
     } 
	else if (N == 1) {
        printf("0\n");
     } 
	else {
        printf("%d, %d", a, b);

        for (int i = 2; i < N; i++) {
            c = a + b;  
            printf(", %d", c);  
            a = b;  
            b = c;  
        }
        
        printf("\n"); 
    }
    
}

