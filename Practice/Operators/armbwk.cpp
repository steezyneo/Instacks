#include<iostream>

using namespace std;

int main(){
	int num, sum=0, rem, temp, i;
	
	for (i=1; i<=1000; i++){
		num = i;
		temp = num;
		
		while(temp>0){
			rem = temp%10;
			sum = sum+(rem*rem*rem);
			temp=temp/10;
		}
		if(sum == num)
			cout<<num<<" ";
			
		sum = 0;
	}
}
