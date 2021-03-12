#include <stdio.h>
void main() {

int grade = 1;
while (grade > 0) {
	printf("Enter a grade:");
	scanf("%d", &grade);
	if (56 <= grade && grade <= 60) {
		printf("pass \n");
	}
	else if (60 <= grade && grade <= 70) {
		printf("insufficient \n");
	}
	else if (70 <= grade && grade <= 85) {
		printf("good \n");
	}
	else if (85 <= grade && grade <= 100) {
		printf("very good! \n");
	}
}

}