#include <stdio.h>
void main() {
// question 3
int arr[5];
int i = 0;

for (i = 0; i<5; i=i+1) {
	printf("enter a number:");
	scanf("%d", &arr[i]);
}

printf("These are the even numbers: \n");
for (i = 0; i < 5; i++) {
	if (arr[i]%2 == 0) {
		printf("%d \n", arr[i]);
	}
}
if (arr[0] % 2 != 0 && arr[1] % 2 != 0 && arr[2] % 2 != 0 && arr[3] % 2 != 0 && arr[4] % 2 != 0) {
	printf("error");
}
getch();
}