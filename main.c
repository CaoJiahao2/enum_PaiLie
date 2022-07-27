#include <stdio.h>
#define maxnum 20
int ct=0;
void print_permutation(int n,int *A,int cur){
    if (cur==n){
        for(int i=0;i<n;i++)printf("%d ",A[i]);
        printf("\n");
        ct++;
    }
    else for(int i=1;i<=n;i++){
        int flag=1;
        for(int j=0;j<cur;j++)
            if(A[j]==i)flag=0;
            if(flag){
                A[cur]=i;
                print_permutation(n,A,cur+1);
            }
    }
}
int main() {
    int n,A[maxnum];
    scanf("%d",&n);
    print_permutation(n,A,0);
    printf("there are %d numbers in total!\n",ct);
    return 0;
}
