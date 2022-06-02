// Problem Link: https://www.interviewbit.com/problems/word-count/

/*
    =>AUTHOR		:	Bhavya Solanki	<=
    =>DATE		:	02 Jun 2022	<=
*/

/*
    String may have some white spaces before and after words handle it carefully.
    
    Time Complexity:-   O(|A|)
    Space Complexity:-  O(1)
*/

int Solution::solve(string A) {
    int ans=0;
    int i=0,n=A.size(),j;

    while(A[i]==' '&&i<n) i++;

    if(i==n) return 0; // if string contains all white space answer = 0.
    j=n-1;
    while(A[j]==' '&&j>-1) j--;

    for(int index=i;index<j;index++) if(A[index]==' '&&A[index+1]!=' ') ans++;
    
    return ans+1;
}