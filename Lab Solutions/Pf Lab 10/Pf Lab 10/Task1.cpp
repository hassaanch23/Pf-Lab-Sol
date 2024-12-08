//#include<iostream>
//using namespace std;
//
//int IndexNumber(int arr[],int Key) {
//	int Start = 0;
//	int End = 10;
//	while (Start <= End){
//		int Middle_Entry = (Start + End) / 2;
//		if (arr[Middle_Entry] == Key)
//			return Middle_Entry;
//		else if (arr[Middle_Entry] > Key)
//			End = Middle_Entry - 1;
//		else
//			Start = Middle_Entry + 1;
//	}
//	cout << "The key is not present in the Array." << endl;
//	return -1;
//
//}
//int main(){
//	int arr[10];
//
//	for (int i = 0; i < 10; i++){
//		cout << "Enter a Number for Index " << i << ": ";
//		cin >> arr[i];
//		while (arr[i] < arr[i - 1]){
//			cout << "Number must be in sorted order." << endl;
//			cout << "Enter a Number for Index " << i << ": ";
//			cin >> arr[i];
//		}
//	}
//	int Key;
//	cout << "Please Enter a Key: ";
//	cin >> Key;
//
//	cout << "The Index of " << Key << " is: " << IndexNumber(arr, Key) << endl;
//
//	return 0;
//}