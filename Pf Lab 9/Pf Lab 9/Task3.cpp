//#include <iostream>
//using namespace std;
//
//void SortArray(int Num[], int Size) {
//
//	for (int i = 0; i < Size; i++) {
//		cout << "Enter a Number for Index " << i << ": ";
//		cin >> Num[i];
//	}
//	int counter = 1;
//	while (counter < Size) {
//		for (int i = 0; i < Size - counter; i++) {
//			if (Num[i] > Num[i + 1]) {
//				int Count = Num[i];
//				Num[i] = Num[i + 1];
//				Num[i + 1] = Count;
//			}
//		}
//		counter++;
//	}
//	cout << endl;
//	for (int i = 0; i < Size; i++) {
//		cout << Num[i] << " ";
//	}cout << endl;
//}
//int main()
//{
//	int size;
//	int Number[100] = { 0 };
//	cout << "Enter the size of Array: ";
//	cin >> size;
//	SortArray(Number, size);
//}