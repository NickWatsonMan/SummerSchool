#include <iostream>

using namespace std;

int met(int n) {

	if (n < 1)
		return 0;
	if (n == 1)
		return 2;
	if (n == 2)
		return 3;
	return met(n - 1) + met(n - 2);

}

int main() {

	int n;
	cin >> n;
	if (1 <= n && n <= 40) {
    cout << met(n);
	}
	return 0;
}
