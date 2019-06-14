#include <iostream>
using namespace std;

int stringcheck(char a[110]){
	int found=1;
	for(int i=0;a[i] && found!=0;){
		if(a[i]=='<' || a[i]==' '){
			i++;
		}
		else{
			a[i]=' ';
			
			while(a[i]!='<' && i>=0){
				i--;
			}
			if(i<0 && found==1){
				found=0;
			}
			else{
				a[i]=' ';
				i--;
				found=found+2;
			}
		}
	}
	if(found!=0)
		--found;
	return found;
}


int main(){
	int test=0;
	char a[107];
	cout<<"Enter number of test cases: "<<endl;
	cin>>test;
	for(int i=0;i<test;i++){
		cout<<"Enter the string"<<endl;
		cin>>a;
		cout<<stringcheck(a)<<endl;		
	}
}
