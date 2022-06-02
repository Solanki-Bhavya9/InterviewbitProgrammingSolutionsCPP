// Problem Link: https://www.interviewbit.com/problems/palindromic-time/

/*
    =>AUTHOR		:	Bhavya Solanki	<=
    =>DATE		:	02 Jun 2022	<=
*/

/*
    Considered all cases and done with multiple IF statements

    Time Complexity:-   O(1)
    Space Complexity:-  O(1)
*/

int Solution::solve(string A) {

    if(A[0]==A[4]&&A[1]==A[3]) return 0;

    if(A[0]=='0'&&A[1]=='0')
    {
        int mm=(A[3]-48)*10+A[4]-48;
        return 60-mm+10;
    }

    if(A[0]=='2'&&A[1]=='3')
    {
        int mm=(A[3]-48)*10+A[4]-48;
        if(mm<=32) return 32 - mm;
        else return 60-mm;
    }

    if(A[1]>'4')
    {
        int mm=(A[3]-48)*10+A[4]-48;

        if(A[0]=='0')
        {
            if(A[1]=='5') if(mm<=50) return 50-mm;
            if(mm==0) return (10-A[1]+48)*60+1;
            return 61-mm+(10-A[1]+48-1)*60;
        }

        if(A[0]=='1')
        {
            if(A[1]=='5') if(mm<=51) return 51-mm;
            if(mm==0) return (10-A[1]+48)*60+2;
            return 62-mm+(10-A[1]+48-1)*60;
        }
    }

    int mm=(A[3]-48)*10+A[4]-48;
    int hhrev=(A[1]-48)*10+A[0]-48;
    
    if(mm<hhrev) return hhrev-mm;
    return 60 - mm + (A[1]+1-48)*10+A[0]-48;
}