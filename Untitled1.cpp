#include<iostream>
using namespace std;
struct distance{
	int feet;
	int inch;
	distance(int a=0,int b=0){
		this->feet=a;
		this->inch=b;
	}
	distance add(int a,distance d3){
		distance temp;
		temp.feet = this->feet + a;
		temp.inch = this->inch + a;
		return temp;
	}
	void display(){
		cout<<"feet ="<<this->feet;
		cout<<"inch ="<<this->inch;
	}
	
	
	
};
int main(){
	distance d;
	d.feet=10;
	int a=d.feet;
	d.inch=5;
	int b=d.inch;
	d.add(a,b);
	distance d3(15,25);
	d.add(10,d3);
	d.display();
	
	
    
}
