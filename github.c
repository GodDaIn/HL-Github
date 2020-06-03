#include <stdio.h>

int main(){
    int x, y, type;
    int result = 0;
    
    printf("첫번째 숫자를 입력하세요. : ");
    scanf("%d", &x);
    
    printf("두번째 숫자를 입력하세요. : ");
    scanf("%d", &y);
    
    result = x % y;
    
    printf("result : %d", result);

    return 0;
}