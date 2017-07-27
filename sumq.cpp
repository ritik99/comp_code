/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		unsigned long int p, q, r;
		cin >> p >> q >> r;
		unsigned long long int A[p];
		unsigned long long int B[q];
		unsigned long long int C[r];
		for(int i = 0; i < p; i++) cin >> A[i];
		for(int i = 0; i < q; i++) cin >> B[i];
		for(int i = 0; i < r; i++) cin >> C[i];
		sort(A, A + p);
		sort(B, B + q);
		sort(C, C + r);
		bool flag = false;
		unsigned long long int ans = 0;
		for(int i = q-1; i >= 0; i--){
			for(int j = 0; j < p; j++){
				for(int k = 0; k < r; k++){
					if(B[i] >= A[j] && B[i] >= C[k]){
						ans += (A[j] + B[i])*(C[k] + B[i]);
						//cout << A[j] << " " << B[i] << " " << C[k] << endl;
					}
				}
			}
		}
		cout << ans%1000000007 << endl;
	}
return 0;

}*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int p = 100;
		int q = 100;
		int r = 100;
		cin >> p >> q >> r;
		long long int A[p];
		long long int B[q];
		long long int C[r];
		for(int i = 0; i < p; i++) {cin >> A[i];}
		for(int i = 0; i < q; i++) {cin >> B[i];}
		for(int i = 0; i < r; i++) {cin >> C[i];}
		//sort(A, A + p);
		//sort(B, B + q);
		//sort(C, C + r);
		bool flag = false;
		long long int ans = 0;
		for(int i = 0; i < q; i++){
			for(int j = 0; j < p; j++){
				for(int k = 0; k < r; k++){
					if(B[i] >= A[j] && B[i] >= C[k]){
						ans += (A[j] + B[i])*(C[k] + B[i]);
						cout << A[j] << " " << B[i] << " " << C[k] << endl;
					}
				}
			}
		}
		cout << ans%1000000007 << endl;
	}
return 0;

}