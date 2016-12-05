 /*************************************************************************
 > File Name: jd1338.cpp
	> Author:ukiy 
	> Mail: 
	> Created Time: 2016年12月05日 星期一 20时21分16秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<climits>
#include<string>
#include<cstring>
#include<vector>
#include<set>
#include<list>
#include<map>
#include<queue>
#define rep(i,a,b) for(int i=(a);i<=(b);(i++))
#define inf 0x3f3f3f
#define ll long long
#define pi acos(-1)
int dire[4][2]={ {0,1},{1,0},{0,-1},{-1,0} };
int dire2[8][2]={{-1,-1},{-1,0},{-1,1},{ 0,-1},{ 0,1},{ 1,-1},{ 1,0},{ 1,1}};
int dire3[6][3]={ {0,0,1},{0,1,0},{1,0,0},{0,0,-1},{0,-1,0},{-1,0,0} };
using namespace std;
ll f[72];
void init(){
    f[1]=1;
    f[2]=2;
    rep(i,3,72){
        f[i]=f[i-1]+f[i-2];
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    //freopen("in.txt","r",stdin);
    init();
    int n;
    while(cin>>n){
        printf("%lld\n",f[n]);
    }

    return 0;
}
