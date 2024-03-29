/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 1001

int isPalindrome (const char* start , const char* end)
{
    if (start <= end)
    {
        if (!isalnum (*start))
            return isPalindrome (start + 1, end);
        if (!isalnum (*end))
            return isPalindrome (start , end - 1);
        if (toupper (*start) != toupper (*end))
            return 0;
        return isPalindrome (start + 1, end - 1);
    }
    else 
        return 1;
}
char* readLine (char* result)
{
    char* s = fgets(result , MAX , stdin);
    return result + strlen(s) - 1;

}
int main ()
{
    char result[MAX];
    char* end = readLine (result);
    printf (isPalindrome (result , end) ? "Yes" : "No");
}