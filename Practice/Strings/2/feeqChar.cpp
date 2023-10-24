#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    string str;
    getline(cin, str);

    unordered_map<char, int> charFreq;
    unordered_map<char, int>::iterator itr;

    for(int i=0; i<str.length(); i++){
        charFreq[str[i]]++;
    }

    for(itr=charFreq.begin(); itr!=charFreq.end(); itr++){
        cout<<itr->second<<endl;
    }
        
}