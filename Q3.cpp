#include <iostream>
using namespace std;

int print_normal_method(int arr[])
{ 
	for(int i=0;i<10;i++)
	    cout<<arr[i]<<" ";
}
int pointer_method(int arr[])
{ 
	int *p;int i;
	p=&arr[0];
	for(i=0; i<10; i++)
        cout<<*(p+i)<<" ";
    
}
int main() {
   int arr[10],i;
   cout<<"Enter the elements of the array.";
    for(i=0;i<10;i++)
       cin>>arr[i];
       cout<<"\nThe array is\n";
     print_normal_method(arr);
     cout<<"\n";
     pointer_method(arr);
	return 0;
}


