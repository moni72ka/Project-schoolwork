

#include <iostream>;
using namespace std;

int main(){


int grade;
string name;
cout<<"Please enter student name : ";
cin>>name;

if (grade>=40&&grade<=70){
	cout<<"Please enter grade: ";
	cin>> grade;
	if (grade>=70)
    	cout<<"A";
	
}	
	
else if (grade>=60){
	cout<<"B";	
}	

else if (grade>=50){
	cout<<"C";
}	

else if (grade>=40){
	cout<<"D";
}	

else if (grade<=30){
	cout<<"F";
}
else{
	cout<<"Incorrect grade";
}
return 0;	
}
