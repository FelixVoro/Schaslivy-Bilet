#include<iostream>
using namespace std;
int main() {
	int a, f, s, f2, s2;
	cin >> a;
	f = a / 1000;
	s = a % 1000;
	f2 = f/100 +f/10%10+f%10;
	s2 = s / 100 + s / 10 % 10 + s % 10;
	if (f2 == s2)
		cout << "YES";
	else
		cout << "NO";

}