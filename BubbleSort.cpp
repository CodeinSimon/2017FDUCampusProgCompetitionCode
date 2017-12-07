//code by xionghaoran
#include<cstdio>
int le[100010],ri[100010];
int a[100010],fr[100010],ba[100010];
int max(int a,int b)
{
    return a>b?a:b;
}
int merg(int l,int m,int r)
{
    int i,j,k;
    for(i=l;i<m+1;i++) fr[i]=a[i];
    for(;i<r+1;i++) ba[i]=a[i];
    i=l;j=m+1;k=l;
    while(k<=r)
    {
        if(i==m+1)
        {
            while(j!=r+1) a[k++]=ba[j++];
        }
        else if(j==r+1)
        {
            while(i!=m+1)
            {
                ri[fr[i]]+=j-m-1;
                a[k++]=fr[i++];
            }
        }
        else if(fr[i]<=ba[j])
        {
            ri[fr[i]]+=j-m-1;
            a[k++]=fr[i++];
        }
        else
        {
            le[ba[j]]+=m-i+1;
            a[k++]=ba[j++];
        }
    }
}
void mergesort(int l,int r)
{
    if(r<=l) return ;
    int m=(l+r)/2;
    mergesort(l,m);
    mergesort(m+1,r);
    merg(l,m,r);
}
void solve()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) le[i]=ri[i]=0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    mergesort(0,n-1);
    for(i=1;i<=n;i++)
    {
        printf(" %d",max(le[i],ri[i]));
    }
}
int main()
{
    int cas;
    scanf("%d",&cas);
    for(int ind=1;ind<=cas;ind++)
    {
        printf("Case #%d:",ind);
        solve();
        printf("\n");
    }
}
