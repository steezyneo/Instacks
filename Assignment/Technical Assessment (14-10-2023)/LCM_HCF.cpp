#include<iostream>

using namespace std;

int lcm(int x, int y){
    int greatest;
    
    if(x>y)
        greatest = x;
    else
        greatest = y;
    
    while(true){
        if((greatest%x==0) && (greatest%y==0))
            break;
        else
            greatest++;
    }
    return greatest;
}

int hcf(int x, int y){
    int least;
    
    if(x<y)
        least = x;
    else
        least = y;
        
    while(true){
        if((x%least)==0 && (y%least)==0)
            break;
        else
            least--;
    }
    return least;
}
int main(){
    int n,m;
    cin>>n>>m;
    
    cout<<hcf(n,m)<<endl;
    cout<<lcm(n,m);
    
}