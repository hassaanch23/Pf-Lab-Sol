//#include <iostream>
//using namespace std;
//
//double Fallingdistance(double Time,double gravity,double &Sum) {
//	double d = (1.0 / 2.0) * gravity * (Time * Time);
//	Sum = Sum + d;
//	return d;
//}
//int main() {
//	double Time, Sum = 0;
//	const double gravity = 9.8;
//	for (int i = 1; i <= 10; i++) {
//		cout << "What is the Falling Time of Object: ";
//		cin >> Time;
//		cout << Fallingdistance(Time, gravity,Sum) <<" meters." << endl;
//	}
//	cout << "The Total Distance is: " << Sum << endl;
//}