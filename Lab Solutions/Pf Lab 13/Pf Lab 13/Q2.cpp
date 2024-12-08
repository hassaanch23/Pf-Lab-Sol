//#include <iostream>
//#include <fstream>
//using namespace std;
//int main()
//{
//	char str[100];
//	int choice;
//	cout << " Please select any one option : \n";
//	cout << " 1. Encrypt\n2. Decrypt\n";
//	cin >> choice;
//	if (choice == 1)
//	{
//		fstream file;
//		file.open("input.txt", ios::in);
//		cout << " The file after encryption is : " << endl;
//		while (file >> str)
//		{
//
//			if (file.is_open())
//			{
//
//				for (int i = 0; (i < 100 && str[i] != '\0'); i++)
//				{
//					str[i] = str[i] + 1;
//					cout << str[i];
//					fstream file1;
//					file1.open("Encrypt.txt", ios::app);
//					file1 << str[i];
//					file1.close();
//				}
//			}
//			else
//			{
//				cout << " Error !";
//			}
//		}
//	}
//	else if (choice == 2)
//	{
//		fstream filee;
//		filee.open("Encrypt.txt", ios::in);
//		if (filee.is_open())
//		{
//			cout << " The file after decryption is : " << endl;
//			while (filee >> str)
//			{
//				for (int i = 0; (i < 100 && str[i] != '\0'); i++)
//				{
//					str[i] = str[i] - 1;
//					cout << str[i];
//					fstream file2;
//					file2.open("Decrypt.txt", ios::app);
//					file2 << str[i];
//					file2.close();
//				}
//			}
//		}
//		else
//		{
//			cout << " Error ! " << endl;
//		}
//	}
//	else
//	{
//		cout << " Please select valid option.";
//	}
//
//}
