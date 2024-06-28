#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

int main() {
    while(1){
	cout<<"Write a Positive Interger number  :  ";
	int n;   cin>>n;
	cout<<endl;
	cout<<"Choose one  'a' or '1'  :  ";
	char type;   cin>>type;

	if(n<0 or n>26 or(type!='a' and type!=1) ){
        cout<<"Enter the correct input please  ";
	}
	cout<<" ";

	char arr[n][n];
	memset(arr, ' ', sizeof(arr));

	for(int i=0;i<n;i++){
        arr[0][i]=type;
        arr[i][0]=type;
        arr[n-1][n-1-i]=type;
        arr[n-1-i][n-1]=type;
        type++;
	}

	cout<<endl;
	cout<<"The pattern is " <<endl;

	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
	}
    }
}

