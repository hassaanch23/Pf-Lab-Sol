//#include <iostream>
//using namespace std;
//int main() {
//	int Number;
//	cout << "Enter a Number: ";
//	cin >> Number;
//
//	for (int i = 1; i <= Number; i++) {
//		for (int j = 1; j <= i; j++) {
//			cout << "*";
//		}
//		cout << endl;
//	}
//
//	cout << "\nEnter a Number: ";
//	cin >> Number;
//
//	for (int i = 1; i <= Number; i++) {
//		for (int j = 1; j <= 2 * i - 1; j++) {
//			cout << "*";
//		}
//		cout << endl;
//	}
//	for (int i = Number; i >= 1; i--) {
//		for (int j = 3; j <= 2 * i - 1; j++) {
//			cout << "*";
//		}
//		cout << endl;
//	}
//
//	cout << "\nEnter a Number to Print Rows of Binary Numbers: ";
//	cin >> Number;
//
//	for (int i = Number; i >= 1; i--) {
//		for (int j = 1; j <= 2 * i - 1; j++) {
//			if (j % 2 == 0) {
//				cout << "0";
//			}
//			else {
//				cout << "1";
//			}
//		}
//		cout << endl;
//	}
//}