#include <iostream>
#include <queue>
#include<cstring>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(){

    }

    Person(string n, int a){
        name = n;
        age = a;
    }
};

class PersonCompare{
    public:
    bool operator()(Person A, Person B){
        return A.age>B.age;
    }
};

int main()
{ 
    //Heap USing Priorty Queue
    priority_queue<Person, vector<Person>, PersonCompare> qq;
    int n;
    cin >> n;

    // Pushing Element In Heap
    cout << "Push element in Prior Queue" << endl;
    for (int i = 0; i < n; i++)
    {
        int age;
        string name;
        cin >> name >> age;
        Person p(name, age);
        qq.push(p);
    }

    //Pop element in stack
    cout << "POP element from heap" << endl;
    int k = 3;
    for(int i = 0; i<k; i++)
    {
        Person p;
        p = qq.top();
        cout << p.name << "--> "<<p.age<<endl;
        qq.pop();
    }
    cout << endl;
    return 0;
}