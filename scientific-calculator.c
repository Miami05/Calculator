#include <stdio.h>
#include <math.h>

// Function to find the sum of two numbers
double sum(double a, double b)
{
	return a + b;
}

// Function to find the subtraction of two numbers 
double subtraction(double a, double b)
{
	return a - b;
}

// Function to find the multiplication of two numbers
double multiplication(double a, double b)
{
	return a * b;
}

// Function to perform division
double division(double numerator, double denominator)
{
	double division;

	// Check if the denominator is zero
	if (denominator == 0)
	{
		printf("Error... Cannot divide by zero.\n");
		return -1;
	}
	else
		division = numerator / denominator;
	return division;
}

// Function to calculate the square root of a number
double ft_sqrt(double number)
{
	double x = number;
	double value = 1;;
	double epsilon = 1e-6;

	// Check if the input is negative
	if (x < 0)
	{
		printf("Error... Valid input.\n");
		return NAN;
	}
	while (x - value > epsilon)
	{
		x = (x + value) / 2;
		value = number / x;
	}
	return x;
}

// Function to calculate the factorial of a number
long factorial(long number)
{
	if (number < 1)
		return -1;
	if (number == 0 || number == 1)
		return 1;
	return number * factorial(number - 1);
}

// Function to calculate the power of a number
double ft_pow(double base, double exponent)
{
	double result = 1;

	// Check if the exponent is zero
	if (exponent == 0)
		return 1;

	// Check if the exponent is negative
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

// Function to calculate the power of 2
double power_of_2(double base, double exponent)
{
	double value = 1;

	// Check if the exponent is zero
	if (exponent == 0)
		return 1;
	while (exponent > 0)
	{
		value *= base;
		exponent--;
	}
	return value;
}

// Function to calculate the reciprocal of a number
double reciprocal(double number)
{
	// Check if the number is zero
	if (number == 0)
		printf("Error... Cannot divide by zero.\n");
	return 1.0 / number;
}

// Function to calculate the absolute value of a number
long ft_abs(long number)
{
	if (number < 0)
		return -number;
	if (number > 0)
		return number;
}

// Function to calculate the base raised to the power of 10
long base_of_10(long base, long exponent)
{
	double value = 1;

	// Check if the exponent is zero
	if (exponent == 0)
		return 1;
	while (exponent > 0)
	{
		value *= base;
		exponent--;
	}
	return value;
}

// Function to calculate the cube root of a number
double cube_square(double num)
{
	double epsilon = 0.000001;
	double guess = 1.0;
	double prevGuess;

	do
	{
		prevGuess = guess;
		guess = (2 * prevGuess + num / (prevGuess * prevGuess)) / 3;
	} while (guess - prevGuess > epsilon || prevGuess - guess > epsilon);
	return guess;
}

// Function to calculate the absolute value of a floating point number
double ft_fabs(double number)
{
	if (number < 0)
		return -number;
	else
		return number;
}

// Function to calculate the y-th root of x
double yRoot(double x, int y)
{
	if (y == 0)
		return 1;
	if (x == 0)
		return 0;
	double epsilon = 0.00001;
	double guess = 1.0, prevGuess = 0;

	while (ft_fabs(guess - prevGuess) >= epsilon)
	{
		prevGuess = guess;
		guess = ((y - 1) * prevGuess + x / ft_pow(prevGuess, y - 1)) / y;
	}
	return guess;
}

int main() {
	double a, b;
	int choice;

	printf("Welcome to the Scientific Calculator!\n");
	printf("Choose an operation:\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Square Root\n");
	printf("6. Factorial\n");
	printf("7. Exponentiation\n");
	printf("8. Power of 2\n");
	printf("9. Reciprocal\n");
	printf("10. Absolute Value\n");
	printf("11. Power of 10\n");
	printf("12. Cube Root\n");
	printf("13. Absolute Value (floating point)\n");
	printf("14. Nth Root\n");
	printf("15. Natural Logarithm\n");
	printf("16. Cosine\n");
	printf("17. Sine\n");
	printf("18. Tangent\n");
	printf("19. Cotangent\n");
	printf("20. Floor Function\n");
	printf("21. Ceil Function\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			printf("Enter two numbers: ");
			scanf("%lf %lf", &a, &b);
			printf("Result: %lf\n", sum(a, b));
			break;
		case 2:
			printf("Enter two numbers: ");
			scanf("%lf %lf", &a, &b);
			printf("Result: %lf\n", subtraction(a, b));
			break;
		case 3:
			printf("Enter two numbers: ");
			scanf("%lf %lf", &a, &b);
			printf("Result: %lf\n", multiplication(a, b));
			break;
		case 4:
			printf("Enter two numbers: ");
			scanf("%lf %lf", &a, &b);
			printf("Result: %lf\n", division(a, b));
			break;
		case 5:
			printf("Enter a number: ");
			scanf("%lf", &a);
			printf("Result: %lf\n", ft_sqrt(a));
			break;
		case 6:
			printf("Enter a number: ");
			scanf("%ld", &a);
			printf("Result: %ld\n", factorial(a));
			break;
		case 7:
			printf("Enter base and exponent: ");
			scanf("%lf %lf", &a, &b);
			printf("Result: %lf\n", ft_pow(a, b));
			break;
		case 8:
			printf("Enter base and exponent: ");
			scanf("%lf %lf", &a, &b);
			printf("Result: %lf\n", power_of_2(a, b));
			break;
		case 9:
			printf("Enter a number: ");
			scanf("%lf", &a);
			printf("Result: %lf\n", reciprocal(a));
			break;
		case 10:
			printf("Enter a number: ");
			scanf("%ld", &a);
			printf("Result: %ld\n", ft_abs(a));
			break;
		case 11:
			printf("Enter base and exponent: ");
			scanf("%ld %ld", &a, &b);
			printf("Result: %ld\n", base_of_10(a, b));
			break;
		case 12:
			printf("Enter a number: ");
			scanf("%lf", &a);
			printf("Result: %lf\n", cube_square(a));
			break;
		case 13:
			printf("Enter a number: ");
			scanf("%lf", &a);
			printf("Result: %lf\n", ft_fabs(a));
			break;
		case 14:
			printf("Enter base and root: ");
			scanf("%lf %d", &a, &choice);
			printf("Result: %lf\n", yRoot(a, choice));
			break;
		case 15:
			printf("Enter a number: ");
			scanf("%lf", &a);
			printf("Result: %lf\n", log(a));
			break;
		case 16:
			printf("Enter an angle in radians: ");
			scanf("%lf", &a);
			printf("Result: %lf\n", cos(a));
			break;
		case 17:
			printf("Enter an angle: ");
			scanf("%lf", &a);
			printf("Result: %lf\n", sin(a));
			break;
		case 18:
			printf("Enter an angle in radians: ");
			scanf("%lf", &a);
			printf("Result: %lf\n", tan(a));
			break;
		case 19:
			printf("Enter an angle in radians: ");
			scanf("%lf", &a);
			printf("Result: %lf\n", 1 / tan(a));
			break;
		case 20:
			printf("Enter a number: ");
			scanf("%lf", &a);
			printf("Result: %lf\n", floor(a));
			break;
		case 21:
			printf("Enter a number: ");
			scanf("%lf", &a);
			printf("Result: %lf\n", ceil(a));
			break;
		default:
			printf("Invalid choice!\n");
			break;
	}
	return 0;
}