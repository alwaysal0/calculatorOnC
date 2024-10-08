#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
    double first_number;
    double second_number;
    printf("-----Добро пожаловать в Калькулятор-----\n");
    printf("Введите первое число:");
    if (scanf("%lf", &first_number)!=1){
        printf("Введено не число\n");
        return 1;
    }
    printf("Введите второе число:");
    if (scanf("%lf",&second_number)!=1){
        printf("Введено не число\n");
        return 1;
    }
    getchar();
    char buffer[2];
    printf("Введите действие:");
    fgets(buffer,sizeof(buffer),stdin);
    buffer[strcspn(buffer,"\n")]=0;
    double result;
    int check_result;
    if(strcmp(buffer,"+")==0){
        result = first_number + second_number;
        check_result = floor(result);
        if(check_result==result){
        printf("Result: %d\n",check_result);
        } else{
        printf("Result: %g\n",result);
        }
    } else if(strcmp(buffer,"-")==0){
        result = first_number - second_number;
        check_result = floor(result);
        if(check_result==result){
        printf("Result: %d\n",check_result);
        } else{
        printf("Result: %g\n",result);
        }
    } else if(strcmp(buffer,"*")==0){
        result = first_number * second_number;
        check_result = floor(result);
        if(check_result==result){
        printf("Result: %d\n",check_result);
        } else{
        printf("Result: %g\n",result);
        }
    }
    if (strcmp(buffer,"/")==0){
        if (second_number==0){
            printf("Ошибка: нельзя делить на 0.");
            return 1;
        } else{
            result = first_number / second_number;
            check_result = floor(result);
            if(check_result==result){
            printf("Result: %d\n",check_result);
            } else{
            printf("Result: %g\n",result);
            }
        }
    }
    return 0;
}