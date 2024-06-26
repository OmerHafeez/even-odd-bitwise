#include<iostream>
using namespace std;
int main()
{
int a;

cout<<"Enter a number"<<endl;
cin>>a;

if(a&1==1)			//And of the value and 1 is always equal to 1
cout<< " Number is odd"<<endl;
			//Number entered is odd in this case
else
cout<< " Number is even"<<endl;
			//Number entered is odd in this case
}
