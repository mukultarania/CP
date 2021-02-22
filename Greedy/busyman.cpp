//In this program we have different ACTIVITY and every activity have some start time and finish time
// We wants to pick maximum number of activities that we can do in that time 
//TEst Case
// Sample Input: (empty lines just for clarity)
// 3
// 3
// 3 9
// 2 8
// 6 9

// 4
// 1 7
// 5 8
// 7 8
// 1 8

// 6
// 7 9
// 0 10
// 4 5
// 8 9
// 4 10
// 5 7

// Sample Output:
// 1
// 2
// 3

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}

int main(){
    int t, n, start, end;
    cin>>t;
    //Creating Vector that take pair as a value
    vector<pair<int, int>> v;
    while(t--){
        cin>>n;
        for(int i = 0; i<n; i++){
            cin>>start>>end;
            //Adding start and end time of all activity in vector
            v.push_back(make_pair(start,end));
        }
        
        //Sorting Vector According to their End Time
        sort(v.begin(), v.end(), compare);

        //Start Picking Activity
        //Taking first activity
        int res = 1;
        int fin = v[0].second;       
        
        for(int i = 1; i<n; i++){
            //Checking finish time of first activity and start time of next activity
            if(v[i].first >= fin){
                fin = v[i].second;
                res++;               
            }           
        }

        cout<<res<<endl;
        v.clear();
    }

    return 0;
}