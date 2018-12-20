int done(vector<int> &C, long long m, int b, int a)
{
    int sum=0;
    for(int  i=0;i<C.size();i++)
    {
        sum=sum+(C[i]*b);
        if(sum>m)
        {
            a--;
            sum=0;
            sum=sum+(C[i]*b);
        }  
    }
    if(a==1)
        return sum;
    else if(a<1)
        return -1;
    else if(a>1)
        return -2;
        
}
 
int Solution::paint(int A, int B, vector<int> &C) {
    int n=C.size();
    long long min=C[0],max=0;
    for(int i=0;i<n;i++)
    {
        max=max+C[i];
        if(min>C[i])
            min=C[i];
    }
    long long mid,num;
    min=min*B;
    max=max*B;
    while(min<=max)
    {
        mid=(min+max)/2;
        num = done(C, mid, B, A);
        if(num==-1)
            min=mid+1;
        else if(num==-2)
            max=mid-1;
        else if(num>mid)
            min=mid+1;
        else
            max=max-1;
    }
    return mid%10000003;
}
