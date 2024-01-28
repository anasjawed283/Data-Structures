#include<iostream>
#include<vector>
#include<queue>
#include<math.h>
#include<string>
using namespace std;

//Queue is FIFO - First in First Out
void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;
}
int main(){
    queue<int> q;
    q.push(1); //{1}
    q.push(3); //{1,3}
    q.push(5); //{1,3,5}
    q.push(7); //{1,3,5,7}
    q.push(9); //{1,3,5,7,9}
    q.emplace(11); //{1,3,5,7,9,11}

    printQueue(q);
    //q.pop();
    //printQueue(q);

    q.back() +=5;
    printQueue(q);
    
}