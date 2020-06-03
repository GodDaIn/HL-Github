#include <stdio.h>

int main(){
    int x, y, type;
    int result = 0;
    
    printf("Ã¹¹øÂ° ¼ýÀÚ¸¦ ÀÔ·ÂÇÏ¼¼¿ä. : ");
    scanf("%d", &x);
    
    printf("µÎ¹øÂ° ¼ýÀÚ¸¦ ÀÔ·ÂÇÏ¼¼¿ä. : ");
    scanf("%d", &y);
    
    printf("µ¡¼À(0)°ö¼À(1)³ª´°¼À(2)»¬¼À(3) : ");
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