#include <stdio.h>
int main() {
    float gross,allowances,deductions,net;
    scanf("%f",&gross);
    if(gross>10000){
        allowances=0.1*gross;
        deductions=0.03*gross;
    } else if(gross>5000){
        allowances=0.07*gross;
        deductions=0.02*gross;
    } else {
        allowances=0;
        deductions=0;
    }
    net=gross+allowances-deductions;
    printf("Net Salary=%.2f",net);
    return 0;
}
