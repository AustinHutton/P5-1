#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	for (int i = 2; i <= 100; i = i + 2) {
		sum += i;
	}
	cout << "The sum of all even numbers between 2 and 100, inclusive, is " << sum << endl;
	int sqrSum = 0;
	for (int i = 1; i <= 100; i = i++) {
		sqrSum += i * i;
	}
	cout << "The sum of all squares between 1 and 100, inclusive, is " << sqrSum << endl;
	return 0;

}