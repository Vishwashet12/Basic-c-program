// Leena Lukesh Metha
// 2503033111372049
#include<stdio.h>
int main(){
	int marks;
	printf("Enter marks: ");
	scanf("%d" , &marks);
	if(marks>=75){
		printf("Grade A");
	}
	else if(marks>=60){
		printf("Grade B");
	}
		else if(marks>=40){
		printf("Grade C");
    }
    else{
		printf("Grade F (Fail)");
	}
return 0;
}

