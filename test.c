#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("你会认真敲代码吗? 1 表示会, 0 表示不会!\n");
	int choice = 0;
	scanf("%d", &choice);
	printf("%d\n", choice == 1);
	if (choice == 1){
		printf("你会拿到一份好 offer!\n");
	}else if(choice == 0){
		printf("回家卖红薯吧!\n");
	}
	else{
		printf("您的输入有误!\n");
	}

	system("pause");
	return 0;

}