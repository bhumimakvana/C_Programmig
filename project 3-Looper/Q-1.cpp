#include <stdio.h>

/*
Q.1 Alphabet Skipper
    Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a
    do-while loop.
    Example:
    Output: a, e, i, m, q, u, y
*/

int main() {
	
    char b = 'a'; 

    do {
        printf("%c ", b); 
        b += 4;            
       } 
	
	while (b <= 'z');  

    printf("\n"); 
        
	return 0;

}

