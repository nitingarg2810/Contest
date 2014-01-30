#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
	int num,t;
	scanf("%d",&t);
	while(t--){
	
	scanf("%d",&num);
	int arr[]= {-1,-1,-1,-1};

	string str[] = {"t","s","r","q","p","o","n","m"};
	
	string pass = "";
	
	for(int i=0;i<4 && num != 0;i++){
		arr[3-i] = num % 10;
		num = num/10;
	}
	for(int i=0;i<4;i++){
		if(arr[i] >= 5){
		pass += str[2*i];
		arr[i] = arr[i] - 5;
		}
		 
		 
		if(arr[i]>0){
			while(arr[i]--)
			pass += str[2*i+1];
		 }
		 	
	}
	cout<<pass<<endl;
}
}
