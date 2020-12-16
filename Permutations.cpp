#include <bits/stdc++.h> 
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
	
	size_t n;
	cin >> n;
	string str1 = "", str2 = "";
	if (n != 1 && n <= 3) {
		cout << "NO SOLUTION";
		return 0;
	}
	for (size_t i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			str1 += to_string(i) + " "; 
 		}
		else {
			str2 += to_string(i) + " ";
		}
	}
	cout << str1 + str2;
}

