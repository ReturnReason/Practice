#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
git hub 연습해보기
*/


int main(void)
{


		char name[3][16];
		int korean[3], english[3], math[3];
		int total[3], rank[3], i;

	// 학생의 성적을 처리하는 프로그램

	printf(" [성적처리 프로그램] 학생의 정보를 입력해주세요.\n");

	for (i = 0; i < 3; i++)
	{
		printf("%d번째 학생의 이름 : ", i + 1);
		scanf("%s", name[i]);

		printf("국어 점수 : ");
		scanf("%d", &korean[i]);

		printf("영어 점수 :");
		scanf("%d", &english[i]);

		printf("수학 점수 : ");
		scanf("%d", &math[i]);

		total[i] = korean[i] + english[i] + math[i];
	}

	if (total[0] > total[1])
	{
		if (total[1] > total[2])
		{
			rank[0] = 0;
			rank[1] = 1;
			rank[2] = 2;

		}
		else if (total[0] > total[2])
		{
			rank[0] = 0;
			rank[1] = 2;
			rank[2] = 1;
		}
		else
		{
			rank[0] = 2;
			rank[1] = 0;
			rank[2] = 1;
		}
	}

	else
	{
		if (total[1] < total[2])
		{
			rank[0] = 2;
			rank[1] = 1;
			rank[2] = 0;
		}

		else if (total[0] < total[2])
		{
			rank[0] = 1;
			rank[1] = 2;
			rank[2] = 0;
		}

		else
		{
			rank[0] = 1;
			rank[1] = 0;
			rank[2] = 2;
		}
	}

	// 학생들의 성적을 출력한다.
	printf("======================================== \n");
	printf(" 이름  국어  영어  수학  총점  평균  등수  \n");
	printf("======================================== \n");

	for (i = 0; i < 3; i++)
	{

		printf("%s	%3d  %3d  %4d  %4d  %5d  %4d등\n", name[rank[i]],
			korean[rank[i]], english[rank[i]], math[rank[i]], total[rank[i]],
			total[rank[i]] / 3, i + 1);

	}

	return 0;

}
