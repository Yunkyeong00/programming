/* ���ϸ�: ch07-4

 * ����: Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���ؼ� �迭�� ���� �� �ִ��� ���� ���ҿ� �ּڰ��� ���� ���Ҹ� ã�Ƽ�
 * �ε����� ���� �Բ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �迭�� �ʱⰪ�� ������� ���Ͻÿ�.
 *
 * �ۼ���: ������
 * 
 * ��¥:  2025.05.28
 * 
 * ����: v1.0

 */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define num 10


//�迭�� �ִ񰪰� �ּڰ��� ã�� �Լ�
int solve() 
{
    int x[num] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
    int i;

    printf("�迭: ");
    for (i = 0; i < num; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
    //�ִ� ã��
    int big = x[0];
    int index = 0; 

    for (i = 0; i < num; i++) 
    {
        if (x[i]>big) 
        {     
            big = x[i];
            index = i;
        }
    }
    //�ּڰ� ã��
    int small = x[0];
    int min_index = 0;
    for (i = 1; i < num; i++) {
        if (x[i] < small) {
            small = x[i];
            min_index = i;
        }
    }
    //��� ���
    printf("�ִ�: �ε���=%d, ��:%d \n", index, big);
    printf("�ּڰ�: �ε���=%d, ��:%d \n", min_index,small);

    return 0;
}

int main()
{
    solve();

    return 0;
}

