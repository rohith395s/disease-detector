#include<stdio.h>
#include<stdlib.h>
int key[20],n,m;
int *ht,index;
int count =0;
void insert(int key)
{
	index=key%m;
	while(ht[index] != -1)
	{
		index=(index+1)%m;
	}
	ht[index]=key;
	count++;
	}
void display()
{
	int i;
	if(count == 0)
	{
		printf("\nhash table is empty");
		return;
	}
	printf("\nhash able contents are:\n");
	for(i=0;i<m;i++)
	printf("\n enter the number of employee records (N):");
	scanf("%d",&n);
	printf("\nenter the two digit memory locations(m) for hash table:");
	scanf("%d", &m);
	ht =(int *)malloc(m*sizeof(int));
	for(i=0;i<n;i++)
	ht[i]=-1;
	printf("\nenter the four igit key values (k) for N employee records :\n");
	for(i=0;i<n;i++)
	{
		if(count==m)
		{
			printf("\n~~~hash table is full.cannot insert the reord % key~~~",i+1);
			break;
		}
		insert(key[i]);
	}
	

}
