#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
using namespace std;
int func(map<int, vector<int> > mp, int arg, int arr[], int n){

	for(int i = 0; i < arg; i++){
		int count = 0;
		if(mp.find(arr[i]) != mp.end()){
			queue<int> q;
			vector<int> explored;
			q.push(arr[i]);
			while(!q.empty()){
				//cout << q.front() << endl;
				//cout << "in" << endl;
				int t = q.front();
				//cout << "tmp[t].size()" << mp[t].size() << endl;
				for(int p = 0; p < mp[t].size(); p++){
					if(find(explored.begin(), explored.end(), mp[t][p]) == explored.end()){
						//cout << "explored.push_back(mp[t][p]); " << mp[t][p] << endl;
						explored.push_back(mp[t][p]);
						q.push(mp[t][p]);
						count++;
					}
				}
				q.pop();
			}
			//cout << explored.size() << endl;
			sort(explored.begin(), explored.end());
			/*for(int i = 0; i < explored.size(); i++){
				cout << explored[i] << " ";
			}
			cout << endl;*/
			cout << n - count;
			/*for(vector<int>::iterator i = explored.begin(); i != explored.end(); i++){
				cout << *i << " ";
			}*/
			//cout << " ";
			for(int r = 1; r <= n; r++){
				if(r == explored[0]){
					explored.erase(explored.begin());
				}
				else{
					cout << " " << r;
					//if(r > explored[0]) explored.erase(explored.begin());
				}
			}
			}
		else{
			cout << n;
			for(int z = 1; z <= n; z++){
				cout << " " << z;
			}
		}
		cout << endl;
	}
	return 0;
}
int main(){
	freopen ("uva280.txt", "w", stdout);
	int n = -1;
	cin >> n;
	while(n != 0){
		std::map<int, vector<int> > mp;
		int x;
		int j;
		cin >> j;
		while(j != 0){
			cin >> x;
			while(x != 0){
				mp[j].push_back(x);
				cin >> x;
			}
			cin >> j;
		}
		/*for(int i = 1; i <= n; i++) {
			cout << i << " : ";
			for(int w = 0; w < mp[i].size(); w++){
				cout << mp[i][w] << " ";
			}
		}*/
		int arg;
		cin >> arg;
		int arr[arg];
		for(int i = 0; i < arg; i++){
			cin >> arr[i];
		}
		func(mp, arg, arr, n);
		cin >> n;
	}
	return 0;
}