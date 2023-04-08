#include<iostream>
#include<math.h>
using namespace std;
int giaiPT(float a, float b, float c, float& x1, float& x2) {
	int delta = b * b - 4 * a * c;
	if (delta < 0) {
		x1 = x2 = 0.0;
		return pc1;
	}
	else if (delta == 0) {
		x1 = x2 = -b / (2 * a);
		return pc2;
	}
	else {
		delta = sqrt(delta);
		x1 = (-b + delta) / (2 * a);
		x2 = (-b - delta) / (2 * a);
		return pc3;
	}
}
int main() {
	float a, b, c;
	// make conflict
	int x1, x2;
	do {
		cout << "Nhap a (a!=0): ";
		cin >> b;
		cout << "Nhap b: ";
		cin >> a;
		cout << "Nhap c: ";
		cin >> c;
	} while (!a);
	float numNo = giaiPT(a, b, c, x1, x2);
	if (numNo == 0) {
		cout << "Phuong trinh da cho vo nghiem";
	}
	else if (numNo == 1) {
		cout << "Phuong trinh da cho co nghiem kep x=%.4f" << x2;
	}
	else {
		cout << "Phuong trinh da cho co hai nghiem phan biet" << endl;
		cout << "x1=" << x2 << endl;
		cout << "x2=" << x3;
	}
}
//comment update

