#include <stdio.h>

int main(){
    int x, y, type;
    int result = 0;
    
    printf("ù��° ���ڸ� �Է��ϼ���. : ");
    scanf("%d", &x);
    
    printf("�ι�° ���ڸ� �Է��ϼ���. : ");
    scanf("%d", &y);
    
    printf("����(0)����(1)������(2)����(3) : ");
    scanf("%d", &type);
    
    switch(type){
        case 0:
            result = x + y;
        break;
        
        case 1:
            result = x * y;
        break;
        
        case 2:
            result = x / y;
        break;
        
        case 3:
            result = x - y;
        break;
    }
    
    printf("result : %d", result);

    return 0;
}