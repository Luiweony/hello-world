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
		printf("----------��������------------\n\n");
		printf("----------(1)����-------------\n\n");
		printf("----------(2)����-------------\n\n");
		printf("----------(3)Ӣ��-------------\n\n");
		printf("----------(0)�˳�-------------\n\n");

		printf("\n��ѡ�������");

		choice = getche();
		printf("\n");
		if((choice-'0')<0||(choice-'0')>3){
		printf("\n��ѡ����ȷ��ѡ��!\n");
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
	printf("��ӭʹ������������!\n ����h���ǽ�������\n");

    printf("1.�ӷ�\n");
    printf("2.����\n");
    printf("3.�˷�\n");
    printf("4.����\n");
    printf("������һ��һ���ĵ�һ������:");
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
	printf("������յ÷���:%d\n",g);
	printf("������Ŀ�������� %d,�Ե���Ŀ�� %d,�����Ŀ�� %d\n",all,r,e);
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
	printf("�Ąt��������ʹ�ä�Zӭ���ޤ� !\n����h�K�������\n");

    printf("1.�ӷ�\n");
    printf("2.�p�� \n");
    printf("3.�\��\n");
    printf("4.����\n");
    printf("����1��4���������Ƥ������� :");
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
	printf("���ʤ�����K�õ��:%d\n",g);
	printf("���٤ƤΆ��}�΂����� %d,���������� %d,�`������� %d\n",all,r,e);
}


