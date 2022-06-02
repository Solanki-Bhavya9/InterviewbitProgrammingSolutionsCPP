// Problem Link: https://www.interviewbit.com/problems/pangram-check/

/*
    =>AUTHOR		:	Bhavya Solanki	<=
    =>DATE		:	02 Jun 2022	<=
*/

/*
    Traverse through all words of sentence while keeping track of total alphbates seen and at the end check if we have total 26 alphabates or not
    
    Time Complexity:-   O(len(sentence))
    Space Complexity:-  O(1)
*/

int Solution::solve(vector<string> &A) {
    unordered_map<int,int> mp;
    for(int i=0;i<A.size();i++) for(int j=0;j<A[i].size();j++) mp[tolower(A[i][j])]++;
    if(mp.size()==26) return 1;
    return 0;
}
