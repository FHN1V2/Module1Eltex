#include <stdio.h>
#include <stdarg.h>

void display_menu()
{
    printf("1. Сложение\n");
    printf("2. Вычитание\n");
    printf("3. Деление\n");
    printf("4. Умножение\n");
    printf("5. Выход\n");
}

double sum(int n, ...) {
    double result = 0;
    va_list factor; //указатель va_list
    va_start(factor, n); // устанавливаем указатель
    for(int i = 0; i < n; i++) {
    result += va_arg(factor, double); // получаем значение текущего параметра типа double
    }
    va_end(factor); // завершаем обработку параметров
    return result;
}

double sub(int n, ...) {
    va_list factor; 
    va_start(factor, n);
    double result = va_arg(factor, double);
    va_end(factor); 
    va_start(factor+8, n); // +8 из-за double
    for(int i = 1; i < n; i++) {
    result -= va_arg(factor, double); 
    }
    va_end(factor); 
    return result;
}
double mult(int n, ...) {
    double result = 1;
    va_list factor; //указатель va_list
    va_start(factor, n); // устанавливаем указатель
    for(int i = 0; i < n; i++) {
    result *= va_arg(factor, double); // получаем значение текущего параметра типа double
    }
    va_end(factor); // завершаем обработку параметров
    return result;
}

double del(int n, ...) {
    va_list factor; 
    va_start(factor, n);
    double result = va_arg(factor, double);
    printf("%f \n", result);
    va_end(factor); 
    va_start(factor+8, n); // +8 из-за double
    for(int i = 1; i < n; i++) {
    double arg = va_arg(factor,double);
        if (arg==0.0) // Проверка на наличие 0 при делении 
        {
            printf("Inpun ZERO");
            break;
        }
    result /= arg;
    }
    va_end(factor); 
    return result;
}

int main() {

    printf("%f \n", sum(4, 1.2, 2.0, 3.0, 4.0));
    printf("%f \n", sub(3, 100.0, 32.0, 10.9));
    printf("%f \n", mult(3, 2.0, 3.0, 4.0));
    printf( "%f \n", del(3, 10.0, 5.0, 2.0));
    return 0;
}