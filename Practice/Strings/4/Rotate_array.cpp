#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,r,e;
    cin>>n;

    vector<int> a;

    for(int i=0; i<n; i++){
        cin>>e;
        a.push_back(e);
    }

    cin>>r;
    vector<int> rotated;   
    
    for(int i=0; i<r; i++)
        rotated.push_back(a.back() - i); 
    
    for(int i=0; i<r; i++)
        a.pop_back(); 
        
    reverse(rotated.begin(), rotated.end());

    a.insert(a.begin(), rotated.begin(), rotated.end());

    for(auto e : a)
        cout<<e<<" ";
        
}