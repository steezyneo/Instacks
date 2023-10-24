#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>

using namespace std;

int main(){
    string str;
    getline(cin, str);

    vector<int> freqs;


    unordered_map<char, int> charFreq;
    unordered_map<char, int>::iterator itr;

    for(int i=0; i<str.length(); i++){
        charFreq[str[i]]++;
    }

    for(itr=charFreq.begin(); itr!=charFreq.end(); itr++){
        freqs.push_back(itr->second);
    }
    
    int max = freqs[0];
    
   for(auto e : freqs)
       if(e > max)
            max = e;

    cout<<max<<endl;
        
}