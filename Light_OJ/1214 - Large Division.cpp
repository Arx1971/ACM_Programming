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

using namespace std;

const double  pi = 2 * acos (0.0);

#define N 2 + 10000000
#define INF_MAX 2147483647
#define INF_MIN -2147483648
#define rep(i,a,b) for(int i=(a); i<(b); i++)

int main()
{
    string a;

    long long int n,t,temp,tc,k=0;

    cin >> tc;

    while(tc--)
    {
        temp = 0;

        cin >> a >> n;

        for(int i=0;i<a.size();i++)
        {
            if(a[i] == '-')
                continue;
            else
                temp = (temp*10 + a[i] - '0') % n;
        }
        if(!temp)
            cout << "Case "<< ++k <<": divisible"<< endl;
        else
            cout << "Case "<< ++k <<": not divisible"<< endl;
    }
    return 0;
}
