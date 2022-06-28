///* Q6 정수를 2 진수 ~ 36 진수로 기수 변환 */
//#include <stdio.h>
//
//int convert_decimal(int num, int cd, char converted[]);
//
//int main(void) {
//    int num;
//    int cd, digits;
//    char converted[512];
//
//    printf("10진수를 다른 진수로 변경합니다.\n");
//    printf("양의 숫자를 입력하시오 : ");
//    scanf("%d", &num);
//
//    while (1) {
//        printf("무슨 진수로 변경할지 입력하시오 (2 ~ 36) : ");
//        scanf("%d", &cd);
//        if (cd >= 2 && cd <=36) {
//            break;
//        } else {
//            printf("다시 ");
//        }
//    }
//
//    digits = convert_decimal(num ,cd, converted);
//
//    for (int i=0; i<digits; i++) {
//        printf("%c", converted[i]);
//    }
//
//    return 0;
//}
//
//int convert_decimal(int num, int cd, char converted[]) {
//    char sym[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//    int rest, i=0, temp;
//
//    temp = num;
//
//    while (temp > 0) {
//        temp= temp / cd;
//        i++;
//    }
//
//    for (int j=0; j<i; j++) {
//        rest = num % cd;
//        num = num / cd;
//        if (j == i-2) {
//            converted[i-j-1] = sym[rest];
//            converted[0] = sym[num];
//            break;
//        } else {
//            converted[i-j-1] = sym[rest];
//        }
//    }
//
//    return i;
//}