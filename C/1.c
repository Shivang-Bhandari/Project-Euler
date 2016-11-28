//libraries

int main(){
    int t;
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long long int n, sum=0, n3,s3=0,n5, s5=0,n15, s15=0;
        scanf("%lld",&n);
        if(n%3!=0){
             n3 = n/3;
             s3 = (((n3*3)+3)*n3)/2;
            }
        if(n%3==0){
             n3 = (n-1)/3;
             s3 = (((n3*3)+3)*n3)/2;
        }
        if(n%5!=0){
            n5=n/5;
            s5= (((n5*5)+5)*n5)/2;
        }
        if(n%5==0){
            n5=(n-1)/5;
            s5= (((n5*5)+5)*n5)/2;
        }
        if(n%15!=0){
            n15=n/15;
            s15= (((n15*15)+15)*n15)/2;
        }
        if(n%15==0){
            n15=(n-1)/15;
            s15= (((n15*15)+15)*n15)/2;
        }
        sum = (s3+s5)-s15;
        printf("%lld\n", sum);
    }
    return 0;
}
