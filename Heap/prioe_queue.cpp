#include <iostream>
#include <queue>
using namespace std;

int main()
{ //Heap USing Priorty Queue
    // priority_queue<int> s; //Max Heap
    priority_queue<int, vector<int>, greater<int> > s;
    int n;
    cin>>n;
    // Pushing Element In Heap
    cout << "Push element in Prior Queue" << endl;
    for (int i = 0; i < n; i++)
    {   int item;
        cin>>item;
        s.push(item);
        cout << item << "-->";
    }
    cout << endl;
    //Pop element in stack
    cout << "POP element from heap" << endl;
    while (!s.empty())
    {
        cout << s.top() << "--> ";
        s.pop();
    }
    cout << endl;
    return 0;
}