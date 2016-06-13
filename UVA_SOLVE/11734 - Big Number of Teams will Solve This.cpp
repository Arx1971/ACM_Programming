#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>
#include <map>
#include <list>
#include <cstddef>
#include <cstdlib>
#include <cctype>
#include <iostream>
using namespace std;

#define INF_MAX 	2147483647
#define INF_MIN 	-2147483648
#define pb push_back
#define all(x) x.begin(),x.end()
#define distSqr(x1,y1,x2,y2) (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)
#define dist(x1,y1,x2,y2) sqrt(distSqr(x1,y1,x2,y2))
#define Set(x,v) memset(x,v,sizeof x)
#define For(i,s,e) for(i=s;i<=e;i++)
#define lb lower_bound
#define ub upper_bound
#define gcd(a,b) __gcd(a,b)
#define pi acos(-1)
#define mp make_pair
#define pos first
#define val second
#define error 1e-12
#define mod 1000000007
#define nl printf("\n")

typedef long long ll;

int main()
{
    string a,b,c,d;
    char dump[5];
    int tc,m=0;

    cin >> tc;
    gets(dump);
    while(tc--)
    {
        getline(cin , a);
        getline(cin,b);

        cout << "Case " << ++m << ": " ;
        if(a.size() == b.size())
        {
            if(a==b)
                cout << "Yes" << endl;
            else
                cout << "Wrong Answer" << endl;
        }

        else
        {
            for(int i=0; i<a.size(); i++)
                if(a[i] == ' ') a.erase(i,1);

            for(int i=0; i<b.size(); i++)
                if(b[i] == ' ') b.erase(i,1);

            if(a == b)
                cout << "Output Format Error" << endl;

            else
                cout << "Wrong Answer" << endl;

        }

    }
    return 0;
}

