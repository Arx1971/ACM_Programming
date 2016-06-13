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

#define SIZE 20000000

const double  pi = 2 * acos (0.0);

using namespace std;

int main(void)
{
    int n,a,b,sum,hand,k=0;

    cin >> n;

    while(n--)
    {
        cin >> a >> b;

        if(a<=b)
        {
            sum = (b*4) + 5 + 3 + 11;
        }
        else
        {
            hand = a-b;
            sum = ((a+hand)*4) + 5 + 3 + 11;
        }
        cout << "Case "<< ++k <<": " << sum << endl;

    }
    return 0;
}
