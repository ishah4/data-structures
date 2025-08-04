//traversal array data structure
#include<iostream>
using namespace std;
int main(){
	int a[5],size,elements;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"enter the elements of the array "<<endl;
		cin>>a[i];
	}

	for(int i=0;i<size;i++){
		cout<<"the elements in array are:"<<a[i]<<endl;
	}
	return 0;
}


