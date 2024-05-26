#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc;

    cin >> tc;
    int yearCourse, yearBirthday,courses;
    string name, dateCourse, Birthday;
    while (tc--){
        cin >> name >> dateCourse >> Birthday >>courses;

        yearCourse = stoi(dateCourse.substr(0,4));
        yearBirthday = stoi(Birthday.substr(0,4));

        if (yearCourse >= 2010 || yearBirthday >= 1991){
            cout << name << " eligible\n";
        }
        else if (courses <= 40){
            cout << name << " coach petitions\n";
        }
        else{
            cout << name << " ineligible\n";
        }
    }

    return 0;
}