#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
    char special1[20]="00106725";
	char special2[20]="90819218";
	char first1[20]="09775722";
	char first2[20]="13440631";
	char first3[20]="26650552";
	char more1[20]="264";
	char more2[20]="809";
	char yournum[20];
	int time1,time2,time3,time4,time5,time6,time7;
	
	printf("�п�J�z���o���Ʀr:");
	scanf("%s",&yournum);
	
	time1=time2=time3=time4=time5=time6=time7=0;
	
	
	for(int len=7;len>=0;len--){
		if(yournum[len]==first1[len])time1++;
		else len=-1;
	}
	for(int len=7;len>=0;len--){
		if(yournum[len]==first2[len])time2++;
		else len=-1;
	}
	for(int len=7;len>=0;len--){
		if(yournum[len]==first3[len])time3++;
		else len=-1;
	}
	for(int len=7;len>=0;len--){
		if(yournum[len]==special1[len])time4++;
		else len=-1;
	}
	for(int len=7;len>=0;len--){
		if(yournum[len]==special2[len])time5++;
		else len=-1;
	}
	for(int len=7;len>=5;len--){
		if(yournum[len]==more1[len-5])time6++;
		else len=-1;
	}
	for(int len=7;len>=5;len--){
		if(yournum[len]==more2[len-5])time7++;
		else len=-1;
	}
	
   	if(time1==3 || time2==3 || time3==3 || time6==3 || time7==3)printf("�z���F200��\n");
	else if(time1==4 || time2==4 || time3==4)printf("�z���F1000��\n");
	else if(time1==5 || time2==5 || time3==5)printf("�z���F4000��\n");
	else if(time1==6 || time2==6 || time3==6)printf("�z���F10000��\n");
	else if(time1==7 || time2==7 || time3==7)printf("�z���F40000��\n");	
	else if(time1==8 || time2==8 || time3==8)printf("�z���F200000��\n");
	else if(time5==8)printf("�z���F2000000��\n");
	else if(time4==8)printf("�z���F10000000��\n");
	else printf("�z�S������\n");
	
	system("PAUSE");
	return 0;
}
