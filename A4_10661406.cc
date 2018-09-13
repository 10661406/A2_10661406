#include <iostream>
using namespace std;

int main()
{
	int firstNum, secNum;
	cout<<"Enter two numbers: \n";
	cin>>firstNum >>secNum;
	
	int gcd;
	int a;	
	for(a=1; a<=firstNum && a<=secNum; a++){
		
		if(firstNum % a == 0 && secNum % a ==0){			
			gcd=a;
		}
	}
	cout<<endl;
	
	cout<<"The (GCD) of "<< firstNum <<" and " <<secNum << " is "<< gcd<<endl;
	return 0;
}
