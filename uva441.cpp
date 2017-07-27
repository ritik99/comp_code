/*#include<iostream>
using namespace std;
int main(){
	int k;
	cin >> k;
	while(k!= 0){
		int arr[k];
		for(int i = 0; i < k; i++){
			cin >> arr[i];
		}
		for(int l = 0; l < k; l++){
			for(int m = l + 1; l < k; m++){
				for(int n = m + 1; n < k; n++){
					for(int o = n + 1; o < k; o++){
						for(int p = o + 1; p < k; p++){
							for(int q = p + 1; q < k; q++){
								cout << arr[l] << " " << arr[m] << " " << arr[n] << " " << arr[o] << " " << arr[p] << " " << arr[q] << endl;
							}
						}
					}
				}
			}
		}
		cout << endl;
		cin >> k;
	}
	return 0;
}*/
#include <stdio.h>  
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
 int main()  
 { 
   //int l[] = {9,8,7};

   int i,j,k,l;
   int name;  
   int lotto[] = {0,1,2,3,4,5,6,7,8,9}; 
   vector<int> arr;
     for(i = 0 ; i < 10 ; i++)  
     {  
       for(j = i+1 ; j < 10 ; j++)  
       {  
         for(k = j+1 ; k < 10 ; k++)  
         {  
           for(l = k+1 ; l < 10 ; l++)  
           {  
              int m[] = {lotto[i], lotto[j], lotto[k], lotto[l]};
              int first = lotto[i]*1000 + lotto[j]*100 + lotto[k]*10 + lotto[l];
              arr.push_back(first);
              next_permutation(m, m + 4);
              int wallah = m[i]*1000 + m[j]*100 + m[k]*10 + m[l];
              while(wallah != first){
                wallah = m[i]*1000 + m[j]*100 + m[k]*10 + m[l];
                arr.push_back(wallah);
                cout << arr.back() << endl;
                next_permutation(m, m + 4); 
              }
              
            }  
          }  
        }  
      } 
   return 0;  
 }  