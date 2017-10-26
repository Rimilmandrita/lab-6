#include <iostream>
using namespace std;

int main() {
int a,b,*p;
cout<<"Enter any integer.";
cin>>a;
p=&a;
b=*p;
cout<<"\nThe value of a = "<<a<<", b = "<<b<<", *p = "<<*p;
a=2;
b=3;
p=&a;
cout<<"\nThe value of a = "<<a<<", b = "<<b<<", *p = "<<*p;
p=&b;
cout<<"\nThe value of a = "<<a<<", b = "<<b<<", *p = "<<*p;

	return 0;
}
