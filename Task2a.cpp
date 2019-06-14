#include <iostream>
using namespace std;

int main(){
	long int n;
	int times=0;
	cout<<"Enter a number"<<endl;
	cin>>n;
	int r=n,sum=0,next;
	while(sum/10!=0 || r!=0){
		if(r==0){
			r=sum;
			cout<<r<<endl;
			sum=0;
			times++;
		}
		sum=sum+r%10;
		r=r/10;
	}
	cout<<"Number of times it is converted is: "<<times+1<<endl;
}
