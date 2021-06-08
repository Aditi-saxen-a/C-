// Program to print the given pattern

#include <iostream>
using namespace std;
void print_asterisk(int asterisk)
{
	if (asterisk == 0)
		return;
	cout << "* ";
	print_asterisk(asterisk - 1);
}
void print_space(int space)
{
	if (space == 0)
		return;
	cout << " "
		<< " ";
	print_space(space - 1);
}

void pattern_upper(int n, int num)
{
	if (n == 0)
		return;
	print_asterisk(num - n + 1);
	print_space(2 * n - 1);
	print_asterisk(num - n + 1);
	cout << endl;

	pattern_upper(n - 1, num);
}

void pattern_lower(int n, int num)
{
	if (n == 0)
		return;
	print_asterisk(n);
	print_space(2 * (num - n) + 1);
	print_asterisk(n);
	cout << endl;

	pattern_lower(n - 1, num);
}

void pattern(int n, int num)
{
	pattern_upper(n, num);
	pattern_lower(n , num);
}

int main()
{
	int n = 5;
	pattern(n, n);
	return 0;
}

