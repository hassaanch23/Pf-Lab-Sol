//#include <iostream>
//using namespace std;
//int main()
//{
//	char Month[4][31];
//	int Rainy = 0, Cloudy = 0, Sunny = 0, R1 = 0, S1 = 0, C1 = 0, R2 = 0, S2 = 0, C2 = 0, R3 = 0, S3 = 0, C3 = 0;
//
//	cout << "You have to Enter C for Cloudy Weather, S for Sunny Weather, R for Rainy Weather." << endl;
//	for (int i = 1; i <= 3; i++) {
//		cout << "\nMonth " << i << endl;
//
//		for (int j = 1; j <= 30; j++) {
//			cout << "Enter Weather for Day " << j << ": ";
//			cin >> Month[i][j];
//
//			while (Month[i][j] != 'S' && Month[i][j] != 'R' && Month[i][j] != 'C'&&Month[i][j] != 'r'&& Month[i][j] != 's'&& Month[i][j] != 'c') {
//				cout << "Enter the Correct Details: ";
//				cin >> Month[i][j];
//			}
//			if (Month[i][j] == 'R' || Month[i][j] == 'r') {
//				Rainy++;
//			}
//			else if (Month[i][j] == 'S' || Month[i][j] == 's') {
//				Sunny++;
//			}
//			else if (Month[i][j] == 'C' || Month[i][j] == 'c') {
//				Cloudy++;
//			}
//		}
//	}
//	cout << endl;
//	cout << "The Sunny Days in Whole 3 Months Period are: " << Sunny << endl;
//	cout << "The Rainy Days in Whole 3 Months Period are: " << Rainy << endl;
//	cout << "The Cloudy Days in Whole 3 Months Period are: " << Cloudy << endl;
//	cout << endl;
//
//	for (int i = 1; i <= 1; i++) {
//		for (int j = 1; j <= 30; j++) {
//			if (Month[i][j] == 'S' || Month[i][j] == 's') {
//				S1++;
//			}
//			else if (Month[i][j] == 'R' || Month[i][j] == 'r') {
//				R1++;
//			}
//			else if (Month[i][j] == 'C' || Month[i][j] == 'c') {
//				C1++;
//			}
//		}
//		cout << "The Total Rainy Days in Month " << i << " are: " << R1 << endl;
//		cout << "The Total Sunny Days in Month " << i << " are: " << S1 << endl;
//		cout << "The Total Cloudy Days in Month " << i << " are: " << C1 << endl;
//	}
//	cout << endl;
//	for (int i = 2; i <= 2; i++) {
//		for (int j = 1; j <= 30; j++) {
//			if (Month[i][j] == 'S' || Month[i][j] == 's') {
//				S2++;
//			}
//			else if (Month[i][j] == 'R' || Month[i][j] == 'r') {
//				R2++;
//			}
//			else if (Month[i][j] == 'C' || Month[i][j] == 'c') {
//				C2++;
//			}
//		}
//		cout << "The Total Rainy Days in Month " << i << " are: " << R2 << endl;
//		cout << "The Total Sunny Days in Month " << i << " are: " << S2 << endl;
//		cout << "The Total Cloudy Days in Month " << i << " are: " << C2<< endl;
//	}
//	cout << endl;
//	for (int i = 3; i <= 3; i++) {
//		for (int j = 1; j <= 30; j++) {
//			if (Month[i][j] == 'S' || Month[i][j] == 's') {
//				S3++;
//			}
//			else if (Month[i][j] == 'R' || Month[i][j] == 'r') {
//				R3++;
//			}
//			else if (Month[i][j] == 'C' || Month[i][j] == 'c') {
//				C3++;
//			}
//		}
//		cout << "The Total Rainy Days in Month " << i << " are: " << R3 << endl;
//		cout << "The Total Sunny Days in Month " << i << " are: " << S3 << endl;
//		cout << "The Total Cloudy Days in Month " << i << " are: " << C3 << endl;
//	}
//	cout << endl;
//	if (R1 > R2 && R1 > R3) {
//		cout << "Month 1 has Greatest Rainfall." << endl;
//	}
//	else if (R2>R1&&R2>R3){
//		cout << "Month 2 has Greatest Rainfall." << endl;
//	}
//	else if (R3 > R1 && R3 > R2) {
//		cout << "Month 3 has Greatest Rainfall." << endl;
//	}
//}