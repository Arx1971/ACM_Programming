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

int main(){
    int n1,n2,n3,n;
    int sum_1 = 0,sum_2 = 0, sum_3 = 0;
    vector < int >stack_1;
    vector < int >stack_2;
    vector < int >stack_3;

    vector < int >ans_1;
    vector < int >ans_2;
    vector < int >ans_3;

    cin >> n1 >> n2 >> n3;

    for(int i=0; i<n1; i++){
        cin >> n;
        stack_1.push_back(n);
        sum_1+=n;
    }
    for(int i=0; i<n2; i++){
        cin >> n;
        stack_2.push_back(n);
        sum_2+=n;
    }
    for(int i=0; i<n3; i++){
        cin >> n;
        stack_3.push_back(n);
        sum_3+=n;
    }

    if(sum_1 == sum_2 && sum_2==sum_3 && sum_3 == sum_1)
        cout << sum_1 << endl;

    else{

        for(int i=0; i<stack_1.size()-1; i++){
            sum_1-=stack_1[i];
            ans_1.push_back(sum_1);
        }
        for(int i=0; i<stack_2.size()-1; i++){
            sum_2-=stack_2[i];
            ans_2.push_back(sum_2);
        }
        for(int i=0; i<stack_3.size()-1; i++){
            sum_3-=stack_3[i];
            ans_3.push_back(sum_3);
        }
        int hand = 0;


        sort(ans_2.begin(),ans_2.end());
        sort(ans_3.begin(),ans_3.end());

        for(int i=0; i<ans_1.size(); i++){
            bool temp = false,man = false;
            int hit = ans_1[i];

            if(binary_search(ans_2.begin(),ans_2.end(),hit)){
                temp = true;
            }

            if(temp == true){
                    if(binary_search(ans_3.begin(),ans_3.end(),hit)){
                        hand = ans_1[i];
                        man = true;
                        }
                    }
                if(man == true)
                    break;
            }

            cout << hand << endl;
            ans_1.clear();
            ans_2.clear();
            ans_3.clear();
            stack_1.clear();
            stack_2.clear();
            stack_3.clear();
        }

    return 0;
}
