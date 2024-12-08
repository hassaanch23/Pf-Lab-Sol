//#include <iostream>
//using namespace std;
//
//int largestNo(int arr[]) {
//
//	for (int i = 1; i < 10; i++) {
//		int CurrentNo = arr[i];
//		int j = i - 1;
//		while (arr[j] > CurrentNo && j >= 0) {
//			arr[j + 1] = arr[j];
//			j--;
//		}
//		arr[j + 1] = CurrentNo;
//	}
//	return arr[9];
//}
//int main() {
//	int arr[10];
//	
//	for (int i = 0; i < 10; i++) {
//		cout << "Enter a Number for Index " << i << ": ";
//		cin >> arr[i];
//	}
//	cout << "The Largest Number is " << largestNo(arr) << endl;
//	return 0;
//}