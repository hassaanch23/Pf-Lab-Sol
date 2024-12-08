//#include <iostream>
//#include<limits.h>
//using namespace std;
//
//void GreatestAmount(int Food[][10]) {
//	int Monkey, Max = INT_MIN, Day;
//	cout << "\n-------------------------------------------------------------------\n";
//	cout << "For which monkey you want to calculate Greatest amount of food: ";
//	cin >> Monkey;
//	while (Monkey < 1 || Monkey>3) {
//		cout << "Enter a number between 1 and 3: ";
//		cin >> Monkey;
//	}
//
//	for (int i = Monkey; i <= Monkey; i++) {
//		for (int j = 1; j <= 5; j++) {
//			if (Food[i][j] > Max) {
//				Max = Food[i][j];
//				Day = j;
//			}
//		}
//	}
//	cout << "\nThe greatest amount of food eaten by Monkey " << Monkey << " is on Day " << Day << " = " << Max << endl;
//}
//void LeastFood(int Food[][10]) {
//	int Monkey, Least = INT_MAX, Day;
//	cout << "\n----------------------------------------------------------\n";
//	cout << "For which monkey you want to calculate least food: ";
//	cin >> Monkey;
//	while (Monkey < 1 || Monkey>3) {
//		cout << "Enter a number between 1 and 3: ";
//		cin >> Monkey;
//	}
//
//	for (int i = Monkey; i <= Monkey; i++) {
//		for (int j = 1; j <= 5; j++) {
//			if (Food[i][j] < Least) {
//				Least = Food[i][j];
//				Day = j;
//			}
//		}
//	}
//	cout << "\nThe least amount of food eaten by Monkey " << Monkey << " is on Day " << Day << " = " << Least << endl;
//}
//
//void Average(int Food[][10]) {
//	int Day;
//	int Sum = 0;
//	float Average;
//
//	cout << "Enter the Day: ";
//	cin >> Day;
//	while (Day < 0 || Day>5) {
//		cout << "Enter a Day between 1 and 5: ";
//		cin >> Day;
//	}
//
//	if (Day <= 5 && Day > 0) {
//		for (int i = 1; i <= 3; i++) {
//			for (int j = Day; j <= Day; j++) {
//				Sum = Sum + Food[i][j];
//			}
//		}
//		cout << endl;
//		Average =float( Sum / 3.0);
//		cout << "The Average amount of Food Eaten by the whole Family of monkeys on Day " << Day << " is: " << Average << endl;
//	}
//}
//int main() {
//	int Food[10][10];
//
//	for (int i = 1; i <= 3; i++) {
//		cout << "Enter the Food Eaten by Monkey " << i << " on: " << endl;;
//		for (int j = 1; j <= 5; j++) {
//			cout << "Day " << j << ": ";
//			cin >> Food[i][j];
//			while (Food[i][j] < 0) {
//				cout << "Enter a Positive Value: ";
//				cin >> Food[i][j];
//			}
//		}
//		cout << endl;
//	}
//	Average(Food);
//	LeastFood(Food);
//	GreatestAmount(Food);
//}