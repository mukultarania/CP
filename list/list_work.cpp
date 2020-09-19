#include<iostream>
#include<list>
using namespace std;

void p_rint(list<int> l){
    for (auto it = l.begin(); it!=l.end(); it++)
    {
        cout << (*it) << "-->";
    }
    cout << endl;
}

int main(){

    //Declaration
    list<int> l;
    list<int> l1{ 1, 2, 3, 4, 5, 6};
    p_rint(l1);

    //Push Back
    l1.push_back(69);
    p_rint(l1);

    list<string> l2{"Hey", "How", "Are", "YOu"};

    //Sort
    l2.sort();

    //Reverse
    l2.reverse();

    //Pop Front
    cout<<l2.front()<<endl;
    l2.pop_front();

    //Pop back
    cout<<l2.back()<<endl;
    l2.pop_back();

    for (string x : l2)
    {
        cout << x << "-->";
    }

    return 0;
}