/*
    1. khubi interesting and mojar ekta problem.
    2. amake 3 ta stack dibe and 3 ta stack er sum same banano lagbe. ami stack er top delete korte parbo.

*/

#include <bits/stdc++.h>

int getSum(stack<int> s) // ami stack recieve korbo. ami ekhane kono reference kori nai. karon main stack ta ami unchanged rakhbo. ekhane main sack ta receive kore just sum ta return dibo.
{
    int sum = 0;
    while (!s.empty())
    {
        sum += s.top();
        s.pop();
    }
    return sum;
}

int maxSum(stack<int> &s1, stack<int> &s2, stack<int> &s3) // given function
{
    // Write your code here
    int sum1 = getSum(s1);
    int sum2 = getSum(s2);
    int sum3 = getSum(s3);
    // cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
    while (true)
    {
        if (sum1 == sum2 && sum2 == sum3)
            break;
        if (sum1 >= sum2 && sum1 >= sum3)
        {
            sum1 -= s1.top();
            s1.pop();
        }
        else if (sum2 >= sum1 && sum2 >= sum3)
        {
            sum2 -= s2.top();
            s2.pop();
        }
        else
        {
            sum3 -= s3.top();
            s3.pop();
        }
    }
    return sum1;
}