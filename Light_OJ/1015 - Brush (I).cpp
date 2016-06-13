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
    int a[1000],n,x,sum,han,temp,k=0;

    cin >> n;

    while(n--)
    {
        cin >> x;
        sum = 0;

        for(int i=0;i<x;i++)
        {
            cin >> a[i];
            if(a[i]>=0)
            {
                sum+=a[i];
            }
        }
        cout << "Case "<< ++k <<": " << sum << endl;
    }
}
