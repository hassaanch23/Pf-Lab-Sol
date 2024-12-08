//#include <iostream>
//using namespace std;
//int main()
//{
//    int N, Factor, sign = -1;
//    float X, Y, Sum = 0;
//    cout << "Enter the value of x : ";
//    cin >> X;
//    cout << "Enter the value of n : ";
//    cin >> N;
//
//    for (int i = 1; i <= N; i += 2)
//    {
//        Y = 1;
//        Factor = 1;
//        for (int j = 1; j <= i; j++)
//        {
//            Y = Y * X;
//            Factor = Factor * j;
//        }
//        sign = -1 * sign;
//        Sum += sign * Y / Factor;
//    }
//    cout << "sin " << X << "= " << Sum;
//
//
//    return 0;
//
//}