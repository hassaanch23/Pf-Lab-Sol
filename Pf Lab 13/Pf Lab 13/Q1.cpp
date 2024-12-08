//#include<iostream>
//#include<fstream>
//using namespace std;
//int main()
//{
//	int line, i = 0, j = 0;
//	ifstream file;
//	file.open("Numbers.txt", ios::in);
//	{
//
//		while (file >> line)
//			if (file.is_open())
//			{
//				if (line % 2 == 0)
//				{
//					ofstream file1;
//					file1.open("Even file.txt", ios::app);
//					file1 << line << " ";
//					i++;
//				}
//				else
//				{
//					ofstream file2;
//					file2.open("Odd file.txt ", ios::app);
//					file2 << line << " ";
//					j++;
//				}
//			}
//			else
//
//			{
//				cout << "File Error!";
//			}
//	}
//	cout << "The number of Odd numbers are " << j << endl;
//	cout << "The number of Even numbers are " << i << endl;
//}
