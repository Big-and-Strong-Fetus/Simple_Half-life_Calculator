#include <bits/stdc++.h>
using namespace std;

int main() {
	float d, x = 0; 
	int h, t; 
	cout << "Dose (mg)? "; 
	cin >> d; 
	cout << "Half-life (hours)? * Must be whole number * "; 
	cin >> h; 
	cout << "Time between doses (hours)? * Must be whole number *"; 
	cin >> t; 
	cout << "\n" << "Amount of substance accumulated at each dose taken: " << "\n";
	for (int i = 1; i <= 50 * t; i++) {
		if (i % h == 0) { 
			x = x/2; 
		}
		if (i % t == 0) {
			x += d; 
			cout << "\n" << x; 
		}
	}
	return 0;
}
 

