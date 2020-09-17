#include <iostream>
#include <string>
using namespace std;

int main(){
    
    //String Init
    string s1("Hello");

    
    //EMpty FUnction
    if(s1.empty()){
        cout<<"s1 is an Empty String"<<endl;
    }else{
        cout<<"Not Empty"<<endl;
    }

    cout<<s1;

    //String Append
    s1.append("? Mukul");
    cout<<s1<<endl;
    s1 += "  YO YO";
    cout<<s1<<endl;

    //Remove
    cout<<"String S1 Length: "<<s1.length()<<endl;
    s1.clear();
    cout<<"String S1 Length: "<< s1.length() << endl;

    //Compare 2 Strings
    string sm = "Mango";
    string so = "Orange";
    cout<<"Compare: "<<sm.compare(so)<<endl; //return 0 if equal else greater and lesser

    //Operator over loaded
    if(sm > so){
        cout<<"Mango is greater than Orange"<<endl;
    } else {
        cout<<"Orange is greater than Mango"<<endl;
    }

    //Find substring
    s1 = sm + " and " + so;
    int idx = s1.find("and ");
    cout<<"And at index: "<<idx<<endl;

    //Remove a word from string
    string word = "and ";
    int len = word.length();
    s1.erase(idx, len);
    cout<<"After Erase:"<<s1<<endl;

    //Iterate over all element in string
    for(int i = 0; i<s1.length(); i++){
        cout<<s1[i]<<":";

    }
    cout<<endl;

    for(auto it = s1.begin(); it != s1.end(); it++){
        cout<<(*it)<<",";
    }
    cout<<endl;

    // ForEAch loop
    for(auto c:s1){
        cout<<c<<".";
    }
    cout<<endl;




 




    return 0;
}