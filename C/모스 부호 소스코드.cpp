int main(void) //모스부호 변환
{
	int i=0, lan=0;
	char ch[5000] = {'\0'};
	printf("입력(5000자 이내, 영숫자):");
	scanf_s("%[^\n]", ch, sizeof(ch));
	while (ch[i] != '\0')
	{
		lan++;
		i++;
	}
	for (i = 0; i < lan; i++)
	{
		switch (ch[i])
		{
		case 'A':
		case 'a': //*-
			printf("*");
			Beep(523, 400);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case 'b':
		case 'B':  //-***
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case 'c':
		case 'C': //-*-*
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case 'd':
		case 'D': //-**
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case 'e':
		case 'E':
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case 'f':
		case 'F': //**-*
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case 'g':
		case 'G': //--*
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case 'h':
		case 'H': //****
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case 'i':
		case 'I': //**
			printf("*");
			Beep(523, 400);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case 'j':
		case 'J': //*---
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case 'k':
		case 'K': //-*-
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case 'l':
		case 'L': // *-**
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case 'm':
		case 'M': //--
			printf("-");
			Beep(523, 700);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case 'o':
		case 'O': //---
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case 'p':
		case 'P': //*--*
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case 'q':
		case 'Q': //--*-
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case 'r':
		case 'R': //*-*
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case 's':
		case 'S': //***
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case 't':
		case 'T': //-
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case 'u':
		case 'U': //**-
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case 'v':
		case 'V': //***-
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case 'w':
		case 'W': //*--
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case 'x':
		case 'X': //-**-
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case 'y':
		case 'Y': //-*--
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case 'z':
		case 'Z': //--**
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case '0': //-----
			printf("-");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case '1': //*----
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case '2': //**---
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case '3': //***--
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case '4': //****-
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case '5': //*****
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case '6': //-****
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case '7': //--***
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case '8': //---**
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case '9': //----*
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case '-': //-****-
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case '.': //*-*-*-
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case ',': //--**--
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("- ");
			Beep(523, 700);
			Sleep(200);
			break;
		case '」': //*-*-**
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			Sleep(200);
			break;
		case '(': //-*--*
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			Sleep(200);
			break;
		case ')': //-*--*-
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			Sleep(200);
			break;
		case '?': //**--**
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("-");
			Beep(523, 700);
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("* ");
			Beep(523, 400);
			Sleep(200);
			break;
		case '/': //-**-*
			printf("-");
			Beep(523, 700);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			printf("*");
			Beep(523, 400);
			break;
		default:
			break;
		}
	}
}