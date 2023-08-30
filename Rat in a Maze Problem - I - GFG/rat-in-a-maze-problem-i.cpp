//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool canGo(int x, int y, int n, vector<vector<int>> &m, vector<vector<int>> visited){
        if((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1 ){
            return true;
        }
        else{
            return false;
        }
    }
    
    void solve(vector<vector<int>> &m, string path, vector<vector<int>> visited, int n, 
    int x, int y, vector<string> &ans){
        
        //base case
        if(x == n - 1 && y == n - 1){
            ans.push_back(path);
            return;
        }
        visited[x][y] = 1;
        
        //now the rat has 4 choices(D,L,R,U)
        
        //Down
        int newx = x + 1;  
        int newy = y;
        if(canGo(newx, newy, n, m, visited)){
            path.push_back('D');
            solve(m, path, visited, n, newx, newy, ans);
            path.pop_back();
            
        }
        
        //left
        newx = x;  
        newy = y - 1;
        if(canGo(newx, newy, n, m, visited)){
            path.push_back('L');
            solve(m, path, visited, n, newx, newy, ans);
            path.pop_back();
            
        }
        
        //Right
        newx = x;  
        newy = y + 1;
        if(canGo(newx, newy, n, m, visited)){
            path.push_back('R');
            solve(m, path, visited, n, newx, newy, ans);
            path.pop_back();
            
        }
        
        //left
        newx = x - 1;  
        newy = y;
        if(canGo(newx, newy, n, m, visited)){
            path.push_back('U');
            solve(m, path, visited, n, newx, newy, ans);
            path.pop_back();
            
        }
        visited[x][y] = 0;//assigning visited index 0 when returning
    }
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        if(m[0][0] == 0) return ans;
        int srcx = 0;
        int srcy = 0;
        
        //creating a 2d array to check whether that path is visited or not
        vector<vector<int>> visited = m;
        //initialize with 0
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                visited[i][j] = 0;
            }
        }
        
        string path = "";
        
        solve(m, path, visited, n, srcx, srcy, ans);
        sort(ans.begin(), ans.end());
        return ans;
        
        
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends