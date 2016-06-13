#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cstddef>
#include <cctype>
#include <cfloat>
#include <climits>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

#define SIZE 20000000

const double  pi = 2 * acos (0.0);

using namespace std;

int main()
{
    int n,r,mod,f,g;

    while(cin >> n)
    {
        g = n;

        while(n>=3)
        {
            mod = n % 3;
            f = n/3;
            n = mod + f;
            g += f;
        }
        if(n==2)
            cout << g+1 << endl;
        else
            cout << g << endl;
    }
    return 0;
}
