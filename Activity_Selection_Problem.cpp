#include<iostream>
using namespace std;
#include<queue>
#include<set>

class Activity1
{
public:
int act;
int start;
int finish;
bool operator<(const Activity1&) const;
};

bool Activity1::operator<(const Activity1& a) const
{
return a.finish<finish;
}

void activity_selector(priority_queue<Activity1> &pq, vector<Activity1> &v)
{
Activity1 a;
a = pq.top();
pq.pop();
v.push_back(a);

while(!pq.empty())
{
if(pq.top().start>a.finish)
{
a = pq.top();
v.push_back(a);
}
pq.pop();
}
}

int main()
{
priority_queue<Activity1> pq;
int n;
Activity1 a;
vector<Activity1> v;
cin>>n;
int start[n], finish[n];

for(int i=0;i<n;i++)
{
cin>>start[i];
}

for(int i=0;i<n;i++)
{
cin>>finish[i];
}

for(int i=0;i<n;i++)
{
a.start = start[i];
a.finish = finish[i];
a.act = i+1;
pq.push(a);
}

activity_selector(pq,v);
for(auto a:v)
cout<<a.act<<" ";
}
