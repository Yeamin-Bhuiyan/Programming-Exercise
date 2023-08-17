/******
*
**  Md. Yeamin Bhuiyan **
**  ID : 22201054      **
**  Section : A-2      **

**** Program for printing Floyd's Triangle Binary Pattern in C ***
**
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
**
*
******/


//Standard Header File
#include<stdio.h>

// Main Function
int main()
{           // Start of main function

    int n;  // variable declaration

    // Input number of rows & columns from user
    printf("Enter an integer number: ");
    scanf("%d",&n);
    printf("\n");

    // Iterate over each row
    for(int i=1; i<=n; i++)
    {

        // Iterate over each column
        for(int j=1; j<=i; j++)
        {

            // Condition for Pattern
            if((i+j)%2==0)
                printf("1");            // sum is even print 1
            else
                printf("0");            // sum is odd print 0
        }

        // Move to the next line
        printf("\n");
    }

    return 0;

}           // End of main function
