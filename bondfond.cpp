#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	unsigned long int n;
	cin >> n;
	while(n--){
		unsigned long long int a;
		cin >> a;
		int i = 0;
		int c = 1;
		//int prev = -1;
		while(c<=a){
			c = c * 2;
			i++;
		}
		cout << min(abs(a - c), abs(a - (c/2))) << endl;
	}
	return 0;
}