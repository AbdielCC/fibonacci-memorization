#include<iostream>
using namespace std;
void pedir(int& num);
int fibonacci(int num,int* arr);
int get(int n);
int main(){
	int n,res;
	pedir(n);
	res=get(n);
	cout<<"el numero fib es"<<res;
	return 0;
}
void pedir(int& num){
	cout<<"dame un numero "<<endl;
	cin>>num;
}
int fibonacci(int n,int* arr){
	if(arr[n]!=-1){
		return arr[n];
	}else{
		arr[n]=fibonacci(n-2,arr)+fibonacci(n-1,arr);
		return arr[n];
	}
}
int get(int n){
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i]=-1;
	}
	arr[0]=0;
	arr[1]=1;
	return fibonacci(n-1,arr);
}