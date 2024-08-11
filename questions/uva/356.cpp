#include <bits/stdc++.h>

using namespace std;

double dist(double x, double y){
    return sqrt(x*x + y*y);
}

int main(){
    int n, i = 0;

   while (cin >> n){
       int cells, insc = 0;
       cells = 4 + (8*(n-1));

       int x = 1, y = 1;
       double r = n-0.5;

       while (x < n){
           double dis1 = dist(x,y);
           double dis2 = dist(x-1, y);
           double dis3 = dist(x, y-1);

           if (dis1 <= r && dis2 <= r && dis3 <= r){
               insc++;
               y++;
           }
           else{
               y = 1;
               x++;
           }
       }
       insc *= 4;
       if (i != 0){
        printf("\n");
       }
       printf("In the case n = %d, %d cells contain segments of the circle.\n", n, cells);
       printf("There are %d cells completely contained in the circle.\n", insc);
       i++;
   }
  return 0; 
}
