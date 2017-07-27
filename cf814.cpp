#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int n, k;
	int hita[101] = {0};
	int kak[101] = {0};
	cin >> n >> k;
	vector<int> pos;
	hita[100] = 10000;
	int temp = -1;
	bool flag = false;
	for(int i = 0; i < n; i++){
		cin >> hita[i];
		if(hita[i] == 0) pos.push_back(i);
		else if(hita[i] < temp){
			flag = true;
			//cout << "HERE" << endl;
			temp = hita[i];
		}
		else temp = hita[i];
	
	}
	for(int j = 0; j < k; j++){
		cin >> kak[j];
	}
	//bool flag = false;
	sort(kak, kak + k);
	/*for(int i = 0; i < k; i++){
		cout << kak[i] << endl;
	}*/
	if(flag == true) cout << "Yes" << endl;
	else{
		if(pos[0] == 0){
			if(pos[1] == 1){
				cout << "Yes" << endl;
				return 0;
			}
			else if(kak[k-1] > hita[1]){
				cout << "Yes" << endl;
				return 0;
			}
		}
		else{
			//cout << "HERE" << endl;
			for(int i = 0; i <= k-1; i++){
				//cout << kak[k-1] << endl;
				//cout << i << " " << pos[i] << endl;
				if(i < k-1){
				if(pos[i+1] == pos[i] + 1){
					cout << "Yes" << endl;
					return 0;
				}
			}
				if(hita[pos[i]-1] > kak[0]){

					cout << "Yes" << endl;
					return 0;
				}
				//cout << "Heere" << endl;
				if(pos[i] < n-1){
					//cout << "h" << endl;
					if(hita[pos[i]+1] < kak[k-1]){
					//cout << "HERE" << endl;
					cout << "Yes" << endl;
					return 0;
				}
				}
			}
		}
		}
	if(flag == false) cout << "No" << endl;
	//else cout << "Yes" << endl;
	return 0;
}