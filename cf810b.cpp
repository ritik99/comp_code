#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
int main(){
unsigned int n, f;
cin >> n >> f;
unsigned int l, k;
unsigned int sold = 0;
vector<unsigned int> lis;
vector<unsigned int> kis;
vector<pair<unsigned int, unsigned int> > ans;
for(int i = 0; i < n; i++){
	cin >> k >> l;
	if(k<l){
		lis.push_back(l);
		kis.push_back(k);
		if(2*k > l) ans.push_back(l, k);
		else ans.push_back(make_pair(2*k, k);
	}
	else{
		if(k>l) sold = sold + l;
		else sold = sold + k;
		}
	
}
sort(ans.begin(), ans.end());
int n = 0;
while(n < f){
	sold = sold + ans[ans.size() - 1 - n].first - ans[ans.size() - 1 - n].second;
	n++;
}
cout << sold;
return 0;
}

		
