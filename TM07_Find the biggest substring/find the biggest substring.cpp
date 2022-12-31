#include <bits/stdc++.h>
using ll = long long int;
using namespace std;
 

void maximumOccurringString(string s, ll K)
{
    
    map<deque<char>, ll> M;
 
    ll i;
 
   
    deque<char> D;
 
    for (i = 0; i < K; i++) {
        D.push_back(s[i]);
    }
 
    
    M[D]++;
 
    
    D.pop_front();
 
    
    for (ll j = i; j < s.size(); j++) {
 
        
        D.push_back(s[j]);
 
        M[D]++;
 
        
        D.pop_front();
    }
 
    ll maxi = INT_MIN;
 
    deque<char> ans;
 
    
    for (auto it : M) {
        if (it.second > maxi) {
            maxi = it.second;
            ans = it.first;
        }
    }
 
    
    for (ll i = 0; i < ans.size(); i++) {
        cout << ans[i];
    }
}
 

int main()
{  ll K ;
    
    string s;
    cout<<"Enter the string ";
    getline(cin,s);
 
    cout<<"\nEnter the size of substring :";
  cin>>K;
 
    
    maximumOccurringString(s, K);
 
    return 0;
}
