#include <iostream>
using namespace std;

int max(int x, int y)
{
	return (x > y)? x : y;
}

int main()
{
	int x, y, answer;
	
	cout << "Enter first # > ";
	cin >> x;
	cout << "Enter second # > ";
	cin >> y;
	
	answer = max(x,y);
	
	printf("The greatest number between %d and %d is %d", x, y, answer);
}
