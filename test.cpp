#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

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
						cout << "perm" << " " << perm << endl;
						while(temp != perm){
							next_permutation(list, list + 5);
							temp = list[0]*10000 + list[1]*1000 + list[2]*100 + list[3]*10 + list[4];
							v.push_back(temp);	
							//cout << perm << " ";
							cout << temp << endl;
						}
						v.pop_back();
					}
				}
			}
		}
	}
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << endl;
	}
	return 0;
}