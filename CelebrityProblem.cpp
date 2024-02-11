#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int celebrity(vector<vector<int>>&M, int n){
		// code here 
		vector<int>adj[n+1];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(M[i][j]==1){
					adj[i].push_back(j);
				}
			}
		}
		vector<int>::iterator it;
		for(int i=0;i<n;i++){
			if(adj[i].empty()){
				bool flag=1;
				for(int j=0;j<n;j++){
					if(i==j)continue;
					it=find(adj[j].begin(),adj[j].end(),i);
					if(it==adj[j].end()){
						flag=0;
						break;
					}
				}
				if(flag)return i;
			}
		}
		return -1;
	}

int main() {
	vector<vector<int>>M{ {0, 0, 1, 0}, {0, 0, 1, 0}, {0, 0, 0, 0}, {0, 0, 1, 0} };
	int n=M.size();
	int Celebrity=celebrity(M,n);
	if(Celebrity!=-1){
	cout<<"Celebrity is : "<<Celebrity<<endl;
	}else{
	cout<<"No celebrity"<<endl;
	}
	return 0;
}
