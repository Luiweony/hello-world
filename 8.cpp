#include<stdio.h>
#include<stdlib.h>
#include <conio.h>



void size1();
void size2();
void size3();
void displayMenu();
char choice = 0;



void main()
{

	while(1)
	{
		displayMenu();
		switch(choice)
		{
		case'0':
				exit(0);
		case'1':
			system("cls");
			printf("\n");
			size1();
	    	system("pause");
			break;
		case'2':
			system("cls");
			printf("\n");
			size3();
			system("pause");
				break;
			case'3':
				system("cls");
				printf("\n");
			    size2();
				system("pause");
				break;
			
		}
	}  
}
void displayMenu()
{

	while(1){	
		system("cls");
		printf("----------四则运算------------\n\n");
		printf("----------(1)中文-------------\n\n");
		printf("----------(2)日文-------------\n\n");
		printf("----------(3)英文-------------\n\n");
		printf("----------(0)退出-------------\n\n");

		printf("\n请选择操作：");

		choice = getche();
		printf("\n");
		if((choice-'0')<0||(choice-'0')>3){
		printf("\n请选择正确的选项!\n");
		system("pause");
		}
		else
			return;
	}

}
void size1()
{
	int a,b,x,y,all=0,r=0,e=0,g;
	char z;
	int m;
	printf("欢迎使用四则运算器!\n 输入h就是结束运算\n");

    printf("1.加法\n");
    printf("2.减法\n");
    printf("3.乘法\n");
    printf("4.除法\n");
    printf("请输入一个一到四的一个整数:");
    scanf("%d",&m);
    while ((z=getchar())!='h')
	{	
		all++;
        a=rand();
        b=rand();
		x=a%50;y=b%50;
		switch(m)
		{

		case 1:
			{
				printf("%d+%d=",x,y);
                scanf("%d",&z);
                if(x+y==z)
                r++;
                else e++;
                break;
		   }

    	case 2:{
	        	printf("%d-%d=",x,y);
                scanf("%d",&z);
                if(x-y==z)
                r++;else e++;
                break;
		   }
		case 3:{
		        printf("%d*%d=",x,y);
		        scanf("%d",&z);
                 if(x*y==z)
                 r++;else e++;
                 break;
		   }
		case 4:{
			    printf("%d/%d=",x,y);
				scanf("%d",&z);
               if(x/y==z)
                r++;else e++;
                break;
		   }
		}
		g = 100*r/all;
	}
	printf("你的最终得分是:%d\n",g);
	printf("所有题目的总数是 %d,对的题目是 %d,错的题目是 %d\n",all,r,e);
}
void size2()
{
	int a,b,x,y,all=0,r=0,e=0,g;
	char z;
	int m;
	printf("welcome!\ninput h to end the yunsuan\n");

    printf("1.addtest\n");
    printf("2.minustest\n");
    printf("3.multiplytest\n");
    printf("4.dividetest\n");
    printf("please input 1 to 4:");
    scanf("%d",&m);
    while ((z=getchar())!='h')
	{	
		all++;
        a=rand();
        b=rand();
		x=a%50;y=b%50;
		switch(m)
		{

		case 1:
			{
				printf("%d+%d=",x,y);
                scanf("%d",&z);
                if(x+y==z)
                r++;
                else e++;
                break;
		   }

    	case 2:{
	        	printf("%d-%d=",x,y);
                scanf("%d",&z);
                if(x-y==z)
                r++;else e++;
                break;
		   }
		case 3:{
		        printf("%d*%d=",x,y);
		        scanf("%d",&z);
                 if(x*y==z)
                 r++;else e++;
                 break;
		   }
		case 4:{
			    printf("%d/%d=",x,y);
				scanf("%d",&z);
               if(x/y==z)
                r++;else e++;
                break;
		   }
		}
		g = 100*r/all;
	}
	printf("Your grade is:%d\n",g);
	printf("all question number is %d,right is %d,error is %d\n",all,r,e);
}




void size3()
{
	int a,b,x,y,all=0,r=0,e=0,g;
	char z;
	int m;
	printf("四則演算器の使用を歓迎します !\n入力h終わり演算\n");

    printf("1.加法\n");
    printf("2.減算 \n");
    printf("3.乗法\n");
    printf("4.除法\n");
    printf("数字1～4を入力してください :");
    scanf("%d",&m);
    while ((z=getchar())!='h')
	{	
		all++;
        a=rand();
        b=rand();
		x=a%50;y=b%50;
		switch(m)
		{

		case 1:
			{
				printf("%d+%d=",x,y);
                scanf("%d",&z);
                if(x+y==z)
                r++;
                else e++;
                break;
		   }

    	case 2:{
	        	printf("%d-%d=",x,y);
                scanf("%d",&z);
                if(x-y==z)
                r++;else e++;
                break;
		   }
		case 3:{
		        printf("%d*%d=",x,y);
		        scanf("%d",&z);
                 if(x*y==z)
                 r++;else e++;
                 break;
		   }
		case 4:{
			    printf("%d/%d=",x,y);
				scanf("%d",&z);
               if(x/y==z)
                r++;else e++;
                break;
		   }
		}
		g = 100*r/all;
	}
	printf("あなたの最終得点は:%d\n",g);
	printf("すべての問題の個数は %d,正しい数を %d,誤りの数が %d\n",all,r,e);
}


