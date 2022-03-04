#include <stdio.h>

int j; // File scope of j begins

void f(int i) // Block scope of i begins
{
    int j = 1; // Block scope of j begnis
    i++; // i refers to the function parameter
    // Block scope of loop-local i begins
    for (int i = 0; i < 2; i++)
    {
        // Block scope of the inner j begins;
        // hides outer j
        int j = 2;
        // Inner j is in scope, prints 2
        printf("%d\n", j);
    }
    // Outer j is in scope, prints 1
    printf("%d\n", j);
} // The block scope of i and j ends

// j as function prototype scope; hides file-scope j
void g(int j);

int main()
{
    f(5);
    return 0;
}
