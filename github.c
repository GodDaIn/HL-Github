#include <stdio.h>

int main(){
    int x, y, type;
    int result = 0;
    
    printf("ù��° ���ڸ� �Է��ϼ���. : ");
    scanf("%d", &x);
    
    printf("�ι�° ���ڸ� �Է��ϼ���. : ");
    scanf("%d", &y);
    
    result = x % y;
    
    printf("result : %d", result);

    return 0;
}