PROGRAM 5: STRING REVERSAL USING STACK
  
AIM :
To reverse a string using stack operations.

ALGORITHM :
Read a string
For each character: push it into stack
For each position: pop character from stack and store back
Print reversed string

 PROGRAM :
#include <stdio.h>
#include <string.h>
#define MAX 100
char stack[MAX];
int top = -1;

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    return stack[top--];
}

int main() {
    char str[MAX];
    printf("Enter a string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++)
        push(str[i]);

    for(int i = 0; str[i] != '\0'; i++)
        str[i] = pop();

    printf("Reversed string: %s\n", str);
    return 0;
}

SAMPLE OUTPUT :
Enter a string: hello
Reversed string: olleh

RESULT :
String reversal using stack was successfully implemented.
