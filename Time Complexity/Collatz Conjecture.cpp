// Problem Link: https://www.interviewbit.com/problems/collatz-conjecture/

/*
    =>AUTHOR		:	Bhavya Solanki	<=
    =>DATE		:	02 Jun 2022	<=
*/

/*
    Generated the sequence using bruteforce approach

    Time Complexity:-   O(B)
    Space Complexity:-  O(1)
*/

long Solution::solve(int A, int B) {
    long long ans=A;

    for(int i=2;i<=B;i++)
    {
        if(ans%2) ans=long(ans*3)+1;
        else ans/=2;
    }
    
    return ans;
}
