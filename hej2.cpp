#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long int r, s, p;
		bool flag = false;
		cin >> r >> s >> p;
		long int sum = 1;
		long int a = 1;
		vector<long int> vec;
		if(s == 1) cout << 1 << endl;
		
		else if(r != 1){
			for(int i = 1; i < p; i++){
				sum = sum + (a*r)%p;
				vec.push_back(sum%p);
				if(sum%p == s){
					cout << i + 1 << endl;
					flag = true;
					break;
				}
				else if(sum%p == vec[0] && i!=1){
					break;
				}
				a = (a*r)%p;
			}
		}
		else{ 
			cout << s + 1<< endl;
			flag = true;
			break;
		}
		
		if(flag == false) cout << -1 << endl;
	}
	return 0;
}