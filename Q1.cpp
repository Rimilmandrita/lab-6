#include <iostream>
using namespace std;

int main() {
int a;float f;double d;char c,bool b;
	cout<<"enter integer,float,double,bool and character values\n";
	cin>>a>>f>>d>>c;
	int *p;float *p2;double *p3; char *p4;bool *p5;
	p=&a;
	p2=&f;
	p3=&d;
	p4=&c;
	p5=&b;
	cout<<"the size of interger variable is "<<sizeof(a)<<"\n";
	cout<<"the size of float variable is "<<sizeof(f)<<"\n";
	cout<<"the size of double variable is "<<sizeof(d)<<"\n";
	cout<<"the size of character variable is "<<sizeof(c)<<"\n";
	cout<<"the size of boolean variable is "<<sizeof(b);
	
	cout<<"\nthe size of interger type pointer is "<<sizeof(p)<<"\n";
	cout<<"the size of float type pointer is "<<sizeof(p2)<<"\n";
	cout<<"the size of double type pointer is "<<sizeof(p3)<<"\n";
	cout<<"the size of character type pointer is "<<sizeof(p4)<<"\n";
	cout<<"the size of boolean type pointer is "<<sizeof(p5);
	
	return 0;
}
