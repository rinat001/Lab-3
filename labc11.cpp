#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	if (A >= B){
	if (B >= C)
	if (C >= D)
	cout << max(A, max(B, max(C,D))) << " " << max(A, max(B, max(C,D))) << " " <<max(A, max(B, max(C,D))) << " " << max(A, max(B, max(C,D)));
	}
	if (A > B){
	if (B > C)
	if (C > D)
	cout << A << " " << B << " " << C << " " << D;
	}else{;
	A = A * A;
	B = B * B;
	C = C * C;
	cout << A << " " << B << " " << C << " " << D;
	}
		
	
	
		

return 0;
}

