#include <iostream>
using namespace std;

int main() {
	double input,celc,kelv,fare;
	char input2;
	cout << "Give us the unit of temperature: F, C or K" << endl;
	cin >> input2;
	if (input2 == 'f') {
		cout << "give a number between 32 and 212" << endl;
		cin >> input;
		cout << input;
		celc = (input-32)/1.8;
		cout << "Celcius = " << celc << endl;
		kelv = (input + 459.67)*5/9;
		cout << "Kelvin =" << kelv<<endl;
	}

	else if (input2 == 'c') {
		cout << "give a number between 0 and 100" << endl;
		cin >> input;
		cout << input;
		fare = (input * 9 / 5) + 32;
		cout << "farenheit =" << fare << endl;
		kelv = (input + 273.15);
		cout << "Kelvin =" << kelv << endl;

	}

	else if (input2 == 'k') {
		cout << "give a number between 273.15 and 373.15" << endl;
		cin >> input;
		cout << input;
		fare = (input * 9 / 5) - 459.67;
		cout << "farenheit =" << fare << endl;
		celc = (input - 273.15);
		cout << "celcius =" << celc << endl;
	}
	if (('f' > 212) && ('c' > 100) && ('k' > 373.15))
		cout << "Toasty!" << endl;
	else if (('f' < 32) && ('c' < 0) && ('k' < 273.15))
		cout << "Soooo cold!" << endl;
}