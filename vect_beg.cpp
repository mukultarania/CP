#include <iostream>
#include <vector>
using namespace std;

int main(){

    //Initialize Vector
    vector<int> a;
    vector<int> b(5, 10);
    vector<int> c(b.begin(), b.end());
    vector<int> d{1,2,3,4,5};

    // Iterate
    for(int i = 0; i<c.size(); i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

    for(auto it = d.begin(); it != d.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    for(int x:d){
        cout<<x<<" ";
    }
    cout<<endl;

    // Input In Vector
    vector<int> v;
    int n;
    cout<<"Enter Size of vector: ";
    cin>>n;

    for(int i=0; i<n; i++){
        int no;
        cin>>no;
        v.push_back(no);
    }

    //print
    cout <<"Vector V"<< endl;
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    //Vector Properties
    cout<<"V Size: "<<v.size()<<endl;
    cout << "V Capacity: " << v.capacity() << endl;
    cout << "V Max Size: " << v.max_size() << endl;

    cout << "D Size: " << d.size() << endl;
    cout << "D Capacity: " << d.capacity() << endl;
    cout << "D Max Size: " << d.max_size() << endl;

    return 0;
}