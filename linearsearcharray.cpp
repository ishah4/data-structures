#include<iostream>
using namespace std;
int main(){
	int array[10],size,x,i;
	cout<<"enter the size of the array"<<endl;
	cin>>size;
	cout<<"enter the elements in the array:"<<endl;
	for(int i=0;i<size;i++){
	cin>>array[i];	
	}
cout<<"enter the element you want to search in array:"<<endl;
cin>>x;
	for( i=0;i<size;i++){
	if(array[i]==x){
		cout<<"element found at index:"<<i<<endl;
	break;
	}
	}
	if(i==size){
		cout<<"element not found"<<endl;
	}
	return 0;
}
