#include<iostream>
#include<algorithm>
using namespace std;
int dp(int m, int val[], int tot){
	int a = 0;
	int b = 0;
	int diff[m+1][tot + 1] = {0};
	diff[0] = 0;
	for(int i = 0; i <= m; i++){
		for(int j = 0; j <= tot; j++){
			if(i == 0 || j ==0) diff[i][j] = 0;
			else if(val[i-1] < j){
				if(diff[i-1][j - val[i-1]] + val[i-1])
			}
		}

	}
	return diff[m][tot];
}
int main(){
	int n;
	cin >> n;
	while(n--){
		int m;
		cin >> m;
		int tot = 0;
		int val[m];
		for(int i = 0; i < m; i++){
			cin >> val[i];
			tot = tot + val[i];
		}
		cout << dp(m, val, tot) << endl;
	}
	return 0;
}