 #include<stdio.h>
struct student{
	char num[100];
	int ji;
	int test;
};
int main()
{
	struct student stu[1005];
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		scanf("%s %d %d",&stu[i].num,&stu[i].ji,&stu[i].test);
	}
	int j;
	int b[1000];
	scanf("%d",&j);
	int h;
	for(i=0;i<j;i++){
		scanf("%d",&b[i]);
	}
	for(h=0;h<j;h++){
		for(i=0;i<n;i++){
			if(stu[i].ji==b[h]){
				printf("%s %d\n",stu[i].num,stu[i].test);
			}
		}
	}
	return 0;	
}
