#include <stdio.h>
#define MAX 500

double	sum(double a, double b)
{
	return a + b;
}

double	subtraction(double a, double b)
{
	return a - b;
}

double	multiplication(double a, double b)
{
	return a * b;
}

double	division(double numerator, double denominator)
{
	if (denominator == 0)
	{
		printf("The division in not possible\n");
		return 1;
	}
	else
		return numerator / denominator;
}

int	shift_right(int a, int b)
{
	return a >> b;
}

int	shift_left(int a, int b)
{
	return a << b;
}

int	binary(int number)
{
	int		remainder;
	int		result;
	int		place;

	place = 1;
	result = 0;
	remainder = 10;
	while (number != 0)
	{
		remainder = number % 2;
		result = result + (remainder * place);
		place *= 10;
		number /= 2;
	}
	return result;
}

void	oct(int number)
{
	int		remainder;
	int		i;
	int		octal[MAX];

	i = 0;
	while (number > 0)
	{
		remainder = number % 8;
		octal[i] = remainder;
		number /= 8;
		i++;
	}
	if (i == 0)
		printf("0");
	while (i--)
		printf("%d", octal[i]);
}

void	hexadecimal(int number)
{
	int		remainder;
	char	hex[MAX];
	int		i;

	i = 0;
	while (number > 0)
	{
		remainder = number % 16;
		if (remainder < 10)
			hex[i] = '0' + remainder;
		else
			hex[i] = 'A' + (remainder - 10);
		number /= 16;
		i++;
	}
	i--;
	while(i >= 0)
	{
		printf("%c", hex[i]);
		i--;
	}
}

int	XOR_operators(int a, int b)
{
	return a ^ b;
}

int main()
{
	double		a;
	double		b;
	int		choice;
	int		x, y; // new integer variables

	printf("********************************************\n");
	printf("*                                          *\n");
	printf("*   Welcome to the Programming Calculator!    *\n");
	printf("*                                          *\n");
	printf("*        Perform calculations with ease     *\n");
	printf("*  Choose from a variety of programmer   *\n");
	printf("*             operations available          *\n");
	printf("*                                          *\n");
	printf("********************************************\n");
	printf("\n");
	printf("Choose an operation:\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5.Shift Right\n");
	printf("6.Shift Left\n");
	printf("7.Binary\n");
	printf("8.Octal\n");
	printf("9.Hexadecimal\n");
	printf("Enter a choice: ");
	scanf("%d", &choice);

	switch (choice)
	{
		case 1: // Addition
			printf("Enter two numbers: ");
			scanf("%lf %lf", &a, &b);
			printf("Result: %.2lf\n", sum(a, b));
			break;
		case 2: // Subtraction
			printf("Enter two numbers: ");
			scanf("%lf %lf", &a, &b);
			printf("Result: %.2lf\n", subtraction(a, b));
			break;
		case 3: // Multiplication
			printf("Enter two numbers: ");
			scanf("%lf %lf", &a, &b);
			printf("Result: %.2lf\n", multiplication(a, b));
			break;
		case 4: // Division
			printf("Enter two numbers: ");
			scanf("%lf %lf", &a, &b);
			printf("Result: %.2lf\n", division(a, b));
			break;
		case 5: // Shift Right
			printf("Enter two numbers: ");
			scanf("%d %d", &x, &y);
			printf("Result: %d\n", shift_right(x, y));
			break;
		case 6: // Shift Left
			printf("Enter two numbers: ");
			scanf("%d %d", &x, &y);
			printf("Result: %d\n", shift_left(x, y));
			break;
		case 7: // Binary
			printf("Enter a number: ");
			scanf("%d", &x);
			printf("Binary: %d\n", binary(x));
			break;
		case 8: // Octal
			printf("Enter a number: ");
			scanf("%d", &x);
			printf("Octal: ");
			oct(x);
			printf("\n");
			break;
		case 9: // Hexadecimal
			printf("Enter a number: ");
			scanf("%d", &x);
			printf("Hexadecimal: ");
			hexadecimal(x);
			printf("\n");
			break;
		default:
			printf("Invalid choice.\n");
			break;
	}
	return 0;
}
