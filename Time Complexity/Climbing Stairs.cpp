// Problem Link: https://www.interviewbit.com/problems/climbing-stairs/

/*
    =>AUTHOR		:	Bhavya Solanki	<=
    =>DATE		:	02 Jun 2022	<=
*/

/*
    Simple recursion and Dynamic programming problem. Solved it using recursion with memoization

    Time Complexity:-   O(N)
    Space Complexity:-  O(N)
*/

int climbstairs(vector<int> &v,int p,unordered_map<int,int> &m)
{
    if(m.count(p)) return m[p];
    if(p==2||p==1) return v[p];
    if(p==0) return 0;
    m[p]=min(climbstairs(v,p-1,m),climbstairs(v,p-2,m))+v[p];
    return m[p];
}

int Solution::solve(vector<int> &A) {
    unordered_map<int,int> m;
    return climbstairs(A,A.size()-1,m)+A[0];
}
