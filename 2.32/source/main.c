#include <stdio.h>

float high, weight, bmi;

float main(void)
{
	printf("�п�J����(����):");
	scanf_s("%f", &high);
	printf("\n�п�J�魫(����):");
	scanf_s("%f", &weight);

	bmi = weight / (high*high);

	printf("BMI= %.1f", bmi);
	printf("BMI VALUES\n");
	printf("Underweight: <18.5\n");
	printf("Normal:      >18.5 and <24.9\n");
	printf("Overweight:  >25 and <29.9\n");
	printf("Obese:       >30");
}