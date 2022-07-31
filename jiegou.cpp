#include<stdio.h>
struct Student
{
    int age;
    float score;
    char sex;
};

int main(void)
{
    struct Student st={80, 66, 'F'};//初始化 定义的同时赋值，st是变量名
    struct Student st2;
    st2.age=10;
    st2.score=88;
    st2.sex='F';
    printf("%d %.2f %c\n",st.age, st.score, st.sex);
	printf("%d %.2f %c\n",st2.age, st2.score, st2.sex);
    return 0;
    
}