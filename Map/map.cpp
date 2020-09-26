#include<iostream>
#include<string>
#include<map>
using namespace std;

void gg_p(string fruit, map<string, int> m){
    if (m.count(fruit))
    {
        cout << "Price of " << fruit << " is " << m[fruit] << endl;
    }
    else
    {
        cout << "Fruit is not present" << endl;
    }
}

int main(){
    map<string, int> m;

    //Insert
    m.insert(make_pair("apple", 50));

    pair<string, int> p;
    p.first = "orange";
    p.second = 90;
    m.insert(p);

    m["banana"] = 40;

    //Search
    cout<<"Enter Fruit Name to search"<<endl;
    string fruit;
    cin>>fruit;
    auto it = m.find(fruit); //Return Iterator
    if(it!=m.end()){
        cout<<"Price of "<<fruit<<" is "<<m[fruit]<<endl;
    }else{
        cout<<"Fruit is not present"<<endl;
    }
    
    //Update
    cout<<"After Update"<<endl;
    m[fruit] += 22;
    gg_p(fruit, m);

    m["lichi"] = 93;
    m["pineapp"] = 66;

    //Erase fruit
    m.erase(fruit);

    //Iteration for all
    for(auto it = m.begin();it !=m.end(); it++){
        cout<< it->first <<" and "<< it->second << endl;
    }

    for(auto it:m){
        cout<< it.first <<" : "<< it.second <<endl;
    }

    
}