#include <stdio.h>
#include <math.h>
 
int prime( int p );
int PrimeSum( int m, int n );
 
int main()
{
    int m, n, p;
 
    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));
 
    return 0;
}
 
int prime( int p ){
	
	int i,temp=1; 
 
	//首先小于等于0或等于1的数不是素数 
	if(p<=0 || p==1){
		return 0;
	}
	//2是素数 
	if(p == 2){
		return 1;
	}
	//从3开始，能被2至p-1的任何一个数整除都不是素数 
	for(i=2 ; i<p ; i++){
		if(p%i == 0){
			temp = 0;
			break;
		}
	}
		
	return temp;
}
 
int PrimeSum( int m, int n ){
	
	int p,sum = 0;
 
	//p从m遍历到n 
	for(p=m; p<=n; p++){
		//判断每一个p是否为素数，如果是素数，则加入sum 
        if( prime(p) == 1 ){
        	 sum += p;
        }  
    }		
	 
	return sum;
} 