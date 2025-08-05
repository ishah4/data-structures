#include<iostream>
using namespace std;
	int array[10],size,x,i,j,temp;
	int binarysearch(int low,int high){
		while(low<=high){
		
		int mid=(low+high)/2;
		if(array[mid]==x){
			return mid;
		}else if(array[mid]>x){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
}
return -1;
	}
int main(){

	cout<<"enter the size of the array"<<endl;
	cin>>size;
	cout<<"enter the elements in the array:"<<endl;
	for(int i=0;i<size;i++){
	cin>>array[i];	
	}
	for( i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(array[i]>array[j]){
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++){
		cout<<"sorted elements are:"<<array[i]<<endl;
	}
cout<<"enter the element you want to search in array:"<<endl;
cin>>x;
int result=binarysearch(0,size-1);
if(result==-1){
	cout<<"element not found"<<endl;
}else{
	cout<<"element found at index:"<<result<<endl;
}
	return 0;
}
