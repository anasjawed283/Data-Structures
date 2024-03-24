#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> modifyvec = {1, 2, 3, 4, 5};
    modifyvec.at(2) = 10; // Modifying the third element
    for (auto it = modifyvec.begin(); it != modifyvec.end(); ++it)
    {
        cout << *it << " ";
    }
    for (int num : modifyvec)
    {
        cout << num << " ";
    }
    for (const auto &element : modifyvec)
    {
        std::cout << element << " ";
    }
    for(auto i:modifyvec){
        cout<< i << " ";
    }
    return 0;
}
