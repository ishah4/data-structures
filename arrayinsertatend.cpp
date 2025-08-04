//insertion array data structure
#include<iostream>
using namespace std;
int main(){
	int array[15],size,x,i;
	cout<<"enter the size of array"<<endl;
	cin>>size;

//insert at the end
cout<<"enter the element you want to enter at the end:"<<endl;
cin>>x;
	for( i=0;i<size;i++){
		cout<<"enter the elements of the array: "<<endl;
		cin>>array[i];
	}
array[i]=x;
size++;
for(int i=0;i<size;i++){
	cout<<"array elements are:"<<array[i]<<endl;
}
return 0;
}




