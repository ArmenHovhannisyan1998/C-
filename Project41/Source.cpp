#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	int i;
	int is_prime = true;

	cout << "Enter a number and press enter: ";
	cin >> n;

	i = 2;
	while (i <= sqrt(n)) {
		if (n % i == 0) {
			is_prime = false;
		}
		i++;
		if (is_prime) {
			cout << "Number is prime" << endl;
		}
		else {
			cout << "Number is not prime" << endl;
		}
	}
	system("PAUSE");
	return 0;

}