#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	int id;
	char name[20];
	protected :
	double salary;
	public:
	Employee()
	{
		cout<<"\n\nemployee default constructor called...";
		this->id=0;
		strcpy(this->name,"not given");
		this->salary=0;
	}
	Employee(int i,const char* n,double s)
	{
		cout<<"\n\nemployee parameterised constructor called...";
		this->id=i;
		strcpy(this->name,n);
		this->salary=s;
	}
	void setId(int i)
	{
		this->id=i;
	}
	int getId()
	{
		return this->id;
	}
	void setName(const char* n)
	{
		strcpy(this->name,n);
	}
	char* getName()
	{
		return this->name;
	}
	void setSalary(double s)
	{
		this->salary=s;
	}
	double getSalary()
	{
		return this->salary;
	}
	virtual void display()
    {
	    cout<<"\nemployee id="<<this->id;
	    cout<<"\nemployee name="<<this->name;
	    cout<<"\nemployee salary="<<this->salary;
    }
};
class SM:public Employee//struct SM:public Employee
{
	double incentive;
	int target;
	public:
	SM():Employee()
	{
		cout<<"\nSM default constructor called...";
		this->incentive=0;
		this->target=0;
	}
	SM(int i,const char* n,double s,double in,int t):Employee(i,n,s)
	{
		cout<<"\nSM parameterised constructor called...";
		this->incentive=in;
		this->target=t;
	}
	//void setIncentive(double in)
	//{
	//	this->incentive=in;
	//}
	//double getIncentive()
//	{
//		return this->incentive;
//	}
	void setTarget(int t)
	{
		this->target=t;
	}
	double getTarget()
	{
		return this->target;
	}
	double calsal(){
		//return this->salary + this->incentive;
		return this->getSalary()+incentive;
	}
	void display()  //virtual 
    {
	    Employee::display();
	    cout<<"\nemployee target="<<this->target;
	    cout<<"\nincentive="<<this->incentive;
	    cout<<"\n total salary "<<calsal();
	    //cout<<"\n total salary="<<
    }
};
struct HR:public Employee
{
	double commission;
	HR():Employee()
	{
		cout<<"\nHR default constructor called...";
		this->commission=0;
	}
	HR(int i,const char* n,double s,double c):Employee(i,n,s)
	{
		cout<<"\nHR parameterised constructor called...";
		this->commission=c;
	}
	void setCommission(double c)
	{
		this->commission=c;
	}
	double getCommission()
	{
		return this->commission;
	}
	double calsal(){
		return this->getSalary()+ this->commission;
}
	virtual void display()
    {
	    Employee::display();
	    cout<<"\nemployee commission="<<this->commission;
	    cout<<"\n total salary"<<calsal();
    }
};
class Admin:public Employee// struct
{
	double allowance;
	public:
	Admin():Employee()
	{
		cout<<"\nAdmin default constructor called...";
		this->allowance=0;
	}
	Admin(int i,const char* n,double s,double a):Employee(i,n,s)
	{
		cout<<"\nAdmin parameterised constructor called...";
		this->allowance=a;
	}
	void setAllowance(double a)
	{
		this->allowance=a;
	}
	double getAllowance()
	{
		return this->allowance;
	}
	double calsal(){
		return this->getSalary() + this->allowance;
    }
	virtual void display()
    {
	    Employee::display();
	    cout<<"\nemployee allowance="<<this->allowance;
	    cout<<"\n total salary "<<calsal();
    }
};
int main()
{
	Employee *e1;
	//e1.display();
    Employee e2(101,"sandesh",42000);
    e1=&e2;
    e1->display();
    //e2.display();
    cout<<"\n";
	//SM s1;
	//s1.display();
    SM s2(102,"ram",40000,4000,60);
    e1=&s2;
    e1->display();
    //cout<<"\n total salary="<<e1->getSalary();
    cout<<"\n";
    //HR h1;
	//h1.display();
    HR h2(104,"sham",40000,4000);
    e1=&h2;
    e1->display();
    cout<<"\n";
    //Admin a1;
	//a1.display();
    Admin a2(106,"babu",60000,6000);
    e1=&a2;
    e1->display();
    return 0;
}

