#include<stdio.h>
#include<math.h>

int max(int array[], int n)
{
    int m=array[0];
    for(int i=1;i<n;i++)
    {
        if(array[i]>m)
        {
            m=array[i];
        }
    }
    return(m);
}

int min(int array[], int n)
{
    int m=array[0];
    for(int i=1;i<n;i++)
    {
        if(array[i]<m)
        {
            m=array[i];
        }
    }
    return(m);
}

float average(int array[],int n)
{
    float avg,sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=array[i];
    }
    avg=sum/n;
    return avg;
}

int mode(int array[], int n)
{
    int count,maxCount=0,i,j,maxVal;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i;j<n;j++)
        {
            if(array[i]==array[j])
            {
                count+=1;
            }
        }
        if(count>maxCount)
        {
            maxCount=count;
            maxVal=array[i];
        }
    }
    return(maxVal);
}

int factors(int n, int array[])
{
    int i=2,j=0;
    while(i<=sqrt(n))
    {
        while(n%i==0)
        {
            n=n/i;
            array[j]=i;
            j++;
        }
        i++;
    }
    if(n!=1)
    {
        array[j]=n;
        j++;
    }
    return(j);
}
