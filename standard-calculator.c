#include <stdio.h>
#include <math.h>

// Finding the sum of the variables
double	sum(double a, double b)
{
	double		sum;

	sum = a + b;
	return sum;
}

// Finding the division of the variables
double	division(double numerator, double denominator)
{
	double		division;

	if (denominator == 0)
		printf("Cannot divide by zero\n");
	else
		division = numerator / denominator;
	return division;
}

// Finding the subtraction of the variables
double	subtraction(double a, double b)
{
	return a - b;
}

// Finding the multiplication of the variables
double	multiplication(double a, double b)
{
	return a * b;
}

// Finding the square root of a number
double	ft_sqrt(double number)
{
	double x = number;
	double value = 1;
	double epsilon = 1e-6;

	if (x < 0)
	{
		printf("Error: Valid input");
		return NAN;
	}
	while (x - value > epsilon)
	{
		x = (x + value) / 2;
		value = number / x;
	}
	return x;
}

// Finding the power of a number
double	ft_pow(double base, double exponent)
{
	double result = 1;

	if (exponent == 0)
		return 1;
	if (exponent < 0)
	{
		if (base == 0)
			return 0;
		base = 1 / base;
		exponent = -exponent;
	}
	while (exponent > 0)
	{
		result *= base;
		exponent--;
	}
	return result;
}

// Finding the percentage of a number
double	percentage(double number, double percent)
{
	double		decimal;
	double		result;

	decimal = percent / 100.0;
	result = number * decimal;
	return result;
}

// Find the reciprocal of a number
double	reciprocal(double number)
{
	if (number == 0)
	{
		printf("Cannot divide by zero\n");
		return -1;
	}
	return 1.0 / number;
}

int main()
{
	double		a;
	double		b;
	int			operation;

	printf("********************************************\n");
	printf("*                                          *\n");
	printf("*   Welcome to the Standard Calculator!    *\n");
	printf("*                                          *\n");
	printf("*        Perform calculations with ease     *\n");
	printf("*  Choose from a variety of mathematical   *\n");
	printf("*             operations available          *\n");
	printf("*                                          *\n");
	printf("********************************************\n");
	printf("\n");
	printf("Enter the first number: ");
	scanf("%lf", &a);
	printf("Enter the second number: ");
	scanf("%lf", &b);
	printf("Select operation:\n");
	printf("1. Addition\n2. Division\n3. Subtraction\n4. Multiplication\n5. Square Root\n6. Power\n7. Percentage\n8. Reciprocal\n");
	printf("Enter your choice: ");
	scanf("%d", &operation);
	
	// Perform operations based on the selected operation
	switch(operation) {
		case 1:
			printf("Sum: %.2f\n", sum(a, b));
			break;
		case 2:
			printf("Division: %.2f\n", division(a, b));
			break;
		case 3:
			printf("Subtraction: %.2f\n", subtraction(a, b));
			break;
		case 4:
			printf("Multiplication: %.2f\n", multiplication(a, b));
			break;
		case 5:
			printf("Square Root: %.2f\n", ft_sqrt(a));
			break;
		case 6:
			printf("Power: %.2f\n", ft_pow(a, 2));
			break;
		case 7:
			printf("Percentage: %.2f\n", percentage(a, b));
			break;
		case 8:
			printf("Reciprocal: %.2f\n", reciprocal(a));
			break;
		default:
			printf("Invalid operation\n");
	}
	
	return 0;
}