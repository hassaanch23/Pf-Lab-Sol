//#include <iostream>
//using namespace std;
//
//int Find2ndLargest(int Array[], int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (Array[i] < Array[j]) {
//				int X = Array[i];
//				Array[i] = Array[j];
//				Array[j] = X;
//			}
//		}
//	}cout << "2nd largest Number is: ";
//	return Array[1];
//}
//int searchData(int Array[],int n){
//	int key;
//	cout << "Enter the Key Value: ";
//	cin >> key;
//	for (int i = 0; i < n; i++) {
//		if (Array[i] == key) {
//			return i;
//		}
//	}
//	return -1;
//
//}
//void max(int Array[], int n)
//{
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (Array[j] > Array[i])
//			{
//				int temp = Array[j];
//				Array[j] = Array[i];
//				Array[i] = temp;
//			}
//		}
//	}
//	cout << "Max value is : " << Array[n - 1] << endl;
//}
//void min(int Array[], int n)
//{
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (Array[j] > Array[i])
//			{
//				int temp = Array[j];
//				Array[j] = Array[i];
//				Array[i] = temp;
//			}
//		}
//	}
//	cout << "Min value is : " << Array[0] << endl;
//}
//void FrequencyCheck (int Array[],int n){
//	int Key, Count = 0;
//cout << "\nEnter Key for printing Frequency: ";
//cin >> Key;
//for (int i = 0; i < 10; i++) {
//	if (Array[i] == Key)
//		Count++;
//}
//cout << "The Frequency of the Key " << Key << " is " << Count << endl;
//}
//
//int main()
//{
//	int n;
//	cout << "Enter the Size of Array: ";
//	cin >> n;
//
//	int Array[100];
//	for (int i = 0; i < n; i++) {
//		cout << "Enter the Number for Index " << i << ": ";
//		cin >> Array[i];
//	}
//
//	cout << Find2ndLargest(Array, n) << endl;
//	min(Array, n);
//	max(Array, n);
//	FrequencyCheck(Array, n);
//	cout<<searchData(Array, n);
//}