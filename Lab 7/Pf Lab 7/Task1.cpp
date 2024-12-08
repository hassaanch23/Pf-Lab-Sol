//#include <iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//
//    int Num1, Num2, Num, Digit,Sum, Count;
//
//    cout << "Enter first number: ";
//    cin >> Num1;
//    cout << "Enter second number: ";
//    cin >> Num2;
//    if (Num1 > Num2) {
//        Num1 = Num1 + Num2;
//        Num2 = Num1 - Num2;
//        Num1 = Num1 - Num2;
//    }
//
//    cout << "Armstrong numbers between " << Num1 << " and " << Num2 << " are: " << endl;
//
//    for (int i = Num1; i <= Num2; i++) {
//        Count = 0;
//        Num = i;
//        while (Num > 0) {
//            ++Count;
//            Num /= 10;
//        }
//        Sum = 0;
//        Num = i;
//        while (Num > 0) {
//            Digit = Num % 10;
//            Sum = Sum + pow(Digit, Count);
//            Num /= 10;
//        }
//        if (Sum == i) {
//            cout << i << ", ";
//        }
//    }
//
//    return 0;
//}