#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main(){
	long int n;
	vector<pair<long int, long int> > a;
	vector<pair<long int, long int> > b;
	cin >> n;
	long int val;
	for(long int i = 0; i < n; i++){
		cin >> val;
		a.push_back(make_pair(val, i));
	}
	for(long int i = 0; i < n; i++){
		cin >> val;
		b.push_back(make_pair(val, i));
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	if(a[0].second == b[0].second){
		if((a[0].first + b[1].first) < (a[1].first + b[0].first)) cout << a[0].first + b[1].first;
		else cout << a[1].first + b[0].first;
	}
	else cout << a[0].first + b[0].first;
	return 0;

}