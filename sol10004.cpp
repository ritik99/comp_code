#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
#include<queue>
#define pb push_back
using namespace std;

int main()
{
    int i,l,x,p,e,num[1000],d,y;
    bool b;
    queue<int>q;
    vector<int>v[1000];
    while(cin>>p)
    {
        if(p==0)
        return 0;
        else
        {
             b=true;
             cin>>d;
            for(i=0;i<d;i++)
            {
                cin>>x>>y;
                v[x].pb(y);
                v[y].pb(x);
            }
            memset(num,-1,sizeof(num));
            num[0]=0;
            q.push(0);
            while(!q.empty())
            {
                x=q.front();
                q.pop();
                l=v[x].size();
                for(i=0;i<l;i++)
                {
                    if(num[v[x][i]]==-1)
                    {
                        if(num[x]==0)
                        num[v[x][i]]=1;
                        else
                        num[v[x][i]]=0;
                        q.push(v[x][i]);
                    }
                    else
                    {
                        if(num[v[x][i]]==num[x])
                        {
                            b=false;
                            break;
                        }
                    }
                }
                if(b==false)
                break;
            }
        if(b==true)
        cout<<"BICOLORABLE."<<endl;
        else
        cout<<"NOT BICOLORABLE."<<endl;
        for(i=0;i<p;i++)
        v[i].clear();
        q=queue<int>();
        }
    }
return 0;
}