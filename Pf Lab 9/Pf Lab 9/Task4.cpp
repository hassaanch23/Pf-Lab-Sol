//#include <iostream>
//using namespace std;
//
//void Rotation(int i[], int j, int k) {
//
//	k = k % j;
//
//	for (int i1 = 0; i1 < j; i1++) {
//		if (i1 < k) {
//			cout << i[j + i1 - k] << " ";
//		}
//		else
//			cout << (i[i1 - k]) << " ";
//	}
//	cout << "";
//}
//int main()
//{
//	int Array[10];
//
//	for (int a = 0; a < 10; a++) {
//		cout << "Enter the Number for Index " << a << ": ";
//		cin >> Array[a];
//	}
//	int N = sizeof(Array) / sizeof(Array[0]);
//	int K;
//	cout << "Enter the amount of digits you want to rotate: ";
//	cin >> K;
//
//	Rotation(Array, N, K);
//}