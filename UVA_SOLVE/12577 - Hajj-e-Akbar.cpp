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
    string a;
    int k = 0;
    while(cin >> a && a!="*")
    {
        if(a=="Hajj")
            cout << "Case " << ++k << ": Hajj-e-Akbar" << endl;
        else if(a=="Umrah")
            cout << "Case " << ++k << ": Hajj-e-Asghar" << endl;
    }

    return 0;
}
