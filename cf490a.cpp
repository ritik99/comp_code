#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main(){
	int n;
	int pro = 0;
	int mat = 0;
	int pe = 0;
	int cat;
	cin >> n;
	vector<pair<int, int> > arr;
	for(int i = 0; i < n; i++){
		cin >> cat;
		if(cat == 1) pro++;
		else if(cat == 2) mat++;
		else if(cat == 3) pe++;
		arr.push_back(make_pair(cat, i+1));
	}
	if(pro == 0 || mat == 0 || pe == 0) cout << 0;
	else{
		int ma = min(pro, min(mat, pe));
		sort(arr.begin(), arr.end());
		cout << ma << endl;
		for(int i = 0; i < ma; i++){
			cout << arr[i].second << " " << arr[i+pro].second << " " << arr[i+pro+mat].second << endl;
		}
	}
	return 0;
	

}