#include<iostream>
#include<vector>
using namespace std;
void arrayrotate(vector<int>vect,int rotation){
	int i,ele;
	for(i=0;i<rotation;i++){
		ele=vect[0];
		vect.erase(vect[0]);
		vect.push_back(ele);
	}
	for(auto k=vect.begin();k!=vect.end();++k){
		cout<<*k<<" ";
	}
	cout<<"\n";
}
int main(){
	int n,arraysize,rotations,i,ele;
	vector<int>vect;
	cout<<"no of testcases: \n";
	cin>>n;
	while(n--){
		cout<<"size  rotations\n";
		cin>>arraysize>>rotations;
		for(i=0;i<arraysize;i++){
			cin>>ele;
			vect.push_back(ele);
		}
		if(rotations>arraysize)
			rotations%=arraysize;
		arrayrotate(vect,rotations);
	}
	return 0;
}
				
