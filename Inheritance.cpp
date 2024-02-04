#include<iostream>
#include<string.h>
using namespace std;
struct emp{
	int emp_id;
	char name[20];
	double salary;
	
	emp(){
		cout<<"emp default constructor called"<<"\n";
		this->emp_id=0;
		strcpy(this->name,"not given");
		this->salary=0;
	}
	emp(int a,char*nm,double s){
		cout<<"emp parameterised constructor called"<<"\n";
		this->emp_id=a;
		strcpy(this->name,nm);
		this->salary=s;
		
	}
	

void setId(int a){
        this->emp_id=a;
		
}
void setName(char* nm){
	strcpy(this->name,nm);
}
void setSalary(double a){
	this->salary=a;
}

int getId(){
	return this->emp_id;
}
char* getName(){
	return this->name;
}
double getSalary(){
	return this->salary;
}
void display(){
	cout<<"id is "<<this->emp_id;
	cout<<" name is "<<this->name;
	cout<<" salary is"<<this->salary;
}
};
struct sm:public emp{
	double incentive;
	int target;

sm():emp(){
	cout<<"sm default paramtere called"<<"\n";
	//this->emp_id=0;
	//strcpy(this->name,"not given");
	//this->salary=0;
	this->incentive=0;
	this->target=0;
	
}
    sm(int a,char* nm,double s,double i,int t):emp(a,nm,s){                            //(int a,char* nm,double s,
	cout<<"sm paramaterised constructor called"<<"\n";
//	this->emp_id=a;
//	strcpy(this->name,nm);
//	this->salary=s;
	this->incentive=i;
	this->target=t;
	
}
void setIncentive(double i){
	this->incentive=i;
}
void setTarget(int t){
	this->target=t;
}
void display(){
	//cout<<"id= "<<this->emp_id;
	//cout<<"name="<<this->name;
	//cout<<" salary= "<<this->salary;
	emp::display();
	cout<<" incentive "<<this->incentive;
	cout<<" target"<<this->target<<"\n";
}


};
struct admin:public emp{
	double allowance;
	
	admin():emp(){
		cout<<"admin default constructor called"<<"\n";
		this->allowance=0;
	}
	admin(int a,char* nm,double s,double al):emp(a,nm,s){
		cout<<"admin parameterised constructorr called"<<"\n";
		//this->id=a;
		//strcpy(this->name,nm);
		//this->salary=s;
		this->allowance=al;
	}
	void setallowance(double  al){
		this->allowance=al;
	}
	void display(){
		emp::display();
		cout<<"allowance ="<<this->allowance;
	}
	
};
int main(){
	sm s1;
	sm s2(1,"sandesh",40000,3456,20);
	s1.setId(18);
	s1.setName("virat");
	s1.setSalary(34000);
	s1.setIncentive(654);
	s1.setTarget(50);
	s1.display();
	s2.setId(10);
	s2.setName("mahi");
	s2.setSalary(35000);
	s2.setIncentive(500);
	s2.setTarget(30);
	s2.display();
	admin a;
	a.setallowance(1200);
	a.display();
	admin a1(12,"ram",5000,120);
	a1.setallowance(1400);
	a1.display();
	
	
	
	

	
	
}
	

