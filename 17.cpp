#include <stdio.h>　

#include <stdlib.h> 

int main(int argc, char *argv[]) {

	int z[5]={0};

	int r=0, min;

	printf("             找尋陣列中最小值的程式              \n");

	printf("-------------------------------------------------\n");   

	printf("請連續輸入五個數值：\n");

	for(r=0;r<5;r++)

	{

	   printf("第%d筆資料：", r+1 );

	   scanf("%d", &z[r]);

	}

	min=z[0];

	for(r=0;r<5;r++)

	{

	  if (min>z[r])	

	  {

		  min=z[r];

	  }

	}

	printf("最小值是：%d\n\n",min); 

	system("PAUSE");	

	return 0;

}
