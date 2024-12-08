//#include<iostream>
//using namespace std;
//int main()
//{
//	char One[100];
//	int Two[5]={0,0,0,0,0};
//	int Three[15];
//	int i = 0, count = 0,num=0,min=0;
//
//	cout << "Enter the sentence: ";
//	cin.getline(One, 100);
//
//	while (One[i] != '\0')
//	{
//		if (int(One[i]) == 32 || One[i] == '.')
//		{
//			for (int j = 0;Two[j + 1] == 0;j++)
//			{
//				Three[num] = count;
//				
//			}
//			num++;
//			count = 0;
//		}
//		else
//		{
//			count++;
//		}
//		i++;
//	}
//	for (int i = 0;i < num;i++)
//	{
//		cout << Three[i] << " ";
//	}
//	for (int i = 0;i < num;i++)
//	{
//		if (Three[i] < Three[i + 1])
//		{
//			min = Three[i];
//
//		}
//	}
//	cout << "\nMinimum : " << min;
//
//	return 0;
//
//}
