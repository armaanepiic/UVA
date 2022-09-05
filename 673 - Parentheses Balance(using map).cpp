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


unordered_map <char, int> sym = { {'[' , -1} , {'(' , -2} , {']' , 1} , {')' , 2} };

string isBalanced(string s)
{
    stack <char> st;
    for (char value : s)
    {
        if (sym[value] < 0){
            st.push(value);
        }
        else
        {
            if (st.empty()){
                return "No";
            }
            char top = st.top();
            st.pop();
           
            if (sym[top] + sym[value] != 0){
                return "No";
            }
        }
    }
    if (st.empty())
        return "Yes" ;
    else
        return "No";

}



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
    while (t--) {

        string s;
        // cin >> s;
        getline(cin , s);
        cout << isBalanced(s) << endl;
    }


    return 0;
}
