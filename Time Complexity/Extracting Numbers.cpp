// Problem Link: https://www.interviewbit.com/problems/extracting-numbers/

/*
    =>AUTHOR		:	Bhavya Solanki	<=
    =>DATE		:	02 Jun 2022	<=
*/

/*
    Use commas as separtor. while traversing the string whenever you reach ',' add number to answer sum and initialize it to 0 and keep constructing it. After traversal finished make sure to again add the number to the answer sum.
    
    Time Complexity:-   O(|A|)
    Space Complexity:-  O(1)
*/

long Solution::solve(string A) {
    long long sum=0,number=0;

    for(int i=0;i<A.size();i++)
    {
        if(A[i]>='0'&&A[i]<='9') number=number*10+A[i]-'0';
        else
        {
            sum+=number;
            number=0;
        }
    }
    
    sum+=number;
    return sum;
}