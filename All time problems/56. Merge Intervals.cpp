class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         if( intervals.size() == 0 )
    {
        return vector< vector<int>> ();
    }
    
    vector< vector <int> > ans;
    
    sort ( intervals.begin(), intervals.end() );
    
    int i;
    for ( i=0; i< intervals.size()-1; i++ )
    {
        if( intervals[i][1] >= intervals[i+1][0] )
        {
            intervals[i+1][0] = intervals[i][0];
            intervals[i+1][1] = max( intervals[i][1], intervals[i+1][1] );
        }
        
        else
        {
            ans.push_back( intervals[i] );
        }
    }
    
    ans.push_back( intervals[i]);
    
    return ans;
    }
};