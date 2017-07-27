#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;
int same(int w, int u){
	int arr1[5];
	int arr2[5];
	int i = 0;
	int ten = 10000;
	for(ten; ten != 0; ten = ten/10){
		arr1[i] = w/ten;
		w = w - (w/ten)*ten;
		arr2[i] = u/ten;
		u = u - (u/ten)*ten;
		i++;
	}
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(arr1[i] == arr2[j]) return true;
		}
	}
	return false;
}
int main(){
	int n;
	
	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	vector<int> v;
	for(int i = 0; i < 10; i++){
		for(int j = i+1; j < 10; j++){
			for(int k = j+1; k < 10; k++){
				for(int l = k+1; l < 10; l++){
					for(int m = l+1; m < 10; m++){
						int list[] = {arr[i], arr[j], arr[k], arr[l], arr[m]};
						int perm = arr[i]*10000 + arr[j]*1000 + arr[k]*100 + arr[l]*10 + arr[m];
						v.push_back(perm);
						int temp = 0;
						while(temp!= perm){
							next_permutation(list, list + 5);
							temp = list[0]*10000 + list[1]*1000 + list[2]*100 + list[3]*10 + list[4];
							v.push_back(temp);	
						}
						v.pop_back();
					}
				}
			}
		}
	}
	/*for(unsigned long int i = 0; i < (unsigned long int)v.size(); i++){
		if(v[i] == 12345) cout << "true" << endl;
		//cout << v[i] << endl;
	}*/
	sort(v.begin(), v.end());
	//cin >> n;
	int q = 1;
	while(cin >> n && n != 0){
		if(q != 1) cout << endl;
		int i = 0;
		int u = v[i];
		int count = 0;
		while(u <= 98765/n){
			int w = u*n;
			if((find(v.begin(), v.end(), w) != v.end()) && same(w, u) != true){
				cout << w << " / " << setfill('0') << setw(5) << u << " = " << n << endl;
				count++;
			}
			i++;
			u = v[i];
		}
		if(count == 0) cout << "There are no solutions for " << n << "." << endl;
		//cin >> n;
		//cout << endl;
		q++;
	}
	return 0;
}