#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int people, pieces;

    cin >> people >> pieces;

    if (pieces > people){
        if (pieces - people > 1){
            cout << "Dr. Chaz will have " << pieces - people << " pieces of chicken left over!\n";
        }
        else{
            cout << "Dr. Chaz will have " << pieces - people << " piece of chicken left over!\n";
        }
    }
    else {
        if (people > pieces && people - pieces > 1){
            cout << "Dr. Chaz needs " << people - pieces << " more pieces of chicken!\n";
        }
        else{
            cout << "Dr. Chaz needs " << people - pieces << " more piece of chicken!\n";
        }
    }

    return 0;
}