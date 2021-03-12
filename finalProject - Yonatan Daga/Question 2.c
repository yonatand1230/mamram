#include <stdio.h>
void main() {
// question 2

char input[5];
printf("Enter a word:");
scanf("%c%c%c%c%c",&input[0],&input[1],&input[2],&input[3],&input[4]);

if (input[0] >=65 && input[0] <=90) 
{
    printf("Your input starts with an uppercase letter.");
} 

else if (input[0]>=97 && input[0]<=122) 
{
    printf("Your input starts with a lowercase letter.");
}
getch();
}