#include <stdio.h>

void main() {
// question 1

int grades[5];
int i;
for (i=0 ; i<5 ; i++)
  {
    printf("Enter the %dth grade: ", i+1); 
    scanf("%d", &grades[i]);
  }

//  average
int average = ( grades[0] + grades[1] + grades[2] + grades[3] + grades[4] )/5;
printf("\nYour average grade is %d. \n", average);

// min and max
int max=grades[0];
int min=grades[0];

for (i=0;i<5;i++) 
{
    if (max < grades[i] )
        max = grades[i];
    if (min > grades[i] )
        min = grades[i];
}

printf("Your max grade is %d. \n",max);
printf("Your min grade is %d. \n",min);

getch();
}
