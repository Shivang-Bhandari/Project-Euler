//libraries


int main(){
    int t;
    scanf("%d",&t);
    for(int i = 0; i < t; i++){
        long long int n;
        long long int a,x=0,y=1,z=0, sum=0;
        scanf("%lld", &n);
            while(z<=n){
                z=x+y;
                x=y;
                y=z;
                if(z%2==0 && z<=n){
                    sum = sum+z;
                }
            }
            printf("%lld\n", sum);
    }
    return 0;
}
