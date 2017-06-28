#include <iostream>
#include <math.h>
#include "procedure.h"
using namespace std;

int main()
{
	float a,b,c,x,x1,x2,D;
	int s;
	cout << "Hello, please, enter digits" << endl;
	cout << "a" << endl;
	cin >> a;
	cout << "b" << endl;
	cin >> b;
	cout << "c" << endl;
	cin >> c;
	if ((a == 0) && (b == 0)) {
		cout << "Kornei net" << endl;
		return 0;
	}
	if (a == 0) {
		x = c * -1 / b;
		cout << "x = " << x << endl;
		return 0;
	}
	D = diskr(a,b,c);
	s = diskcheck(D);
	switch(s) {
		case 0:
			x = koren(D,a,b,c,1);
			cout << "x = " << x << endl;
			break;
		case 1:
			cout << "Kornei net" << endl;
			break;
		case 2:
			x1 = koren(D,a,b,c,1);
			cout << "x1 = " << x1 << endl;
			x2 = koren(D,a,b,c,-1);
			cout << "x2 = " << x2 << endl;
			break;
	}
	return 0;
}
