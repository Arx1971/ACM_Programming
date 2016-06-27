/** Adnan H Rahin
    Computer Science Dept,
    LaGuardia Community College, CUNY.
**/

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
    int test_case;

    vector < int > myvector;
    vector < int > ans;
    int n;
    cin >> test_case;
    for(int i=0; i<test_case; i++){
        cin >> n;
        myvector.push_back(n);
    }
    for(int i=0; i<myvector.size(); i++){
        int hand = 0;
        for(int j=i+1; j<myvector.size(); j++){
            if(myvector[i]==myvector[j]){
                hand = abs(i-j);
                ans.push_back(hand);
                break;
            }
            else
                hand = -1;
        }
    }

    if(ans.size()==0)
        cout << -1 << endl;

    else{
    sort(ans.begin(),ans.end());
    cout << ans[0] << endl;
    ans.clear();
    myvector.clear();
    }
    return 0;
}
