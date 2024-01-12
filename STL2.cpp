//in STL - Algorithms,Containers,Functions,Iterators

#include<iostream>
#include<vector>
#include<math.h>
#include<string>
using namespace std;

//VECTOR- dynamic size array or container

int main(){
    vector<int>v1;

    v1.push_back(10);
    v1.emplace_back(20);//similar to push_back but is faster
    
/*If you have a pre-existing object or a simple value, and you want to add a copy or move of that object to the vector, use push_back.
If you want to construct an element in-place at the end of the vector, possibly with non-trivial constructor arguments, use emplace_back.
In summary, the choice between push_back and emplace_back depends on the situation and the desired behavior.
Use push_back for simplicity and emplace_back for more flexibility and potential performance gains, especially with complex types.*/

    vector<pair<int,int>>v2;

    v2.push_back({10,20});
    v2.emplace_back(30,40);//automtically assumes its a pair so no need os {}


    vector<int>ve(5); //fills garbage value 
    vector<int>v3(5,20); //v3 stores {20,20,20,20,20}
    vector<int>v4(v3); //copy of v3 is v4


    vector<int>vi{10,20,30,40,50};
    //it is just a name
    vector<int>::iterator it =vi.begin();//v.begin points to the memory address
    it++; //itreator move to next memory
    cout<<*(it)<<" "; //access the value at the memory
    



    vector<int>::iterator it = vi.end();

    // v.rend() -- reverse end
    // v.rbegin() -- reverse begin

    cout<<vi[0]<<" "<<vi.at(0);

    cout<<vi.back()<<" "; //last element


    //complete loop from begin to end
    for(vector<int>::iterator it =vi.begin(); it!=vi.end(); it++){
        cout<<*(it);
    }

    //but this is long process we use auto
    for(auto it=vi.begin();it!=vi.end();it++){
        cout<<*(it)<<" "<<endl;
    }

    for(auto it:vi){
        cout<< it << " ";
    }


    //ERASE V9
    vector<int>v9={11,22,33,44,55,66,77};
    v9.erase(v9.begin()+1); //removes elemnt from 1 index that is 11
}