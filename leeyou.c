#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
git hub �����غ���
*/

int main(void) 
{

		char name[3][16];
		int korean[3], english[3], math[3];
		int total[3], rank[3], i;

		// �л��� ������ ó���ϴ� ���α׷�

		printf(" [����ó�� ���α׷�] �л��� ������ �Է����ּ���.\n");

		for (i = 0; i < 3; i++)
		{
			printf("%d��° �л��� �̸� : ", i + 1);
			scanf("%s", name[i]);

			printf("���� ���� : ");
			scanf("%d", &korean[i]);

			printf("���� ���� :");
			scanf("%d", &english[i]);

			printf("���� ���� : ");
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
		
		// �л����� ������ ����Ѵ�.
		printf("======================================== \n");
		printf(" �̸�  ����  ����  ����  ����  ���  ���  \n");
		printf("======================================== \n");

		for (i = 0; i < 3; i++)
		{

			printf("%s	%3d  %3d  %4d  %4d  %5d  %4d��\n", name[rank[i]],
				korean[rank[i]],english[rank[i]], math[rank[i]], total[rank[i]],
				total[rank[i]]/ 3, i + 1);

		}


		return 0;

}

void print() {
	printf("����");
}