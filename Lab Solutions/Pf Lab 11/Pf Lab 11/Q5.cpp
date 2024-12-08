//#include <iostream>
//using namespace std;
//
//void Rotation(char User[], int N) {
//	int n = 1;
//	while (n <= N) {
//		int Temp = User[7];
//		for (int i = 6; i >= 0; i--) {
//			User[i + 1] = User[i];
//		}
//		User[0] = Temp;
//		n++;
//	}
//	cout << endl;
//	cout << "The Array after rotation is: ";
//	for (int i = 0; i < 8; i++) {
//		cout << User[i] << " ";
//	}
//	cout << endl;
//}
//
//
//int main() {
//	char User[8];
//	int N;
//	cout << "Enter any 7 Characters:\n";
//	for (int i = 0; i < 8; i++) {
//		cin >> User[i];
//	}
//	cout << "How many characters you want to rotate?\n";
//	cin >> N;
//	Rotation(User, N);
//}