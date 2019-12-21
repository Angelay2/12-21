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
	// 常量有4种体现形式
	// 1. 字面值常量
	// 2. const 修改的变量成为常量
	// 3. 枚举 enum
	// 4. 宏 #define

	//printf("MUM =\t%d\n", MUM);
	//printf("my name is \"yangying\"\n");
	//printf("d:\\test.txt\n");
	//printf("%d\n", strlen("c"));

//	printf("你会好好敲代码吗?  1.表示会  0.表示不会:\n");
//	int choice = 0;
//	scanf("%d", &choice);

////选择语句:if else , switch
//	if (choice == 1){
//		//条件成立执行 if 后面 { } 中的内容
//		printf("好 offer 在向你招手 !\n");
//	}
//	else{
//		//条件不成立,执行 else { } 中的内容
//		printf("回家卖红薯吧 !\n");
//	}
//
////循环语句
//	// 输出 1 - 10
//	// while 循环 条件成立,执行循环体, 条件不成立, 跳出循环
//	int num = 1;
//	while (num <= 10) {
//		printf("%d\n", num);
//		num = num + 1;
//	}
//	printf("\n");

//函数
	// int 返回值类型
	// Add 是函数名
	// ( ) 里面是函数的参数
	// { } 函数体(代码片段的内容)
	// return 表示函数结束了.
//int Add(int x, int y){
//		int sum = x + y;
//		return sum;
//	}
//int main(){
//	//函数调用,真正执行代码片段
//	printf("%d\n", Add(10, 20));
//	printf("%d\n", Add(100, 2000));

//数组 => 批量创建一组相同类型的变量


//int main(){
//	int a[4] = { 1, 2, 3, 4 };
//	//取下标的方式来使用数组中的元素
//	for (int i = 0; i < 4;i++){
//		printf("%d ", a[i]);
//	}
//	printf("%d",a[4]);// 越界
//	system("pause");
//	return 0;
//
//}

//操作符
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

//int i = 0 对应 i < n;
//int i = 1 对应 i <= n;


//int main(){
//	int num1 = 1;
//	int num2 = 1;
//	//就这样写,效果是一样的
//	//num++;
//	//++num;
//	int ret1 = 0;
//	int ret2 = 0;
//  ++num 表达式的返回值是自增之后的值
//  num++ 表达式的返回值是自增之前的值
//  如果对这样的表达式不取返回值, 两种++效果一样
//	ret1 = num1++;
//	printf("ret1 = %d, num1 = %d\n", ret1,num1);// ret1 = 1, num1 = 2;
//	ret2 = ++num2;
//	printf("ret2 = %d, num2 = %d\n", ret2,num2);// ret2 = 2, num2 = 2;
//	system("pause");
//	return 0;
//}

////关键字
////typedef 给一个类型定义一个别名
//typedef unsigned int uint;
//// #define uint unsigned int
//
//// static(静态) 在C中主要有 3 个功能:
//// 1. 修饰一个局部变量, 
////		修改了生命周期,变成了跟随整个程序
//// 2. 修饰一个全局变量, 
////		修改了作用域,变成只在当前文件中生效不能跨文件使用
//// 3. 修改一个函数
////		和修改全局变量一样, 该函数只能在当前文件中使用, 不能跨文件使用
//
//void Func(){
//	int a = 0;
//	a += 1;
//	printf("%d\n", a);
//}
//void func(){
//	static int a = 0;//初始化,第二次调用函数,不用再初始化,
//					//只在第一次调用时使用
//	a += 1;
//	printf("%d\n", a);
//}
//
//// 变量声明, 其中 extern 关键字可以省略
//// 空头支票(若只有声明,没有定义的情况,会产生"找不到..的定义"的错误)
//extern int num;
//
//int main(){
//	/*uint a = 10;
//	uint b = 20;*/
//	//Func();
//	//Func();
//	//Func();
//	//// 三次打印都为 1, a 为一个局部变量,{}执行完了之后,a 被释放
//	//// 三次的 a 不是一个 a ,只是碰巧名字相同而已
//	//func();
//	//func();
//	//func();
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}

// 8G => 80亿个字节
//
//int main(){
//	int a = 10;
//	// 变量 p 就是一个指针变量
//	// p 这个变量的类型 int* 
//	int* p = &a;
//	// 下面的 * 叫做 "间接访问运算符", 也叫 "解引用" 运算符
//	// 在 32 位系统, 一个指针变量占 4 个字节
//	// 虽然操作系统是 64 位, VS 默认生成的程序是 32 位版本的程序
//	// 指针变量占几个字节,  在 32 位和 64 位系统下有差异,
//	// 其他的内置类型,也可能存在差异
//	printf("%d\n", *p);
//	printf("%d\n", sizeof(p));
//	system("pause");
//	return 0;
//}

// 结构体: 自定制类型
// 现成的类型组合一下就成了自定义类型

// 自定制类型: struct student
struct  Student{
	// 内置类型: 成员变量/属性/字段
	char name[100];
	int age;
	int score;
};
// }s;写在这里是全局变量,不建议

int main(){
	// 关键字 struct 不能省略,若省略,编译不认识 student
	struct Student s = { "张三", 18, 100 };
	// .为成员访问运算符
	printf("%s\n", s.name);
	printf("%d\n", s.age); 
	s.age = 20;
	printf("%d\n", s.age);
	printf("%d\n", s.score);
	system("pause");
	return 0;
}