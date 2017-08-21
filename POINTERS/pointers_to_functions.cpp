#include <iostream>
using namespace std;

int addition(int a, int b)
{
	return (a + b);
}

int subtraction(int a, int b)
{
	return (a - b);
}

int operation(int x, int y, int(*functocall)(int, int))
{
	int g;
	g = (*functocall)(x, y);
	return (g);
}

int main()
{
	int m, n;
	int(*minus)(int, int) = subtraction; // already functions are saved during compiling and dynamically linked

	// here minus will be a function pointer pointing to subtraction function address

	m = operation(7, 5, addition); // addition can be directly used as compiled before
	n = operation(20, m, minus);
	cout << n;
	return 0;
}
//output : 8
