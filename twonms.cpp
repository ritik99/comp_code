#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long int a, b, n;
		cin >> a >> b >> n;
		long long int c, d;
		long long int for_a, for_b;
		long long int two = (long long int)pow(2, n/2);
		if(n%2 == 0){
			
			for_a = a * two;
			for_b = b * two;
		}
		else{
			for_a = a * two * 2;
			for_b = b * two;

		}
		if(for_a >= for_b) cout << (long long int)for_a/for_b << endl;
		else cout << (long long int)for_b/for_a << endl;

	}
	return 0;
}