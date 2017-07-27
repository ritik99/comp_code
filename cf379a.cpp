#include<iostream>
using namespace std;
int main(){
	int a, b;
	cin >> a >> b;
	int ans = a;
	int num_cand = a;
	int temp = 0;
	int tem = num_cand;
	while((num_cand+temp)/b > 0){
		ans += (num_cand+temp)/b;
		tem = (num_cand+temp)/b;
		temp = (num_cand+temp)%b;
		num_cand = tem;
	}
	cout << ans;
	return 0;
}
