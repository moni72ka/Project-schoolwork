//Strathmore University Introduction to C++
//basic switch...case statement for multiple conditions


#include<iostream>;
using namespace std;
int main(){
	char opt;
	cout<<"Hi. This is your DBIT Sem 1 timetable(Sep-Dec 2021)";
    cout<<"\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n\n";
	cout<<"Please select day of choice (e.g M, T, W, t, or F etc...)";
	cin>>opt;
	
	switch (opt)
{
	caseM:
		/*constant-expression*/
		/*code*/
		cout<<"Monday classes\n............"<<endl;
		cout<<"\t1.DBIT 1106: Math for Biz"<<endl;
		cout<<"\t2. DBIT1101: Fundamentals of IT"<<endl;
		      break;
	caseT:	 
	/*constant-expression*/
		/*code*/
		cout<<"Tuesday classes\n............"<<endl;
		cout<<"\t1.DBIT 1102: Intro to Programming"<<endl;
	 
		    break;   
	caseW:
		/*constant-expression*/
		/*code*/
		cout<<"Wednesday classes\n............"<<endl;
		cout<<"\t1.DBIT 1106: Math for Biz"<<endl;
		cout<<"\t2. DBIT1102: Intro To Progrmming"<<endl; 
		    break;
	caset:
		/*constant-expression*/
		/*code*/
		cout<<"Thursday classes\n............"<<endl;
		cout<<"\t1.DBIT 1104: Intro to Ethics"<<endl;
		cout<<"\t2. DBIT1105: Accounting"<<endl; 
		    break;
	caseF:		    
		/*constant-expression*/
		/*code*/
		cout<<"Friday classes\n............"<<endl;
		cout<<"\t1.DBIT 1103:Business Computing"<<endl;
	 
		    break;
		default:
		cout<<"Invalid choice";
		    break;    
		
		
		
	}	
	
	return 0;
	
}
