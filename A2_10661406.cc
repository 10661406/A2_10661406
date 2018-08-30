#include <iostream>
using namespace std;

int main()
{
	int x; //'x' is any number.
	int d;
	bool isPrime= true;
	
	cout<<"Input a number: "<<endl;
	cin>>x;
	for (d=2; d<= x/2; d++) {
		if (x%d == 0){
			isPrime= false;
			break;
	}
}

if (isPrime==true){

	cout<<x<<" is a prime number.";
	cout<<endl;
}
else{
	cout<<x<<" is not a prime number.";
	cout<<endl;
}

	
	return 0;
}
	
