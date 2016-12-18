#include<stdio.h>
bool seqsearch(int list[],int last,int target,int *locn)
{
	int looker;
	bool found;
	looker=0;
	while(looker<last&&target!=list[looker])
	looker++;
	*locn=looker;
	found=(target==list[looker]);
	return found; 
 } 
 int main()
 {
 	int a[10]={10,8,77,20,16,44,59,31,7,80};
 	int i,j;
 	printf("输出原数组元素：\n");
 	for(i=0;i<10;i++)
 	{
 		printf("%d\t",a[i]);
	 }
	printf("\n输入想要查找的数字：");
	int target,locn;
	scanf("%d",&target);
	if(seqsearch(a,10,target,&locn)==1)
	{
		printf("The number is %d\n",locn); 
	}
	else 
	printf("NO FOUND!");
	return 0; 
 	
  } 
