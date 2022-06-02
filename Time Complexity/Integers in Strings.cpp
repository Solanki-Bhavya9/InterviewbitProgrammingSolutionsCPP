// Problem Link: https://www.interviewbit.com/problems/integers-in-strings/

/*
    =>AUTHOR		:	Bhavya Solanki	<=
    =>DATE		:	02 Jun 2022	<=
*/

/*
    Use commas as separtor. while traversing the string whenever you reach ',' add number to answer vector and initialize it to 0 and keep constructing it. After traversal finished make sure to again add the number to the vector.
    
    Time Complexity:-   O(N)
    Space Complexity:-  O(1)
*/

vector<int> Solution::solve(string A) {
    vector<int> ans;
    int n=0;

    for(int i=0;i<A.size();i++)
    {
        if(A[i]==',')
        {
            ans.push_back(n);
            n=0;
        }
        else n=n*10+A[i]-48;
    }
    
    ans.push_back(n);
    return ans;
}