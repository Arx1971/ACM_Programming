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
    string s;

    int a[10000];

    while(getline(cin,s) && s[0]!='0')
    {
        long long int sum = 0;

        int len = s.size();

        for(int i=0;i<s.size();i++)
        {
            a[i] = (s[i]-'0');
            sum+=(a[i] * (pow(2,len)-1));
            len--;
        }
        cout << sum << endl;
    }
    return 0;
}
