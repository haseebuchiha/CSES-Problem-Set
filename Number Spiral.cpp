#include <bits/stdc++.h> 
using namespace std;

int main()
{
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(0);
		
	size_t t;
	cin >> t;
	size_t row, col;
	for(size_t i=0; i<t; i++)
	{ 
		cin >> row >> col;
		if (row >= col)
		{
			//if even do this
			if (row % 2 == 0) {
				cout<<(row * row) - col + 1 << endl;
			}
			//else do this
			else {
				cout<<((row - 1) * (row - 1)) + col<<endl;
			}
		}
		else {
			//if even do this 
			if (col % 2 != 0) {
				cout << (col * col) - row + 1 << endl;
			}
			//else do this
			else {
				cout << (col - 1) * (col - 1) + row << endl;
			}
		}
	}
}

