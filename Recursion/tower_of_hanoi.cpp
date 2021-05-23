#include <iostream>
using namespace std;

void move(int n, char src, char helper, char dest){
    //Base Case
    if(n == 0){
        return;
    }

    //Rec Case
    move(n-1, src, dest, helper);
    cout << "Shift disk " << n << " form "<<src<<" to "<<dest<<endl;
    move(n-1, helper, src, dest);

}

int main(){
    int n;
    cin>>n;
    move(n, 'A', 'B', 'C');
    return 0;
}