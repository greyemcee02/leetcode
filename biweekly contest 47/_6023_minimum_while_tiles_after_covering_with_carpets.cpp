#include<iostream>
#include<string>
#include<queue>
#include<vector>
using namespace std;

int minimumWhiteTiles(string floor, int numCarpets, int carpetLen) {
   if(carpetLen*numCarpets >= floor.length()) return 0;
   priority_queue<int> Q;
   int cnt1 = 0;
   for(int i = 0; i < floor.length(); i++){
       if(floor[i] == '1'){
           int j = i+1;
           while(floor[j] =='1'){
               j++;
           }
           Q.push(j-i);
           cnt1 += (j-i);
           i = j;
           i--;
       }
    }     
    // while(numCarpets--){
    //     if(Q.empty()) break;
    //     int k = Q.top();
    //     Q.pop();
    //     if(k <= carpetLen);
    //     else{
    //         Q.push( k -carpetLen);
    //     }
    // }
    int res = 0;
    while(!Q.empty()){
        cout << Q.top() << " ";
        res+=Q.top();
        Q.pop();
    }
    return res;
}

int main() {
    string floor;
    int numcarpet, carpetlen;
    cin >> floor >> numcarpet >> carpetlen;
    cout << minimumWhiteTiles(floor, numcarpet, carpetlen);
    return 0;
}