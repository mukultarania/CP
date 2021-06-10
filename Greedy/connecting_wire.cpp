//There are n white dotes and n black dotes, equally spaced in a line
//You want to connect each white dote with some black dote by a wire
//Find the minimum length of wire needed

#include<iostream>
#include<algorithm>
using namespace std;
// int dotes[] = {0, 1, 0, 0, 1, 1};
int white[] = { 0, 3, 5};
int black[] = {1, 2, 4};
int main(){

    sort(white, white + 3);
    sort(black, black + 3);
    int w = 0;
    int b = 0;
    int wire_len = 0;

    while(w<3 || b<3){
        wire_len += abs(black[w] - white[b]);
        w++;
        b++;
    }

    cout<<wire_len;

    return 0;
}