#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();
struct ListNode *deleteeven( struct ListNode *head );
void printlist( struct ListNode *head )
{
     struct ListNode *p = head;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *head;

    head = createlist();
    head = deleteeven(head);
    printlist(head);

    return 0;
}

struct ListNode *createlist()
{
    int a,flag;
    flag=1;
    scanf("%d",&a);
    if(a==-1)
        return NULL;
    struct ListNode *h,*p,*t;
    p=(struct ListNode*)malloc(sizeof(struct ListNode));
    p->data=a;
    p->next=NULL;
    h=p;
    while(flag){
        scanf("%d",&a);
        if(a==-1) break;
        t=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->next=t;
        t->data=a;
        t->next=NULL;
        p=t;
    }
    return h;    
}


struct ListNode *deleteeven( struct ListNode *head )
{
    struct ListNode *p,*q,*h;
    h = head;
    p = head;
    q = head->next;
    if(!q){
        if(p->data%2)
            return h;
        return NULL;
    }
    while(q->next){ 
        if(p->data%2){ 
            break;
        }
        h=h->next;
        p=p->next;
        q=q->next;
        }
    if(!q->next){
        return NULL;
    }
    while(q->next){
        if(q->data%2){
            p=q;
        }else{
            p->next=q->next;
            q=q->next;
        }
    }
    if(q->data%2==0){
        p->next=NULL;
    }
    return h;
}
#include <stdio.h>  // �����׼���������
#include <stdlib.h> // �����׼�⣬�ṩ�ڴ����Ⱥ���

// ��������Ľڵ�ṹ
struct ListNode {
    int data;                // �ڵ㴢�������
    struct ListNode *next;   // ָ����һ���ڵ��ָ��
};

// ����ԭ������
struct ListNode *createlist(); 
struct ListNode *deleteeven( struct ListNode *head ); 

void printlist( struct ListNode *head ) {

     struct ListNode *p = head;  // ����һ��ָ��ͷ�ڵ��ָ��������������

     // ����������ӡ����ֵ
     while (p) {
           printf("%d ", p->data);
           p = p->next;          // ָ�������е���һ���ڵ�
     }
     // ��ӡ���з��Ա�����ʾÿ�ε���printlist�Ľ��ʱ����һ���µ��п�ʼ��
     printf("\n"); 
}

// ����������
int main() {
    struct ListNode *head;   // ����һ�������ͷ�ڵ�ָ��

    // ����createlist()���������������ͷ�ڵ�
    head = createlist(); 

    // ɾ�������е�����ż���ڵ㣬����ɾ���������ͷ�ڵ�
    head = deleteeven(head); 

    // ��ӡ�����е����нڵ������ֵ
    printlist(head); 

    return 0;  // ����������0����ʾ����ɹ�����
}

// createlist�������Դ�������
struct ListNode *createlist() {
    int a, flag; 
    flag = 1;  // ����flag���Կ���ѭ���Ƿ����
    scanf("%d", &a);  // �������ȡ����
    if (a == -1)  // ����Ƿ�Ϊ������־-1
       return NULL;  // �����ȡ��ֵΪ-1, �򷵻�NULL����������Ϊ��
    struct ListNode *h, *p, *t;
    p = (struct ListNode *)malloc(sizeof(struct ListNode));  // Ϊ�½ڵ�����ڴ�
    p->data = a;  // Ϊ�½ڵ�����ݲ��ָ�ֵ
    p->next = NULL;  // ���½ڵ����һ�ڵ㲿����ΪNULL
    h = p;  // ��ͷ�ڵ�ĵ�ַ��Ϊ�½ڵ�ĵ�ַ
    // ʹ��ѭ�������������ڵ㣬ֱ������Ϊ-1����
    while (flag) {
        scanf("%d", &a); // ��ȡ���������
        if (a == -1)  // ����Ƿ�Ϊ-1�����������ѭ��
           break;
        t = (struct ListNode *)malloc(sizeof(struct ListNode));  // Ϊ�½ڵ�����ڴ�
        p->next = t;  // ��ǰһ�ڵ����һ�ڵ���Ϊ�½ڵ�
        t->data = a;  // Ϊ�½ڵ�����ݲ��ָ�ֵ
        t->next = NULL;  // ���½ڵ����һ�ڵ���ΪNULL
        p = t;  // ����ǰ�ڵ���Ϊ�½ڵ�
    }
    return h;  // ���������ͷ�ڵ�
}

// deleteeven��������ɾ�������е�����ż���ڵ�
struct ListNode *deleteeven( struct ListNode *head ) {
    struct ListNode *p, *q, *h;
    h = head;  // h���ڱ��������ͷ�ڵ㣬���������Ƿ��޸�
    p = head;  // p����׷�������еĵ�ǰ�ڵ�
    q = head->next;  // q����׷�������е���һ���ڵ�

    // ��������ֻ��һ���ڵ�����
    if (!q) {  // �������ֻ��һ���ڵ㣨��head->nextΪNULL��
        if (p->data % 2)  // �������ڵ����������ͷ�������ԭ��
            return h;
        return NULL;  // �������ڵ���ż�����ͷ���NULL��ɾ������ڵ㣩
    }

    // �ҵ������еĵ�һ�������ڵ�
    while (q->next) {  // �������л��д���һ���ڵ�ʱ
       if (p->data % 2) { // �����ǰ�ڵ�����������ֹͣѭ��
           break;
       }
       h = h->next;  // ���򣬾��ƶ�h��p��q����һ���ڵ�
       p = p->next;
       q = q->next;
    }

    // ���������û�������ڵ㣬����NULL��ɾ�����нڵ㣩
    if (!q->next) { 
        return NULL;
    }

    // ɾ��������ż���ڵ�
    while (q->next) {  // �������л��нڵ�ʱ
        if (q->data % 2) { // �����һ���ڵ�������
            p = q;  // �ƶ�p��q����һ���ڵ�
        } else { // �����һ���ڵ���ż��
            p->next = q->next;  // �������ż���ڵ�
            q = q->next;  // �ƶ�q����һ���ڵ�
        }
    }
    
    // �����������һ���ڵ㣨����whileѭ��������ڵ�û�б�����
    if (q->data % 2 == 0) { // ������һ���ڵ���ż��
        p->next = NULL;  // ɾ������ڵ�
    }

    return h; // ���ؿ��ܱ��޸ĵ�����
}