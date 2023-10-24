#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,m;
    float median;

    cin>>n;
    vector<float> a1(n);
    for(int i=0; i<n; i++)
        cin>>a1[i];

    cin>>m;
    vector<float> a2(m);
    for(int i=0; i<m; i++)
        cin>>a2[i];

    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());

    vector<float> a3(n+m);
    merge(a1.begin(), a1.end(), a2.begin(), a2.end(), a3.begin());
    
    int l = a3.size();
    int half = l/2;

    if(l%2 != 0)    
        median = a3[half];
    else
        median = (a3[half-1] + a3[half])/2.0;
    
    cout<<median;
}
