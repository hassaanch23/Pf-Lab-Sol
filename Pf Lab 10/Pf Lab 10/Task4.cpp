//#include <iostream>
//using namespace std;
//
//int SelectionSort(int arr[]) {
//	for (int i = 0; i < 10 - 1; i++) {
//		for (int j = i + 1; j < 10; j++) {
//			if (arr[j] < arr[i]) {
//				int temp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = temp;
//			}
//		}
//	}
//	return arr[0];
//}
//int main() {
//	int arr[100];
//	
//	for (int i = 0; i < 10; i++) {
//		cout << "Enter a Number for Index " << i << ": ";
//		cin >> arr[i];
//	}
//	cout << "The Smallest Number is: " << SelectionSort(arr) << endl;
//}