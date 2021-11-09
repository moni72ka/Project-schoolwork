#include <iostream>
#include<string>
 
using namespace std;
int main(){
int radius,height;
string Value;
cout<<"Enter the Radius of The Cylinder\n";
cin>>radius;
cout<<"Enter the Height of the Cylinder\n";
cin>>height;
cout<<"Choose Between A for Area or V for Volume to calculate either\n";
cin>>Value;
if (Value=="A","a"){
	cout<<2*3.141592*radius*height+2*3.14159*radius*radius;
}
else if(Value=="V","v"){
	cout<<3.141592*radius*radius*height;
}
	else{
		cout<<"\nInvalid Input.";
	}
	

	return 0;
}
