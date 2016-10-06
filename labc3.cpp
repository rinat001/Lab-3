#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int x, y, z;
	cin >> x >> y >> z;
	if (x >= y){
	if (y >= z)
	x = x * 2;
	y = y * 2;
	z = z * 2;
	cout<< x << endl;
	cout<< y << endl;
	cout<< z << endl;
	}else{
	cout<< max(x, max(y,z));
	}
	

return 0;
}
