/*
#include <stdio.h>
int main(void)
{
	printf("Ȳ�ָ�\n");
	printf("��⵵ ������ �д籸 ���ڵ� Ǫ��������Ƽ3��\n");
	printf("010-6689-1449");
	return 0; 
}*/

/*#include <stdio.h>
int main(void)
{
	printf("Hello Everybody\n");
	printf("%d\n", 1234);
	printf("%d %d\n", 10, 20);
	return 0;
}*/
/*
#include <stdio.h>
int main(void)
{
	printf("My age: %d \n", 22);
	printf("%d is my point \n", 100);
	printf("Good \nmorning \neverybody\n");
	return 0;
}
*/
/*#include <stdio.h>
int main(void)
{
	printf("�� �̸��� Ȳ�ָ��Դϴ�.\n");
	printf("�� ���̴� %d���̰��\n", 20);
	printf("���� ��� ���� �������� %d-%d�Դϴ�.",123,456);
	return 0;
}*/

/*#include <stdio.h>
int main(void)
{
	printf("%dX%d=%d\n",4,5,20);
	printf("%dX%d=%d",7,9,63);
}

#include <stdio.h>
int main(void)
{
	int num1=3;
	int num2=4;
	int result=num1+num2;
	
	printf("���� ���: %d \n", result);
	printf("%d+%d=%d \n", num1, num2, result);
	printf("%d��(��) %d�� ���� %d�Դϴ�.\n", num1, num2, result);
	return 0; 
}


#include <stdio.h>

int main(void)
{
	char ch =9;
	int inum =1052;
	double dnum =3.1415;
	printf("����ch��ũ��:%d \n",sizeof(ch));
	printf("����inum��ũ��:%d \n",sizeof(inum));
	printf("����dnum��ũ��:%d \n",sizeof(dnum));
	
	printf("char�� ũ��: %d \n", sizeof(char));
	printf("int�� ũ��: %d \n", sizeof(int));
	printf("long�� ũ��: %d \n", sizeof(long));
	printf("long long�� ũ��: %d \n", sizeof(long long));
	printf("float�� ũ��: %d \n", sizeof(float));
	printf("double�� ũ��: %d \n", sizeof(double));
	return 0;
}


#include <stdio.h>

int main(void)
{
	char num1=1, num2=2, result1=0;
	short num3=300, num4=400, result2=0;
	
	printf("size of num1 & num2: %d, %d \n", sizeof(num1), sizeof(num2));
	printf("size of num3 & num4: %d, %d \n", sizeof(num3), sizeof(num4));
	
	printf("size of char add: %d, \n", sizeof(num1+num2));
	printf("size of short add: %d, \n", sizeof(num3+num4));
	
	result1=num1+num2;
	result2=num3+num4;
	printf("size of result1 & result2: %d, %d \n",sizeof(result1), sizeof(result2));
	return 0;
}


#include <stdio.h>               #���ͷ� ��� 

int main(void)
{
	printf("literal int size: %d \n", sizeof(7));
	printf("literal double size: %d \n", sizeof(7.14));
	printf("literal char size: %d \n", sizeof('A'));
	return 0;
}


int main(void)                   #�̸��� ���ϴ� �ɺ��� ��� 
{
	float num1 = 5.789f;
	float num2 = 3.24 + 5.12f;
	return 0;
}

#include <stdio.h>               #�ڷ����� ����ȯ 

int main(void)

{
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;
	
	printf("���� 245�� �Ǽ���: %f \n", num1);
	printf(" �Ǽ� 3.1415�� ������: %d \n", num2);
	printf("ū ���� 129�� ���� ������: %d \n", ch);
	return 0;
}


#include <stdio.h>

int main(void)
{
	int num1=3, num2=4;
	double divResult;
	divResult = (double)num1 / num2;
	printf("������ ���: %f \n", divResult);
	return 0;
}

#include <stdio.h>                 #printf �Լ��� �������� 

int main(void)

{
	int my_age=12; 
	printf("�� ���̴� 10������ %d��, 16������ %X�� �Դϴ�. \n", my_age, my_age);
	return 0; 
}

#include <stdio.h>                #8������ 8������� 16������ 16������� ǥ�� 
 
int main(void)
{
	int num1=7, num2=13;
	printf("%o %#o \n", num1, num1);
	printf("%x %#x \n", num2, num2);
	return 0;
 } 


#include <stdio.h>

int main(void)
{
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234);
	printf("%f \n", 0.12345678);
	printf("%e \n", 0.12345678);
	return 0;
 } 

#include <stdio.h>

int main(void)
{
	int num=0;
	while(num<11)
	{
		printf("Hello world! %d \n", num);
		num++;
	}
	return 0;
}


#include <stdio.h>               // while�� ���� 

int main(void)

{
	int dan=0, num=1;
	printf("�� ��? ");
	scanf("%d",&dan);
	
	while(num<10)
	{
		printf("%dX%d=%d \n", dan, num, dan*num);
		num++;
	}
	return 0;
}


#include <stdio.h>

int main(void)
{
	int num=0;
	
	while(num<5)
	{
		printf("Hello world \n", num);
		num++;
	}	
	return 0;
 } 


#include <stdio.h>                            //While �� �� 

int main(void)
{
	int num=0;
	
	while(num<6)
	{
		printf("Hi Aeri! \n", num);
		num++;
	}
	return 0;
}


#include <stdio.h>              //p.155 [While���� Ȱ��] ����2 

int main(void)
{
	int dan=0, num=1;
	printf("�� ��? ");
	scanf("%d", &dan); 
	
	while(num<10)
	{
		printf("%dX%d=%d \n", dan, num, dan*num);
		num++;
	}
	return 0;
 } 


#include <stdio.h>                 //p.155 [While���� Ȱ��] ����2 (�ι�° ����) 

int main(void)
{
	int dan=0, num=1;
		printf("�� ��? ");
		scanf("%d", &dan);
	
	while(num<6)
	{
		printf("%dX%d=%d \n", dan, num, dan*num);
		num++;
	}
	return 0;
 } 


#include <stdio.h>

int main(void)
{
	int cur=2;
	int is=0;
	
	while(cur<10)
	{
		is=1;
		while(is<10)
		{
			printf("%dX%d=%d \n", cur, is, cur*is);
			is++;
		}
		cur++;
	}
	return 0;
	
}


#include <stdio.h>               //p.155 [while��] ����3 

int main(void)
{
	int total=0;
	int num=1;
	
	while(num!=0)
	{
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
		total+num;
	}
	printf("�Էµ� ������ �� ��: %d \n", total);
	return 0;
	
}
*/

#include <stdio.h>

int main(void)
{
	int cur=2;
	int is=0;
	
	while(cur<10)
	{
		is=1;
		while(is<10)
		{
			printf("%dX%d=%d \n", cur, is, cur*is);
			is++;
		}
		cur++;	
	}
	return 0;
 } 

#include <stdio.h>

int main(void)
{
	int 
}































