#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define INCRE 5

int main(void)
{
	int i, * p = NULL;
	printf("%d\n", p); //*p = 1; ����
	p = (int *)malloc(sizeof(int)*SIZE);
	if(p==NULL) exit(EXIT_FAILURE); 
	for(i=0;i<SIZE;i++)
	{
		p[i] = i;
		/* ���� 
		*p = i
		P++;
		*/
	}
	printf("The 9nd element is %d\n", p[8]);
	
	p = (int *)realloc(p, sizeof(int)*(SIZE+INCRE)); 
	p[11] = 10;
	printf("The 11st element is %d\n", p[11]);
	
	free(p);//ע�⣬ǧ������ˣ��ر��������� 
	
	return 0;
}
