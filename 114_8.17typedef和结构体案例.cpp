// 114_8.17typedef和结构体案例.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <stdio.h>

typedef struct
{
    int num;
    char name[32];
    char sex;
}Person,*pPerson;

void printInfo(Person p)
{
    printf("%d号姐姐：%s %c\n", p.num, p.name, p.sex);
}

void printInfo2(Person* p)
{
    printf("%d号姐姐：%s %c\n", p->num, p->name, p->sex);
}

void printInfo3(pPerson p)
{
    printf("%d号姐姐：%s %c\n", p->num, p->name, p->sex);
}

int main()
{
    Person p1 = { 1,"莉莉",'g' };
    Person p2 = { 2,"美美",'g' };

    printInfo(p1);
    printInfo(p2);
    putchar('\n');

    Person* pp1 = &p1;
    Person* pp2 = &p2;
    printInfo2(pp1);
    printInfo2(pp2);
    putchar('\n');

    pPerson pp3= &p1;
    pPerson pp4 = &p2;
    printInfo3(pp3);
    printInfo3(pp4);
    putchar('\n');


}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
