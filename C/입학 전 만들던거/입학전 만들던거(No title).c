#include <stdio.h>
#include <windows.h>
#include <string.h>
int Rans = 0, Wans = 0;

int main(void)
{
	void eng_study(int page);

	int page = 0;
	double percentage = 0.0;
	while (1)
	{
		printf("[King's Toeic 101�ʱ��� ���� ���� 285���� ����ܾ�] %d��° ����/285 ����\n",page+1);
		printf("���� ����: %d, Ʋ�� ����: %d\n\n", Rans, Wans);
		printf("��ĭ�� �� �˸��� �ܾ ���ÿ�.\n");
		eng_study(page);
		system("pause");
		system("cls");
		if (page == 284) //Ż��
		{
			percentage = Rans / (Rans + Wans) * 100;
			printf("�ܾ� 285���� ���Ͽ� �����մϴ�.\n");
			printf("���� ����: %d, Ʋ�� ����: %d  ���� ����: %.2lf\n",Rans,Wans,percentage);
			printf("�����ϼ̽��ϴ�.");
			break;
		}
		else
		{
			++page;
		}
	}
	return 0;
}

void eng_study(int page)
{
	char sentence[285][1000] = {
		"The tour will end on the third floor with various exhibits dedicated to the _____ peoples of New Zealand.",
		"We hope to increase sales of our ice cream products _____ by at least 3% over the course of the next year.",
		"Why is Betty taking a leave of _____?",
		"This fact was made _____ clear in the survey last month that was completed by over 2,000 customers.",
		"The buses are _____.",
		"This is not _____ since people will rely on these gloves for many types of industrial labor.",
		"Guests will have _____ to a fully equipped gym and spa, as well as Tides' beautiful private beach.",
		"She has received critical _____.",
		"But don't they need another building to _____ all those workers and equipment?",
		"I know that _____ have already been booked in Pittsburgh.",
		"_____ your records, you will be participating in the conference for real estate agents",
		"The San Francisco clients are our biggest _____.",
		"We need to make some improvements to Chart 100, our _____ software.",
		"Without furher delay, I'd like to present Hanna Truman with the life-time _____ award."
		"If you register on our website and make an online reservation, you can get an _____ 5% off the insurance cost.",
		"I'm truly honored for this chance to address everyone here at this year's National Conferrence for Chefs.",
		"To adjust the brightness of the image, use these yellow buttons here.",
		"You had better talk to Linda in _____ about that.",
		"She will be training all _____ staff on how to access insurance policies."
		"I'm calling to offer you the opportunity to _____ with us.",
		"Welcome to the final meeting of the year of the Jasper Public Library _____ Board.",
		"It's lightweight and very _____ compared to most other vacuum cleaners in the market.",
		"The first matter on the _____ is the computer program that we use to keep track of all orders.",
		"I'll send a copy of our rental _____ for you to sign.",
		"You can pick them up at our information counter next to the _____ of Yelsen brand brushes.",
		"He has recently started the International _____ for Healthcare Educators.",
		"Unusually high temperatures have more than tripled the _____ of electricity private homes and businesses are using to keep cool.",
		"It is the 50th _____ for the film this year, and the movie studio has released an updated DVD version available in stores this month.",
		"Seoul-based ATI Electronics _____ plans to open two sales offices in North America by the end of the year.",
		"Do you know if the awards committee has selected any winners for the _____ staff recognition awards?"

	};

	char Ksentense[285][1000] = {
		"������ 3������ �������� �����ε鿡 ���� �پ��� ���õ�� ���� ���Դϴ�.",
		"���� ������ �츮 ���̽�ũ�� ��ǰ�� �ؿ� �Ǹŷ��� �ּ��� 3%���� �ø����� �մϴ�.",
		"��Ƽ�� �� �ް��� ������ ����?",
		"�� ����� ������ 2,000�� ���� ������ �ۼ��� �������� ���� ����� �巯�����ϴ�.",
		"�������� �ӵ��� ���̰� �ִ�.",
		"�̰��� ������� �°� �پ��� ��� �뵿���� �츮 �尩�� �����ϱ⿡ �볳�� �� ���� ���Դϴ�.",
		"�մԵ鲲���� �Ϻ�� ü������ ����, Ÿ������ �Ƹ��ٿ� ���� �غ��� �̿��Ͻ� �� �ֽ��ϴ�.",
		"�׳�� ����� ���縦 �޾Ҵ�.",
		"������ �� ��� �ٷ��ڿ� ��� �����ϴ� �� �ٸ� �ǹ��� �ʿ����� �ʳ���?",
		"�������׿� ���Ұ� �̹� ����Ǿ� �ִٴ� �� �˾ƿ�.",
		"������ ��Ͽ� ������, �ε��� �������� ���� ���۷����� ������ �����̽ó׿�.",
		"�������ý��� ������ �츮�� ���� ū �ŷ�ó�ݾƿ�.",
		"�츮 ȸ�� ����Ʈ������ ��Ʈ 100�� �����ؾ߰ھ��.",
		"�� ��ü�� �� ����, �ѳ� Ʈ��տ��� ��� ���λ��� �帮�ڽ��ϴ�.",
		"���� ������Ʈ�� ����ϰ� �¶������� �����Ͻø�, �߰��� ����ῡ�� 5%�� ���ε˴ϴ�.",
		"������ ���� �ֹ��� ���۷������� �̷��� ������ ��ο��� �����帱 ��ȸ�� ���� ���� �������� �����մϴ�.",
		"���� ����� �����Ϸ���, ���� �ִ� �� ����� ��ư���� ����ϼ���.",
		"�� ���� ���ؼ� �������� ���ٿ��� �̾߱��ϴ� �� ���� �ſ���.",
		"�׳డ ���� ��å�� �̿��ϴ� ���� ���� ��� ���� �������� ������ �����Դϴ�.",
		"���� ������ ���� ���� ��ȸ�� �帮���� ��ȭ�߽��ϴ�.",
		"�罺�� ���� ������ �ڹ� ����ȸ�� ���� ������ ȸ�ǿ� �� ���̽��ϴ�.",
		"�̰��� ������ ��Ÿ ����û�ұ�麸�� ������ ���� ���ݵ� �ſ� �����ϳ׿�.",
		"�Ȱ��� ù ��° ����� ��� �ֹ��� ����ϱ� ���� ����ϴ� ��ǻ�� ���α׷��� ���� ���Դϴ�.",
		"�����Ͻ� �Ӵ� ��༭ �纻�� �����帮��.",
		"���� �� ��� �� �������̼� ī���Ϳ��� �޾ư��ø� �˴ϴ�.",
		"�״� �ֱ� �ǰ����� ������ ���� ������ â���ߴ�.",
		"���޸� ���� ��� ������ ���� ���� �� ��ü���� �ù��� ���� ��� ���� ���ⷮ�� �� �谡 �Ѿ����ϴ�.",
		"���ط� �� ��ȭ ���� 50�ֳ��̾, ��ȭ ���ۻ翡�� �̴޿� ���ο� DVD ������ ���忡 ����߽��ϴ�.",
		"���￡ ���縦 �� ATI �Ϸ�Ʈ�δн��� �������� �Ϲ̿� �� ���� �Ǹ� ������ �� ��ȹ���� ��ǥ�߽��ϴ�.",
		"�û� ����ȸ���� ������ ������ �����ڸ� �����߳���?"
	};

	char words[285][100] = {
		"aboriginal",
		"abroad",
		"absence",
		"abundantly",
		"accelerating",
		"acceptable",
		"access",
		"acclaim",
		"accommodate",
		"accommodations",
		"According to",
		"account",
		"accounting"
		"achievement",
		"additional",
		"address",
		"adjust",
		"administration",
		"administrative",
		"advertise",
		"advisory",
		"affordable",
		"agenda",
		"agreement",
		"aisle",
		"alliance",
		"amount",
		"anniversary",
		"announce",
		"annual"
	};

	char ans[50];
	printf("%s\n",sentence[page]);
	printf("->%s\n\n",Ksentense[page]);
	printf("(�����'_'���)��:");
	gets(ans);
	if (strcmp(ans,words[page])==0)
	{
		Rans++;
		printf("�¾ҽ��ϴ�.\n");
	}
	else
	{
		Wans++;
		printf("Ʋ�Ƚ��ϴ�.\n");
	}

}