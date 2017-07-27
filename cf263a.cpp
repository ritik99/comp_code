#include<iostream>

using namespace std;

int main(){
	int m[5][5];
	int row, col;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			cin >> m[i][j];
			if(m[i][j] != 0){
				row = i;
				col = j;
			}
		}
	}
	//cout << row << endl;
	int ans = 0;
	if(row + 1 < 3) ans = ans + 3 - (row+1);
	else ans = ans + (row+1) - 3;
	//cout << ans << endl;
	if(col+1 < 3) ans = ans + 3 - (col+1);
	else ans = ans + col+1 - 3;
	cout << ans;
}