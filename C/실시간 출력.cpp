#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

int main(void)
{ 
	while(1)
	{
		if(_kbhit()) //x 입력시 프로그램 종료
		{
			if(_getch() == 'x')
				break;
		}
		time_t t= time(NULL); // 시간 받아오기 
		struct tm tm;
		localtime_s(&tm,&t); //tm 시간 구조체 처리
		// AM, PM 구분
		if(tm.tm_hour>12) //1. 오후 PM
		{
			tm.tm_hour-=12; 
			printf("현재 시간: %04d-%02d-%02d PM %02d: %02d: %02d \n\n종료 하려면 X를 입력.", tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
			Sleep(990); // 0.99초
		}else //2. 오전 AM 
		{
			printf("현재 시간: %04d-%02d-%02d AM %02d: %02d: %02d \n\n종료 하려면 X를 입력.", tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
			Sleep(990); // 0.99초  
		}
		system("cls"); //화면 갱신 
	}
	return 0;
}
/*
형식int tm_sec;       초,  range 0 to 59            
   int tm_min;         분, range 0 to 59             
   int tm_hour;         시간, range 0 to 23            
   int tm_mday;         일, range 1 to 31             
   int tm_mon;          월, range 0 to 11             
   int tm_year;         1900년 부터의 년                
   int tm_wday;         요일, range 일(0) to 토(6)      
   int tm_yday;         1년 중 경과 일, range 0 to 365  
   int tm_isdst;        써머타임
*/
