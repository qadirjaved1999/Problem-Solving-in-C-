#include<iostream>
using namespace std;
int main(){
	
	int num;
	int num2 = 0;
	float count = 0;
	do{
		cout<<"Enter number = "<<endl;
	    cin>>num;
		if(num == -1){
			break;
		}
		else{
	    num2 = num2 + num;
	    count++;
		}
		
	}
	 while(num != -1);
	 
	cout<<"Your Sum  ="<<num2<<endl;
	cout<<"Your Averge  ="<<(num2 / count)<<endl;
	
}