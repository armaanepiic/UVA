// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=614


//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;


using ll    =   long long int;
using ull   =   unsigned long long;
using vi    =   vector<int>;
using vll   =   vector<ll>;
using vc    =   vector<char>;
using vs    =   vector<string>;
using vvi   =   vector<vector<int>>;
using vvs   =   vector<vector<string>>;






#define     pb              push_back
#define     mp              make_pair
#define     ff              first
#define     ss              second
#define     sortv           sort(v.begin(), v.end())
#define     rev_sortv       sort(v.begin(), v.end(), greater<int>())
#define     inv             vi v;for(int i = 0; i < n; ++i){int x;cin >> x; v.pb(x);};
#define     out(v)          for(auto value:v){cout<<value<<" ";}cout<<endl;
#define     pout(p)         for(auto value:p){cout<<value.ff<<" "<<value.ss<<endl;}cout<<endl;
#define     sz(s)           (s).length()
#define     all(x)          (x).begin(), (x).end()
#define     digits(x)       trunc(log10(x))+1








int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:input.txt", "r", stdin);
    freopen("F:output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string str;
        getline(cin , str);
        stack<char>s;
        for (int i = 0; i < str.size(); ++i)
        {
            if(str[i] == '(' || str[i] == '['){
                s.push(str[i]);
                //cout << s.top() << endl;
            }
            else if(str[i] == ')')
            {
                if(!s.empty() && s.top()=='('){
                    s.pop();
                    //cout << s.top() << endl;
                }
                else
                    s.push(str[i]);
            }
            else if(str[i] == ']')
            {
                if(!s.empty() && s.top()=='['){
                    s.pop();
                    //cout << s.top() << endl;
                }
                else
                    s.push(str[i]);
            }

        }
        
        if(s.empty() == true)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;


    }

    return 0;
}
