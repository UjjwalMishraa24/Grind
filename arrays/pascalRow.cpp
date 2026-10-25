class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long int first = 1;
        vector <int> row;
        row.push_back(first);
        for(int col= 1; col<=rowIndex; col++){
            first = first*(rowIndex-col+1);
            first = first/col;
            row.push_back(first);
            
        }
        return row;
        
    }
     
};
