#include<iostream>
using namespace std;
int main(){
	int array[10],size,temp;
	cout<<"enter the size of the array"<<endl;
	cin>>size;
	cout<<"enter the elements in the array:"<<endl;
	for(int i=0;i<size;i++){
	cin>>array[i];	
	}
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(array[i]<array[j]){
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;	
			}
		}
	}
	for(int i=0;i<size;i++){
		cout<<"the elements in array is:"<<array[i]<<endl;
	}
	return 0;
}
