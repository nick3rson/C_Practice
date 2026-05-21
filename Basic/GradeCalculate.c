#include <stdio.h>

int main() {
	int score = 0;
	printf("Enter your grade: ");
	scanf("%d", &score);

	printf("Your score is %d\n", score);

	char grade;
	if (score >= 100) {
		grade = 'S';
	}
	else if (score >= 80) {
		grade = 'A';
	}
	else if (score >= 70) {
		grade = 'B';
	}
	else if (score >= 60) {
		grade = 'C';
	}
	else if (score >= 50) {
		grade = 'D';
	}
	else {
		grade = 'E';
	}

	printf("Your grade is : %c\n", grade);

	return 0;
}
