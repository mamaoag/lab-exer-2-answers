#include <iostream>
using namespace std;

int factorial(int x)
{
	int result = x;
	
	for(int ctr = x - 1; ctr > 0; ctr--)
	{
		result = result * ctr;	
	}
}

int main()
{
	int input, result;
	
	cout << "Enter a number > ";
	cin >> input;
	
	result = factorial(input);
	
	cout << "The factorial of " << input << "  is " << result << endl;
}
