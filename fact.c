#include<stdio.h>

int fact(int number)
{   
    int ans;
    ans=1;
    for(int i=1;i<=number;i++) ans=ans*i;
    return ans; 
}
int main()
{
    int n,r,factn,factr,factnr;
    int fact (int number);
    scanf("%d %d",&n,&r);
    factn=fact(n);

    factr=fact(r);
    
    factnr=fact(n-r);

    printf("ncr = %d",factn/(factr*factnr));

    return 0;    
}

