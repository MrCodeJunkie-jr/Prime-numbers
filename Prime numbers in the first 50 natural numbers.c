# include <stdio.h>

int main()
{
	int i,n,count;
	for(n=1;n<=50;n++){
		count=0;
		for(i=1;i<=n;i++){
			if(n%i==0){
				count++;
			}
		}
		if(count==2){
			printf("%d\t",n);
		}
	}
		return 0;
}
