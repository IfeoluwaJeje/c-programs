#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter two Numbers : ");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("The Sum is %d", c);

    return 0;
}

// Add more numbers togetheer
#include <stdio.h>
 
int main()
{
    int numCount, result;

    // Get the number of values to add
    printf("Enter the number of values to add: ");
    scanf("%d", &numCount);

    // Get the input numbers
    printf("Enter %d numbers:\n", numCount);

    // Perform the addition
    result = 0;
    for (int i = 0; i < numCount; i++)
    {
        int num;
        scanf("%d", &num);
        result += num;
    }

    // Print the result
    printf("The Sum is %d\n", result);

    return 0;
}
