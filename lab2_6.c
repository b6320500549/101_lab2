#include<stdio.h>
#include<string.h>
int main(){
	unsigned int a=0;
	char b[10][10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	int c[20];
	int i,j;
	if(a>=0&&a<=10000000);
	scanf("%d",&a);
	for(i=0;a>0;i++){
		c[i]=a%10;
		a=a/10;
	}

    for(i--;i>=0;i--){
		for(j=0;j<10;j++)
			if(c[i]==j)
				printf("%s",b[j]);
			if(i!=0)
				printf("-");

	}
	return 0;
}
