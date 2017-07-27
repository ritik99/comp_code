#include<iostream>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<cstdio>
using namespace std;

int func(std::map<int, std::vector<int> > mp, int a){
	//bool flag = true;
	queue<int> q;
	int color[100000] = {0};
	bool discovered[100000] = {0};
	vector<int> arr;
	q.push();
	int layer = 1;
	while(!q.empty()){
		int t = q.front();
		if(discovered[t] == 0){
			discovered[t] = 1;
			arr.push_back(t);
			if(layer%2 == 1) color[t] = 1;
			else color[t] = 2;
		}
		for(int i = 0; i < mp[t].size(); i++){
			if(discovered[mp[t][i]] == 0){
				if(layer%2 == 1) color[mp[t][i]] = 2;
				else color[mp[t][i]] = 1;
				discovered[mp[t][i]] = 1;
				arr.push_back(mp[t][i]);
				q.push(mp[t][i]);
			}
		}
		layer++;
		q.pop();
	}
	bool flag = true;
	for(map<int, std::vector<int> >::iterator it = mp.begin(); it != mp.end(); it++){
		for(int i = 0; i < (it->second).size(); i++){
			if(color[it->first] == color[(it->second)[i]]){
				cout << "NOT BICOLORABLE." << endl;
				flag = false;
				return 0;
			}
		}
	}
	if(flag == true) cout << "BICOLORABLE." << endl;

	/*for(int i = 0; i < arr.size(); i++){
		cout << arr[i] << " ";
	}*/
	return 0;
}

int main(){
	//freopen ("uva10004.txt", "w", stdout);
	int a, b;
	cin >> a >> b;
	map<int, std::vector<int> > mp;
	for(int o = 0; o < b; o++){
		//int ed;
		int m, n;
		cin >> m >> n;
		if(mp.find(m) != mp.end()){
			vector<int>::iterator pos = find(mp[m].begin(), mp[m].end(), n);
			if(pos == mp[m].end()) mp[m].push_back(n);
			else mp[m].erase(pos);
		}
		else{
			mp[m].push_back(n);
		}
		func(mp, a);
			
			//mp[b].push_back(a);
		//cin >> n;
	}
	return 0;
}