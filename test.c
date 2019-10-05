/*
#include <stdio.h>
int main(void)
{
	printf("황애리\n");
	printf("경기도 성남시 분당구 정자동 푸르지오시티3차\n");
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
	printf("제 이름은 황애리입니다.\n");
	printf("제 나이는 %d살이고요\n", 20);
	printf("제가 사는 곳의 번지수는 %d-%d입니다.",123,456);
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
	
	printf("덧셈 결과: %d \n", result);
	printf("%d+%d=%d \n", num1, num2, result);
	printf("%d와(과) %d의 합은 %d입니다.\n", num1, num2, result);
	return 0; 
}


#include <stdio.h>

int main(void)
{
	char ch =9;
	int inum =1052;
	double dnum =3.1415;
	printf("변수ch의크기:%d \n",sizeof(ch));
	printf("변수inum의크기:%d \n",sizeof(inum));
	printf("변수dnum의크기:%d \n",sizeof(dnum));
	
	printf("char의 크기: %d \n", sizeof(char));
	printf("int의 크기: %d \n", sizeof(int));
	printf("long의 크기: %d \n", sizeof(long));
	printf("long long의 크기: %d \n", sizeof(long long));
	printf("float의 크기: %d \n", sizeof(float));
	printf("double의 크기: %d \n", sizeof(double));
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


#include <stdio.h>               #리터럴 상수 

int main(void)
{
	printf("literal int size: %d \n", sizeof(7));
	printf("literal double size: %d \n", sizeof(7.14));
	printf("literal char size: %d \n", sizeof('A'));
	return 0;
}


int main(void)                   #이름을 지니는 심볼릭 상수 
{
	float num1 = 5.789f;
	float num2 = 3.24 + 5.12f;
	return 0;
}

#include <stdio.h>               #자료형의 형변환 

int main(void)

{
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;
	
	printf("정수 245를 실수로: %f \n", num1);
	printf(" 실수 3.1415를 정수로: %d \n", num2);
	printf("큰 정수 129를 작은 정수로: %d \n", ch);
	return 0;
}


#include <stdio.h>

int main(void)
{
	int num1=3, num2=4;
	double divResult;
	divResult = (double)num1 / num2;
	printf("나눗셈 결과: %f \n", divResult);
	return 0;
}

#include <stdio.h>                 #printf 함수의 서식지정 

int main(void)

{
	int my_age=12; 
	printf("제 나이는 10진수로 %d살, 16진수로 %X살 입니다. \n", my_age, my_age);
	return 0; 
}

#include <stdio.h>                #8진수를 8진수답게 16진수를 16진수답게 표현 
 
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


#include <stdio.h>               // while문 기초 

int main(void)

{
	int dan=0, num=1;
	printf("몇 단? ");
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


#include <stdio.h>                            //While 연 습 

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


#include <stdio.h>              //p.155 [While문의 활용] 문제2 

int main(void)
{
	int dan=0, num=1;
	printf("몇 단? ");
	scanf("%d", &dan); 
	
	while(num<10)
	{
		printf("%dX%d=%d \n", dan, num, dan*num);
		num++;
	}
	return 0;
 } 


#include <stdio.h>                 //p.155 [While문의 활용] 문제2 (두번째 연습) 

int main(void)
{
	int dan=0, num=1;
		printf("몇 단? ");
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


#include <stdio.h>               //p.155 [while문] 문제3 

int main(void)
{
	int total=0;
	int num=1;
	
	while(num!=0)
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total+num;
	}
	printf("입력된 정수의 총 합: %d \n", total);
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































