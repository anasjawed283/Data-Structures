//in STL - Algorithms,Containers,Functions,Iterators

#include<iostream>
#include<vector>
#include<math.h>
#include<string>
using namespace std;

//PAIRS

//stores 2 values in a pair

int main(){
    pair<int, int>p ={1,3};
    cout<<p.first<<" "<<p.second<<endl; //1 3

    pair<int, pair<int,int>>p2={1,{2,3}}; // store 3 elements in a pair
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    pair<int,int>arr[] = {{1,2},{3,4},{5,6}}; //4 is at index 1.second
    cout<< arr[1].second<<endl;
}