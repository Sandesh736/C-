#include<iostream>
#include<string.h>
using namespace std;
struct Emp{
	int id;
	char name[20];
	double salary;
	Emp(){
		cout<<"emp default constructor called\n";
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
	}
	Emp(int i,const char* nm,double s){
		cout<<"emp paramterised constructor called\n";
		this->id=i;
		strcpy(this->name,nm);
		this->salary=s;
	}
	void setId(int i){
		this->id=i;
	}
	void setName(char *nm){
		strcpy(this->name,nm);
	}
	void setSalary(double s){
		this->salary=s;
	}
	virtual display(){
		cout<<"\n id ="<<this->id;
		cout<<"\n name="<<this->name;
		cout<<" \n salary="<<this->salary;	
	}
	
};
struct Sm:public Emp{
	double incentive;
	int target;
	Sm():Emp(){
		cout<<"sm default called\n";
		this->incentive=0;
		this->target=0;
	}
	Sm(int i,const char* nm,double s,double in,int t):Emp(i,nm,s){
		cout<<"\nSm parameterised constructor called";
		this->incentive=in;
		this->target=t;
	}
	void setIncentive(double in){
		this->incentive=in;
	}
	void setTarget(int t){
		this->target=t;
	}
	virtual display(){
		Emp::display();
		cout<<"\n incentive="<<this->incentive;
		cout<<"\n target ="<<this->target;
	}	
	
};

int main(){
	Emp *e1;
	Emp e2(1,"sandesh",27500);
	e1=&e2;
	e1->display();
	cout<<"\n";
	Sm s1(2,"ram",5000,200,20);
	e1=&s1;
	e1->display();
}
