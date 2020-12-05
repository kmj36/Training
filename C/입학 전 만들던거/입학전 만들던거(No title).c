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
		printf("[King's Toeic 101쪽까지 영어 공부 285개의 영어단어] %d번째 문제/285 문제\n",page+1);
		printf("맞은 갯수: %d, 틀린 갯수: %d\n\n", Rans, Wans);
		printf("빈칸에 들어갈 알맞은 단어를 쓰시오.\n");
		eng_study(page);
		system("pause");
		system("cls");
		if (page == 284) //탈출
		{
			percentage = Rans / (Rans + Wans) * 100;
			printf("단어 285개를 다하여 종료합니다.\n");
			printf("맞은 갯수: %d, 틀린 갯수: %d  정답 비율: %.2lf\n",Rans,Wans,percentage);
			printf("수고하셨습니다.");
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
		"관람은 3층에서 뉴질랜드 토착민들에 관한 다양한 전시들로 끝날 것입니다.",
		"내년 중으로 우리 아이스크림 제품의 해외 판매량을 최소한 3%까지 늘리고자 합니다.",
		"베티는 왜 휴가를 내려는 거죠?",
		"이 사실은 지난달 2,000여 명의 고객들이 작성한 설문에서 아주 명백히 드러났습니다.",
		"버스들이 속도를 높이고 있다.",
		"이것은 사람들이 온갖 다양한 산업 노동에서 우리 장갑에 의존하기에 용납할 수 없는 일입니다.",
		"손님들께서는 완비된 체육관과 스파, 타이즈의 아름다운 개인 해변을 이용하실 수 있습니다.",
		"그녀는 평단의 찬사를 받았다.",
		"하지만 그 모든 근로자와 장비를 수용하는 데 다른 건물이 필요하지 않나요?",
		"피츠버그에 숙소가 이미 예약되어 있다는 건 알아요.",
		"귀하의 기록에 따르면, 부동산 직원들을 위한 컨퍼런스에 참석할 예정이시네요.",
		"샌프란시스코 고객들은 우리의 가장 큰 거래처잖아요.",
		"우리 회계 소프트웨어인 차트 100을 개선해야겠어요.",
		"더 지체할 것 없이, 한나 트루먼에게 평생 공로상을 드리겠습니다.",
		"저희 웹사이트에 등록하고 온라인으로 예약하시면, 추가로 보험료에서 5%가 할인됩니다.",
		"올해의 전국 주방장 컨퍼런스에서 이렇게 여러분 모두에게 말씀드릴 기회가 생겨 정말 영광으로 생각합니다.",
		"사진 명암을 조절하려면, 여기 있는 이 노란색 버튼들을 사용하세요.",
		"그 점에 대해선 행정부의 린다에게 이야기하는 게 좋을 거예요.",
		"그녀가 보험 정책을 이용하는 법에 관해 모든 행정 직원들을 교육할 예정입니다.",
		"저희 잡지에 광고 내실 기회를 드리고자 전화했습니다.",
		"재스퍼 공공 도서관 자문 위원회의 올해 마지막 회의에 잘 오셨습니다.",
		"이것은 시장의 여타 진공청소기들보다 가벼운 데다 가격도 매우 적절하네요.",
		"안건의 첫 번째 사안은 모든 주문을 기록하기 위해 사용하는 컴퓨터 프로그램에 관한 것입니다.",
		"서명하실 임대 계약서 사본을 보내드리죠.",
		"옐슨 붓 통로 옆 인포메이션 카운터에서 받아가시면 됩니다.",
		"그는 최근 건강관리 교육자 국제 동맹을 창설했다.",
		"유달리 높은 기온 때문에 개인 가정 및 업체에서 냉방을 위해 사용 중인 전기량이 세 배가 넘었습니다.",
		"올해로 이 영화 개봉 50주년이어서, 영화 제작사에서 이달에 새로운 DVD 버전을 매장에 출시했습니다.",
		"서울에 본사를 둔 ATI 일렉트로닉스는 연말까지 북미에 두 곳의 판매 지점을 열 계획임을 발표했습니다.",
		"시상 위원회에서 올해의 직원상 수상자를 선정했나요?"
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
	printf("(띄어쓰기는'_'사용)답:");
	gets(ans);
	if (strcmp(ans,words[page])==0)
	{
		Rans++;
		printf("맞았습니다.\n");
	}
	else
	{
		Wans++;
		printf("틀렸습니다.\n");
	}

}