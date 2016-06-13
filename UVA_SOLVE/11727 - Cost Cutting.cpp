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
    int a[10],tc,k=0;

    cin >> tc;

    while(tc--)
    {
        for(int i=0;i<3;i++)
            cin >> a[i];
        sort(a,a+3);

        cout << "Case "<< ++k << ":" << a[1] << endl;
    }
    return 0;
}
