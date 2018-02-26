/*
Name - Nikhil Ranjan Nayak
Regd No - 1641012040
Desc - Integer Multiplication
*/
#include <stdio.h>
#include <math.h>
int integer_mul(int, int, int);
int cal_digits(int);
int convert_to_binary(int);
void main()
{
	int base, num1, num2, product;
	printf("\nEnter Base - ");
	scanf("%d", &base);
	printf("\nEnter Number 1 - ");
	scanf("%d", &num1);
	printf("\nEnter Number 2 - ");
	scanf("%d", &num2);
	product = integer_mul(base, num1, num2);
	if(base == 2)
		product = convert_to_binary(product);
	printf("\nProduct - %d\n", product);
}

int integer_mul(int base, int num1, int num2)
{
	int x_left, y_left, x_right, y_right, product = 0;
	int dig_num1 = cal_digits(num1), dig_num2 = cal_digits(num2);
	
	if(dig_num1 > 1)
	{
		x_left = num1 / pow(10,  ceil(dig_num1 / 2));
		y_left = num2 / pow(10,  ceil(dig_num2 / 2));
	
		x_right = num1 % (int)pow(10, ceil(dig_num1 / 2));
		y_right = num2 % (int)pow(10, ceil(dig_num1 / 2));
	
		product = ((int)pow(base, dig_num1) * x_left * y_left) +
							((int)pow(base, ceil(dig_num1 / 2))) * (((x_left + x_right) * (x_left + y_right)) -
							(x_left * y_left) - (x_right * y_right)) + (x_right * y_right);
		integer_mul(base, x_left, x_right);
		integer_mul(base, y_left, y_right);
	}
	
	return product;
}

int cal_digits(int num)
{
	int ctr = 0;
	while(num != 0)
	{
		ctr++;
		num /= 10;
	}
	return ctr;
}

int convert_to_binary(int num)
{
	int r, binary = 0, result = 0;
	while(num > 0)
	{
		r = num % 2;
		binary = (binary * 10) + r;
		num /= 2;
	}
	
	while(binary > 0)
	{
		r = binary % 10;
		result = (result * 10) + r;
		binary /= 10;
	}
	
	return result;
}
