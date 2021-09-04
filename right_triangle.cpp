//Q6. Print this pattern using loops
#include <iostream>
using namespace std;
void func(int n)
{
	int i, j, k = n;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (j >= k)
				cout << "* ";
			else
				cout << " ";
		}
		k--;
		cout << "\n";
	}
}
int main()
{
	int n;
	cin>>n;
	func(n);
	return 0;
}
