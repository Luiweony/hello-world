#include<stdio.h>
#include<string.h>
#include <conio.h>
#include<stdlib.h>
int *getCharNum(char*filename,int*totalNum);
int wc();
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
			
			wc();
			
			system("pause");
			
			break;
		}
	}
}
			
			
void displayMenu()
				
			{
				while(1){	
					
					system("cls");
					printf("----------wc����ѡ��------------\n\n");
					printf("----------(1)���빦������-------\n\n");
					printf("----------(0)�˳�---------------\n\n");
					
					printf("\n��ѡ�������");
					choice = getche();
					printf("\n");
					if((choice-'0')<0||(choice-'0')>1){
						printf("\n��ѡ����ȷ��ѡ��!\n");
						system("pause");
					}
					else
						return;
				}
			}
	int wc(){
				char filename[30];
				//totalNum[0]:������totalNum[1]:���ַ���totalNum[2]: �ܵ�����
				
				int totalNum[3]={0,0,0};
				printf("�����ļ����ƣ��磺d://2.txt��:");
				
				scanf("%s",filename);
				if(getCharNum(filename,totalNum))
				{
					printf("Total:%dlines,%dwords,%dchars\n",totalNum[0],totalNum[2],totalNum[1]);
				}
				else{
					printf("��������!\n");
				}
				return 0;
			}
			/**
			*
			ͳ���ļ����ַ�����������������
			*
			*@param
			filename
			�ļ���
			*@param
			totalNum
			�ļ�ͳ������
			**@return�ɹ�����ͳ�����ݣ����򷵻�NULL
			**/
			int*getCharNum(char*filename,int*totalNum)
			{
				
				FILE*fp;//ָ���ļ���ָ��
				char buffer[1003];//���������洢��ȡ����ÿ�е�����
				int bufferLen;//��������ʵ�ʴ洢�����ݵĳ���
				int i;//��ǰ������������i���ַ�
				char c;//��ȡ�����ַ�
				int isLastBlank=0;//�ϸ��ַ��Ƿ��ǿո�
				int charNum=0;//��ǰ�е��ַ���
				int wordNum=0;//��ǰ�еĵ�����
				int wordNum1=0;
				int charNum1=0;
				if((fp=fopen(filename,"rb"))==NULL)
				{
					perror(filename);
					return NULL;
				}
				
				printf("line words chars\n"); //ÿ�ζ�ȡһ�����ݣ����浽buffer��ÿ�����ֻ����1000���ַ�
				while(fgets(buffer,1003,fp)!=NULL){
					bufferLen=strlen(buffer);//����������������
					for(i=0;i<bufferLen;i++)
					{
						c=buffer[i];
						if(c==' '||c=='\t'){//�����ո�
							!isLastBlank&&wordNum++;//����ϸ��ַ����ǿո���ô��������1
							isLastBlank=1;
						}
				if(c!='\n'&&c!='\r')
						{//���Ի��з�
								
							charNum++;//����Ȳ��ǻ��з�Ҳ���ǿո��ַ�����1
						
						isLastBlank=0;
						}	
					
					}
					!isLastBlank&&wordNum++;//������һ���ַ����ǿո���ô��������1
					isLastBlank=1;
					//ÿ�λ�������Ϊ1
					//һ�н������������ַ������ܵ�������������
					totalNum[0]++;//������
					totalNum[1]+=charNum;//���ַ���
					totalNum[2]+=wordNum;//�ܵ�����
					printf("%-7d%-7d%d\n",totalNum[0],wordNum,charNum);//���㣬����ͳ����һ��
					charNum=0;
					wordNum=0;
				}
				return totalNum;
			}