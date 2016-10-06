#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int a, b;
	cin>> a >> b;
	if (a > b){
	b = (a+b)/2; 
	a = 2 * a * b;
	cout << a << " "<< b;
	}
		

return 0;
}

