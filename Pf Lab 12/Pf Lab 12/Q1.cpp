//#include <iostream>
//using namespace std;
//
//int Trace(int Data[][10], int N) {
//	int Sum = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = i; j <= i; j++) {
//			Sum = Sum + Data[i][j];
//		}
//	}
//	cout << endl;
//	return Sum;
//}
//int main() {
//	int Data[10][10];
//	int Size;
//
//	cout << "Enter the size of Square: ";
//	cin >> Size;
//
//	for (int i = 0; i < Size; i++) {
//		for (int j = 0; j < Size; j++) {
//			cout << "Enter the value of Index[" << i <<"]["<< j <<"] : ";
//			cin >> Data[i][j];
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < Size; i++) {
//		for (int j = 0; j < Size; j++) {
//			cout << Data[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "The Sum of Diagonal Entries is: " << Trace(Data, Size) << endl;
//}