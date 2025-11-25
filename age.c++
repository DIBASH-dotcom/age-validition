#include<stdio.h>
#include<string.h>
int main() {
	int age[10];
	int total=0;
	float average=0;
	int max=-99999;
	int min=99999;
	char name[10][100];
	int i;
	char maxname[100], minname[100];
	
	for(i=0; i<10; i++) {
	printf("Enter name of employee %d: ", i+1);
        scanf("%s", name[i]);

        printf("Enter age: ");
        scanf("%d", &age[i]);
		
		
		
		
		if(age[i]<0||age[i]>100) {
			printf("age validaltion worng please ");
			i--;
			continue;
		}
		
		total=age[i] +total;
			
				if(age[i]>max) {
		max=age[i];
		strcpy(maxname,name[i]);
	}
	
	if(age[i]<min){
		min=age[i];
		strcpy(minname,name[i]);
		
	}
			
			
		}
		
		
	
	average =total/10.0;
	

	printf("THe  Total age is %d :", total);
	printf("The average age is %.2f\n", average);
	printf("The Highest name and age is : %s =%d \n ",maxname,max);
	printf("The Lowest name and  age : %s =%d \n", minname,min);
	return 0;
}
