#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


enum Sex {
	MALE,
	FEMALE,
	UNKNOWN,
	};

#define MUM 5

//int main(){
	// ������4��������ʽ
	// 1. ����ֵ����
	// 2. const �޸ĵı�����Ϊ����
	// 3. ö�� enum
	// 4. �� #define

	//printf("MUM =\t%d\n", MUM);
	//printf("my name is \"yangying\"\n");
	//printf("d:\\test.txt\n");
	//printf("%d\n", strlen("c"));

//	printf("���ú��ô�����?  1.��ʾ��  0.��ʾ����:\n");
//	int choice = 0;
//	scanf("%d", &choice);

////ѡ�����:if else , switch
//	if (choice == 1){
//		//��������ִ�� if ���� { } �е�����
//		printf("�� offer ���������� !\n");
//	}
//	else{
//		//����������,ִ�� else { } �е�����
//		printf("�ؼ�������� !\n");
//	}
//
////ѭ�����
//	// ��� 1 - 10
//	// while ѭ�� ��������,ִ��ѭ����, ����������, ����ѭ��
//	int num = 1;
//	while (num <= 10) {
//		printf("%d\n", num);
//		num = num + 1;
//	}
//	printf("\n");

//����
	// int ����ֵ����
	// Add �Ǻ�����
	// ( ) �����Ǻ����Ĳ���
	// { } ������(����Ƭ�ε�����)
	// return ��ʾ����������.
//int Add(int x, int y){
//		int sum = x + y;
//		return sum;
//	}
//int main(){
//	//��������,����ִ�д���Ƭ��
//	printf("%d\n", Add(10, 20));
//	printf("%d\n", Add(100, 2000));

//���� => ��������һ����ͬ���͵ı���


//int main(){
//	int a[4] = { 1, 2, 3, 4 };
//	//ȡ�±�ķ�ʽ��ʹ�������е�Ԫ��
//	for (int i = 0; i < 4;i++){
//		printf("%d ", a[i]);
//	}
//	printf("%d",a[4]);// Խ��
//	system("pause");
//	return 0;
//
//}

//������
//
//int main(){
//	int num = 0;
//	scanf("%d", &num);
//	while(num <= 10){
//		printf("%d ", num);
//		num += 1;
//	}
//	system("pause");
//	return 0;
//}

//int i = 0 ��Ӧ i < n;
//int i = 1 ��Ӧ i <= n;


//int main(){
//	int num1 = 1;
//	int num2 = 1;
//	//������д,Ч����һ����
//	//num++;
//	//++num;
//	int ret1 = 0;
//	int ret2 = 0;
//  ++num ���ʽ�ķ���ֵ������֮���ֵ
//  num++ ���ʽ�ķ���ֵ������֮ǰ��ֵ
//  ����������ı��ʽ��ȡ����ֵ, ����++Ч��һ��
//	ret1 = num1++;
//	printf("ret1 = %d, num1 = %d\n", ret1,num1);// ret1 = 1, num1 = 2;
//	ret2 = ++num2;
//	printf("ret2 = %d, num2 = %d\n", ret2,num2);// ret2 = 2, num2 = 2;
//	system("pause");
//	return 0;
//}

////�ؼ���
////typedef ��һ�����Ͷ���һ������
//typedef unsigned int uint;
//// #define uint unsigned int
//
//// static(��̬) ��C����Ҫ�� 3 ������:
//// 1. ����һ���ֲ�����, 
////		�޸�����������,����˸�����������
//// 2. ����һ��ȫ�ֱ���, 
////		�޸���������,���ֻ�ڵ�ǰ�ļ�����Ч���ܿ��ļ�ʹ��
//// 3. �޸�һ������
////		���޸�ȫ�ֱ���һ��, �ú���ֻ���ڵ�ǰ�ļ���ʹ��, ���ܿ��ļ�ʹ��
//
//void Func(){
//	int a = 0;
//	a += 1;
//	printf("%d\n", a);
//}
//void func(){
//	static int a = 0;//��ʼ��,�ڶ��ε��ú���,�����ٳ�ʼ��,
//					//ֻ�ڵ�һ�ε���ʱʹ��
//	a += 1;
//	printf("%d\n", a);
//}
//
//// ��������, ���� extern �ؼ��ֿ���ʡ��
//// ��ͷ֧Ʊ(��ֻ������,û�ж�������,�����"�Ҳ���..�Ķ���"�Ĵ���)
//extern int num;
//
//int main(){
//	/*uint a = 10;
//	uint b = 20;*/
//	//Func();
//	//Func();
//	//Func();
//	//// ���δ�ӡ��Ϊ 1, a Ϊһ���ֲ�����,{}ִ������֮��,a ���ͷ�
//	//// ���ε� a ����һ�� a ,ֻ������������ͬ����
//	//func();
//	//func();
//	//func();
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}

// 8G => 80�ڸ��ֽ�
//
//int main(){
//	int a = 10;
//	// ���� p ����һ��ָ�����
//	// p ������������� int* 
//	int* p = &a;
//	// ����� * ���� "��ӷ��������", Ҳ�� "������" �����
//	// �� 32 λϵͳ, һ��ָ�����ռ 4 ���ֽ�
//	// ��Ȼ����ϵͳ�� 64 λ, VS Ĭ�����ɵĳ����� 32 λ�汾�ĳ���
//	// ָ�����ռ�����ֽ�,  �� 32 λ�� 64 λϵͳ���в���,
//	// ��������������,Ҳ���ܴ��ڲ���
//	printf("%d\n", *p);
//	printf("%d\n", sizeof(p));
//	system("pause");
//	return 0;
//}

// �ṹ��: �Զ�������
// �ֳɵ��������һ�¾ͳ����Զ�������

// �Զ�������: struct student
struct  Student{
	// ��������: ��Ա����/����/�ֶ�
	char name[100];
	int age;
	int score;
};
// }s;д��������ȫ�ֱ���,������

int main(){
	// �ؼ��� struct ����ʡ��,��ʡ��,���벻��ʶ student
	struct Student s = { "����", 18, 100 };
	// .Ϊ��Ա���������
	printf("%s\n", s.name);
	printf("%d\n", s.age); 
	s.age = 20;
	printf("%d\n", s.age);
	printf("%d\n", s.score);
	system("pause");
	return 0;
}