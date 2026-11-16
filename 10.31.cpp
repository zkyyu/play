# include <stdio.h>
int main(){
	int poly[101]={0};
	int power,coef;
	while(scanf("%d %d",&power,&coef)==2){
		if(power==0&&coef==0){
			break;
		}
		poly[power]=coef;
	}
	while(scanf("%d %d",&power,&coef)==2){
		if(power==0&&coef==0){
			break;
		}
		poly[power] +=coef;
	}
	int first=1;
	for(int i=100;i>=0;i--){
		if(poly[i]==0){
			continue;
		}
		if(poly[i]>0&&!first){
			printf("+");
		}else if(poly[i]<0){
			printf("-");
		}
		int abs_coef=(poly[i]>0)?poly[i]:-poly[i];
		if(abs_coef!=1||i==0){
			printf("%d",abs_coef);
		}
		if(i>0){
			printf("x");
			if(i>1){
				printf("^%d",i);
			}
		}
		first = 0;
	}
	if(first){
		printf("0");
	}
	printf("\n");
	return 0;
}
