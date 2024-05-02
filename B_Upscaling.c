#include<stdio.h>
void solve(){
int num;scanf("%d",&num);
for (int i = 0; i <num; i++)
{
    for (int j= i; j < num+i; j++)
    {
        if(j%2==0)printf("##\n");
        if(j%2==0)printf("##");
        if(j%2==1) printf("--\n");
        if(j%2==1)  printf("--");
    }
    
}










}
int main(){
    int t;scanf("%d",&t);while(t--)
solve();
return 0;
}