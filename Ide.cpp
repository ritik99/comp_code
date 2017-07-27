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
for(unsigned int i = 0; i < n; i++){
	cin >> k >> l;
	//cout << k << " " << l << endl;
	if(k!=0){
	if(k<l){
		lis.push_back(l);
		kis.push_back(k);
		if(2*k > l){
		    ans.push_back(make_pair(l, k));
		    //cout << l << " " << l << endl;
		    sold += k;
		}
		else{
		    ans.push_back(make_pair(2*k, l));
		    //cout << 2*k << " " << l << endl;
		    sold+= k;
		}
	}
	else sold = sold + l;


	//cout << sold << endl;
	}
}
sort(ans.begin(), ans.end());
unsigned int q = 0;
while(q < f){
	sold = sold + ans[ans.size() - 1 - q].first - ans[ans.size() - 1 - q].second;
	q++;
	//cout << sold << endl;
}
cout << sold;
return 0;
}
