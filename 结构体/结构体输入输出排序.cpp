#include<iostream>
using namespace std;
typedef struct student{
    int no;
    char na[100];
    int score;
    int sex;
}STU;//以学生成绩为关键字进行排序
int main(){
    // STU pupil;
    // pupil.no=1001;
    // pupil.na="Tom";
    // pupil.sex='m';
    // pupil.score=90;
    STU stu[20];
    for(int i=0;i<3;i++){
        printf("num:\n");
        scanf("%d",&stu[i].no);
        printf("name:\n");
        scanf("%s",&stu[i].na);
        printf("score:\n");
        scanf("%d",&stu[i].score);
        printf("sex:\n");
        scanf("%d",&stu[i].sex);
    }
    for(int j=0;j<3;j++){
        printf("")
        printf("num:%d\n",stu[j].no);
        printf("name:%s\n",stu[j].na);
        printf("score:%d\n",stu[j].score);
        printf("sex:%d\n",stu[j].sex);
    }
}