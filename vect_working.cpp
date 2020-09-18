#include<iostream>
#include<vector>
using namespace std;

void p_rint(vector<int> a){
    cout << "Vector A:" << endl;
    for (int x : a)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << endl;
}

int main(){
    int n;
    cout<<"Enter Size of Vector: ";
    cin>>n;

    vector<int> a;
    for(int i=0; i<n; i++){
        int item;
        cin>>item;
        a.push_back(item);
    }

    //Printing
    p_rint(a);
    cout << endl;

    //Pop Back
    cout<< "Pop Last Element" << endl;
    a.pop_back();
    p_rint(a);
    cout << endl;

    //Insert At index 2, 4 times
    cout << "Insert At index 2, 4 times: " << endl;
    a.insert(a.begin() + 2, 4, 100);
    p_rint(a);
    cout << endl;

    //Erase from 1-2
    cout << "Erase from index 1-2" << endl;
    a.erase(a.begin()+1, a.begin()+2);
    p_rint(a);
    cout << endl;

    // Different Functions of Vector
    cout << "A: Front Element" << a.front() << endl;
    cout << "A: Last Element" << a.back() << endl;
    cout << "A Size: " << a.size() << endl;
    cout << "A Capacity: " << a.capacity() << endl;
    cout << "A Max Size: " << a.max_size() << endl;
    cout<< endl;


    //Reserver Capacity of vector
    a.reserve(1000);
    cout << "A Size: " << a.size() << endl;
    cout << "A Capacity: " << a.capacity() << endl;
    cout << "A Max Size: " << a.max_size() << endl;
    cout << endl;
    return 0;
}