//implementing binary search 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        
        int start = 0;
        int end = (row*col) - 1;
        int mid = start + (end - start) / 2;
        while(start <= end ){
            int element = matrix[mid / col][mid % col];
            //case 1
            if(element == target){
                return 1;
            }
            //case 2
            if(element < target ){
                start = mid + 1;
            }
            //case 3
            else{
                end = mid - 1;
            }
            
            mid = start + (end - start) / 2;
        }
        return 0;
    
    }
};