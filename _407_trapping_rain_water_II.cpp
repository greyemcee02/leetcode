#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int trapRainWater(vector<vector<int>>& heightMap) {
    priority_queue<int, vector<int>, greater<int>> Q;
    int n = heightMap.size(), m = heightMap[0].size();
    for(int i = 0; i < n; i++){
        Q.push(heightMap[i][0]);
        Q.push(heightMap[i][m-1]);
    } 
    for(int i = 1; i < m - 1; i++){
        Q.push(heightMap[0][i]);
        Q.push(heightMap[n-1][i]);
    }
    int water = 0;
    while(!Q.empty()){
        int k =  Q.top();
        Q.pop(); 
        for(int i = 1; i < n-1; i++){
            for(int j = 1; j < m-1; j++){
                if(heightMap[i][j] < k){
                    cout << i << " " << j << " " << k << endl;
                    water += (k - heightMap[i][j]);
                    heightMap[i][j] = k;
                }
            }
        }
    }
    return water;
}
int main() {
    vector<vector<int>> heightMap = {{1,4,3,1,3,2},{3,2,1,3,2,4},{2,3,3,2,3,1}};
    cout << trapRainWater(heightMap);
    
    return 0;
}