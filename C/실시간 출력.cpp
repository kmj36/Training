#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

int main(void)
{ 
	while(1)
	{
		if(_kbhit()) //x �Է½� ���α׷� ����
		{
			if(_getch() == 'x')
				break;
		}
		time_t t= time(NULL); // �ð� �޾ƿ��� 
		struct tm tm;
		localtime_s(&tm,&t); //tm �ð� ����ü ó��
		// AM, PM ����
		if(tm.tm_hour>12) //1. ���� PM
		{
			tm.tm_hour-=12; 
			printf("���� �ð�: %04d-%02d-%02d PM %02d: %02d: %02d \n\n���� �Ϸ��� X�� �Է�.", tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
			Sleep(990); // 0.99��
		}else //2. ���� AM 
		{
			printf("���� �ð�: %04d-%02d-%02d AM %02d: %02d: %02d \n\n���� �Ϸ��� X�� �Է�.", tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
			Sleep(990); // 0.99��  
		}
		system("cls"); //ȭ�� ���� 
	}
	return 0;
}
/*
����int tm_sec;       ��,  range 0 to 59            
   int tm_min;         ��, range 0 to 59             
   int tm_hour;         �ð�, range 0 to 23            
   int tm_mday;         ��, range 1 to 31             
   int tm_mon;          ��, range 0 to 11             
   int tm_year;         1900�� ������ ��                
   int tm_wday;         ����, range ��(0) to ��(6)      
   int tm_yday;         1�� �� ��� ��, range 0 to 365  
   int tm_isdst;        ���Ÿ��
*/
