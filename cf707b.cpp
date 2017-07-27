#include<iostream>
#include<queue>
#include<algorithm>
#include<functional>
#include<vector>
#include<utility>

using namespace std;

typedef long int li;
#define MAX 100000

vector<pair<li, li> > mp[MAX];
//vector<li> ind;
li arr[MAX];
//bool not_in(li arr[], li k, )
int main(){
	li n, m, k;
	cin >> n >> m >> k;
	li u, v, l;
	for(li i = 0; i < m; i++){
		cin >> u >> v >> l;
		mp[u].push_back(make_pair(v, l));
		mp[v].push_back(make_pair(u, l));
		//ind.push_back(u);
		//ind.push_back(v);
	}
	for(li i = 0; i < k; i++){
		cin >> arr[i];
	}
	bool possi = false;
	for(li i = 0; i < k; i++){
		//cout << arr[i] << " " << mp[arr[i]].size() << endl;
		if(mp[arr[i]].size() > 0){
			possi = true;
			break;
		}
	}
	if(possi == false){
		cout << -1;
	}
	else{
		li ans = 10000000000;
		for(li i = 0; i < k; i++){
			for(li j = 0; j < mp[arr[i]].size(); j++){
				//cout << arr[i] << " " << mp[arr[i]][j].second << endl;
				if(mp[arr[i]][j].second < ans) ans = mp[arr[i]][j].second;
			}
		}
		cout << ans;
	}
	//yoyo
	return 0;
	//queue<li> q;
	

}