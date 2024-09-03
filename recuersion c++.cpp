#include <iostream>
#include <vector>
using namespace std;


int power(int num, int a) {
	if (a == 0) {
		return 1;

	}
	else
		return num * power(num, a - 1);

}
int main() {
	int num;
	int a;
	cout << "Enter a number" << endl;
	cin >> num;
	cout << "Enter a exponent number" << endl;
	cin >> a;


	int reslult = num * power(num, a);
	cout << "The result is" << endl;
	system("pause");

	return 0;

}