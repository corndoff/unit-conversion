#include <iostream>
using namespace std;

int convert;
double cups;
double ounces;
double pint;
double liter;
double gallon;
int choice;

void con_cups() {
	cout << "please enter the number of cups you have: " << endl;
	cin >> cups;
	cout << "Would you like to convert your cups to: \n1. Ounces \n2. Pints \n3. Liters \n4. Gallons" << endl;
	cin >> choice;
	switch (choice) {
	case 1:
		ounces = cups * 8;
		cout << " You have " << ounces << " ounces.";
		break;
	case 2:
		pint = cups * .5;
		cout << "You have " << pint << " pints";
		break;
	case 3:
		liter = cups * .236588;
		cout << "You have " << liter << " liters";
		break;
	case 4:
		gallon = cups * .0625;
		cout << "You have " << gallon << " gallons";
		break;
	default:
		cout << "Invalid entry";
		break;
	}
}

void con_pints() {
	cout << "please enter the number of pints you have: " << endl;
	cin >> pint;
	cout << "Would you like to convert your cups to: \n1. Ounces \n2. Cups \n3. Liters \n4. Gallons" << endl;
	cin >> choice;
	switch (choice) {
	case 1:
		ounces = pint * 16;
		cout << " You have " << ounces << " ounces.";
		break;
	case 2:
		cups = pint * 2;
		cout << "You have " << cups << " cups";
		break;
	case 3:
		liter = pint * .473176;
		cout << "You have " << liter << " liters";
		break;
	case 4:
		gallon = pint * .125;
		cout << "You have " << gallon << " gallons";
		break;
	default:
		cout << "Invalid entry";
		break;
	}
}

void con_ounces() {
	cout << "please enter the number of ounces you have: " << endl;
	cin >> ounces;
	cout << "Would you like to convert your ounces to: \n1. Cups \n2. Pints \n3. Liters \n4. Gallons" << endl;
	cin >> choice;
	switch (choice) {
	case 1:
		cups = ounces * .125;
		cout << " You have " << cups << " cups.";
		break;
	case 2:
		pint = ounces * .0625;
		cout << "You have " << pint << " pints";
		break;
	case 3:
		liter = ounces * .0295735;
		cout << "You have " << liter << " liters";
		break;
	case 4:
		gallon = ounces * .0078125;
		cout << "You have " << gallon << " gallons";
		break;
	default:
		cout << "Invalid entry";
		break;
	}
}

void con_liters() {
	cout << "please enter the number of liters you have: " << endl;
	cin >> liter;
	cout << "Would you like to convert your liters to: \n1. Ounces \n2. Pints \n3. Cups \n4. Gallons" << endl;
	cin >> choice;
	switch (choice) {
	case 1:
		ounces = liter * 33.814;
		cout << " You have " << ounces << " ounces.";
		break;
	case 2:
		pint = liter * 2.11338;
		cout << "You have " << pint << " pints";
		break;
	case 3:
		cups = liter * 4.22675;
		cout << "You have " << liter << " liters";
		break;
	case 4:
		gallon = liter * .264172;
		cout << "You have " << gallon << " gallons";
		break;
	default:
		cout << "Invalid entry";
		break;
	}
}

void con_gallons() {
	cout << "please enter the number of gallons you have: " << endl;
	cin >> gallon;
	cout << "Would you like to convert your gallons to: \n1. Ounces \n2. Pints \n3. Liters \n4. Cups" << endl;
	cin >> choice;
	switch (choice) {
	case 1:
		ounces = gallon * 128;
		cout << " You have " << ounces << " ounces.";
		break;
	case 2:
		pint = gallon * 8;
		cout << "You have " << pint << " pints";
		break;
	case 3:
		liter = gallon * 3.78541;
		cout << "You have " << liter << " liters";
		break;
	case 4:
		cups = gallon * 16;
		cout << "You have " << cups << " cups";
		break;
	default:
		cout << "Invalid entry";
		break;
	}
}

int main() {
	char answer;
	while (true){
	cout << "Do you want to convert: \n1. Cups \n2. Pints \n3. Ounces \n4. Liters \n5. Gallons" << endl;
	cin >> convert;
		switch (convert) {
		case 1:
			con_cups();
			break;
		case 2:
			con_pints();
			break;
		case 3:
			con_ounces();
			break;
		case 4:
			con_liters();
			break;
		case 5:
			con_gallons();
			break;
		default:
			cout << "Invalid entry";
			break;
		}
		cout << "\nWould you like to convert something else? [Y or N]: ";
		cin >> answer;
		if (toupper(answer) == 'Y') {
			continue;
		}
		else {
			return 0;
		}
	}

	return 0;
}
