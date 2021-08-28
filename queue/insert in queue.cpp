#include<bits/stdc++.h>
using namespace std;

class Queue
{
  public:
  list<int> L;
  void Push(int i)
  {
    cout<<“Pushing the element : “<<(i)<<endl;
    L.push_back(i);
  }
  int pop()
  {
    if(L.empty()) 
    {
      cout<<“Queue empty ”<<endl;
    }
    int a=L.front();
    L.pop_front();
    return a;
  }
  void Show()
  {
    for(auto i:L)
    cout<<i<<” “;
    cout<<endl;
  }
};

int main()
{
  Queue q;
  q.Push(2);q.Push(9);q.Push(3);
  q.Push(5);q.Push(12);q.Push(1);
  q.Show();
}
 
