#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <list>
#include <deque>
#include <cstddef>
#include <cfloat>
#include <climits>
#include <cstring>
#include <sstream>

using namespace std;

const double  pi = 2 * acos (0.0);

#define N 2 + 10000000
#define INF_MAX 2147483647
#define INF_MIN -2147483648
#define rep(i,a,b) for(int i=(a); i<(b); i++)
#define lli long long int

int main()
{
    int tc,n,m,x,y;

    while(cin >> tc && tc!=0)
    {
        cin >> m >> n;

        for(int i=1;i<=tc;i++)
        {
            cin >> x >> y;

             if(x>m && y>n)
               cout << "NE" << endl;

            else if(x==m || y==n)
                cout << "divisa" << endl;

            else if(x<m && y>n)
                cout << "NO" << endl;

            else if(x<m && y<n)
                cout << "SO" << endl;

            else if(x>m && y<n)
                cout << "SE" << endl;
        }
    }
    return 0;
}
