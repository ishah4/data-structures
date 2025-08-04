//insertion array data structure
#include<iostream>
using namespace std;
int main(){
	int array[15]={1,2,3,4},size,x,pos;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	

//insert at the end
cout<<"enter the element you want to enter at any position :"<<endl;
cin>>x;
cout<<"enter the position you want to enter element  :"<<endl;
cin>>pos;


	for( int i=size-1;i>=pos-1;i--){
	array[i+1]=array[i];
	}
array[pos-1]=x;
for(int i=0;i<size;i++){
	cout<<"array elements are:"<<array[i]<<endl;
}

return 0;
}




