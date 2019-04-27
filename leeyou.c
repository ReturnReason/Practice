#include <stdio.h>
int main(void) {

/*
git hub 연습해보기
*/

	//구구단
	int i, l;

	for (i = 1; i < 10; i++) {
		
		for (l = 1; l < 10; l++) {
			printf("%d * %d = %d \n", i, l, i*l);
		}
		
	}


	return 0;
}