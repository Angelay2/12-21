#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("��������ô�����? 1 ��ʾ��, 0 ��ʾ����!\n");
	int choice = 0;
	scanf("%d", &choice);
	printf("%d\n", choice == 1);
	if (choice == 1){
		printf("����õ�һ�ݺ� offer!\n");
	}else if(choice == 0){
		printf("�ؼ��������!\n");
	}
	else{
		printf("������������!\n");
	}

	system("pause");
	return 0;

}