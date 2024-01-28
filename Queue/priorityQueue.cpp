#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<queue>
#include <list>
using namespace std;

//Priority queue- - The guy with the largest value stay on top

// GENERAL PRIORITY QUEUE OR MAX HEAP
void printQueue(priority_queue<int> q) {
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    std::cout << std::endl;
}

// MIN HEAP
void printMinHeap(const std::priority_queue<int, std::vector<int>, std::greater<int>>& minHeap) {
    // Create a copy of the min-heap, so we don't modify the original queue
    std::priority_queue<int, std::vector<int>, std::greater<int>> tempHeap = minHeap;

    // Print elements in ascending order
    std::cout << "Min Heap elements (in ascending order): ";
    while (!tempHeap.empty()) {
        std::cout << tempHeap.top() << " ";
        tempHeap.pop();
    }
    std::cout << std::endl;
}


int main(){

    priority_queue<int>pq;

    pq.push(5);//TOP->{5}
    pq.push(2);//TOP->{5 2}
    pq.push(8);//TOP->{8 5 2}
    pq.emplace(10);//TOP->{10 8 5 2}

    cout<<"The Top element is: "<<pq.top()<<endl;
    cout<<"The priority queue is "<<endl;
    printQueue(pq);

    pq.pop();
    cout<<"The NEW Top element is: "<<pq.top()<<endl;
    cout<<"The NEW priority queue is "<<endl;
    printQueue(pq);




    //MIN HEAP- storing min value on top
    priority_queue<int, vector<int>, greater<int>>pq2;
    pq2.push(5);//TOP->{5}
    pq2.push(2);//TOP->{2 5}
    pq2.push(8);//TOP->{2 5 8}
    pq2.emplace(10);//TOP->{2 5 8 10}

    cout<<"The Top element for MIN HEAP is: "<<pq2.top()<<endl;
    cout<<"The priority queue for MIN HEAP is "<<endl;
    printMinHeap(pq2);
}

//PUSH - O(log(n))
//TOP - O(1)
//POP - O(n)