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

int mat[105][105];

void print_mat(int mat_Size)
{
    for(int i=0; i<mat_Size; i++)
    {
        for(int j=0; j<mat_Size; j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }
}

void transpose(int mat_Size)
{
    int mat2[105][105];

    for(int i=0; i<mat_Size; i++)
    {
        for(int j=0; j<mat_Size; j++)
        {
            mat2[j][i] = mat[i][j];
        }
    }
    for(int i=0; i<mat_Size; i++)
    {
        for(int j=0; j<mat_Size; j++)
        {
            mat[i][j] = mat2[i][j];
        }
    }
}

void row_swap(int a,int b,int mat_Size)
{
    for(int i=0; i<mat_Size; i++)
    {
        swap(mat[a-1][i],mat[b-1][i]);
    }
}
void col_swap(int a,int b,int mat_Size)
{
    for(int i=0; i<mat_Size; i++)
    {
        swap(mat[i][a-1],mat[i][b-1]);
    }
}
void dec(int mat_Size)
{
    for(int i=0; i<mat_Size; i++)
    {
        for(int j=0; j<mat_Size; j++)
        {
            mat[i][j]--;
            if(mat[i][j]<0)
                mat[i][j] = 9;
        }
    }
}

void inc(int mat_Size)
{
    for(int i=0; i<mat_Size; i++)
    {
        for(int j=0; j<mat_Size; j++)
        {
            mat[i][j]++;
            if(mat[i][j]>9)
                mat[i][j] = 0;
        }
    }
}
int main()
{
    int tc,row,col,mat_size,command_mat,a,b,m = 0;
    string str;
    cin >> tc;
    char dump[10],temp;
    while(tc--)
    {
        cin >> mat_size;

        for(int i=0; i<mat_size; i++)
        {
            for(int j=0; j<mat_size; j++)
            {
                cin >> temp;
                mat[i][j] = temp - '0';
            }
        }
        cin >> command_mat;


        for(int j=0; j<command_mat; j++)
        {
            cin >> str;
            if(str == "transpose")
            {
                transpose(mat_size);
            }
            else if(str=="row")
            {
                cin >> a >> b;
                row_swap(a,b,mat_size);
            }
            else if(str == "col")
            {
                cin >> a >> b;

                col_swap(a,b,mat_size);
            }
            else if(str == "inc")
            {
                inc(mat_size);
            }
            else if(str == "dec")
            {
                dec(mat_size);
            }
        }
        cout << "Case #" << ++m << endl;
        for(int i=0; i<mat_size; i++)
        {
            for(int j=0; j<mat_size; j++)
                cout << mat[i][j];
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
