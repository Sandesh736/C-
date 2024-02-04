/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int arr[8]={4,10,15,20,32,46,70,85};
    int mid,beg,end;
    beg=0,end=7;
    int x=46;
    while(beg<=end){
    mid=(beg+end)/2;
    if(x==arr[mid]){
        cout<<"element is found at "<<mid<<" index";
        break;
    }
    
    else if (x<arr[mid])  
    {  
    end = mid - 1;  
   }  
    else if (arr [mid] < x)  
    {  
    beg = mid + 1;  
    }
    
}
cout<<"\n";
cout<<"beg value "<<beg<<" "<<"end value="<<end<<" "<<" mid value "<<mid;
}
    


