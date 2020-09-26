#include <iostream>
#include <queue>
using namespace std;

int main()
{   //First In First Out

    queue<int> s;

    // Pushing Element In Stack
    cout << "Push element in stack" << endl;
    for (int i = 0; i < 10; i++)
    {
        s.push(i);
        cout << i << "-->";
    }
    cout << endl;
    //Pop element in stack
    cout << "POP element from stack" << endl;
    while (!s.empty())
    {
        cout << s.front() << "--> ";
        s.pop();
    }
    cout << endl;
    return 0;
}