//insertion array data structure
#include<iostream>
using namespace std;
int main(){
	int array[15],size,e,x,i;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"enter the elements of the array: "<<endl;
		cin>>array[i];
	}
//insert at the beggining
	cout<<"enter the element you want to enter at the beginning"<<endl;
	cin>>e;
	for(int i=size;i>0;i--){
		array[i]=array[i-1];
	}
array[0]=e;
for(int i=0;i<size;i++){
	cout<<"array elements are:"<<array[i]<<endl;
}
return 0;
};

