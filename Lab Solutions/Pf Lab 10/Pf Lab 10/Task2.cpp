//#include <iostream>
//using namespace std;
//
//bool IndexNumber(int arr[],int size, int Key) {
//	int Start = 0;
//	int End = size;
//	while (Start <= End){
//		int Middle_Entry = (Start + End) / 2;
//		if (arr[Middle_Entry] == Key) {
//			cout << "Yes, given number is present in the array." << endl;
//			return 1;
//		}
//		else if (arr[Middle_Entry] > Key)
//			End = Middle_Entry - 1;
//		else
//			Start = Middle_Entry + 1;
//	}
//	cout << "No, given number is not present in the array." << endl;
//	return 0;
//
//}
//
//void SortedArray(int arr[], int size){
//	int count = 1;
//
//
//	while (count<size){
//		for (int i = 0; i < (size - count); i++){
//			if (arr[i]>arr[i + 1]){
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}count++;
//	}
//}
//
//int main(){
//	int arr[100];
//	int Size;
//	cout << "Enter the size for Array: ";
//	cin >> Size;
//
//	for (int i = 0; i < Size; i++) {
//		cout << "Enter a Number for Index " << i << ": ";
//		cin >> arr[i];
//	}
//	int Key;
//	cout << "Please Enter a Key: ";
//	cin >> Key;
//
//	SortedArray(arr, Size);
//	IndexNumber(arr, Size, Key);
//
//	return 0;
//}