//#include <iostream>
//using namespace std;
//
//double CalculateGPA(float a, float b) {
//	return a / b;
//}
//
//int main() {
//	char Grade;
//	float weightage = 0, sum = 0, A, credit_hours = 0;
//	for (int i = 1; i <= 5; i++) {
//		cout << "Enter grade: ";
//		cin >> Grade;
//		switch (Grade) {
//		case 'A':
//			weightage = 4;
//			break;
//		case 'B':
//			weightage = 3;
//			break;
//		case 'C':
//			weightage = 2;
//			break;
//		case 'D':
//			weightage = 1;
//			break;
//		case 'F':
//			weightage = 0;
//			break;
//		default:
//			weightage = 0;
//		}
//		cout << "Enter credit hours for the course: ";
//		cin >> A;
//		credit_hours += A;
//		sum += (weightage * A);
//	}
//	cout << "GPA = " << CalculateGPA(sum, credit_hours);
//}