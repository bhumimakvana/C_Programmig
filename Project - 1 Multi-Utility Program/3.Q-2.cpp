#include <stdio.h>

int main() {
	
    float baseSalary, hraPercent, daPercent, taPercent, grossSalary;

    printf("Enter the base salary: Rs. ");
    scanf("%f", &baseSalary);

    printf("Enter HRA percentage: ");
    scanf("%f", &hraPercent);

    printf("Enter DA percentage: ");
    scanf("%f", &daPercent);

    printf("Enter TA percentage: ");
    scanf("%f", &taPercent);

    grossSalary = baseSalary + (baseSalary * hraPercent / 100) + (baseSalary * daPercent / 100) + (baseSalary * taPercent / 100);

    printf("Gross Salary: Rs. %.2f\n", grossSalary);

}

