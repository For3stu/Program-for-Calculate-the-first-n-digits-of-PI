#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int First_digits = 0;


int main()
{
	cout << "Program for Calculate the first (n) digits of PI" << endl;
	cout << "Give me first (n) digits of PI to count: ";
	cin >> First_digits;
	cout << setprecision(First_digits);
	cout << M_PI << endl;

	


	return 0;
}
