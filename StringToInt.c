#include <stdio.h>
#include <math.h>
#include <string.h>

int Count(char string[]){
    int count = 0;
    int i = 0;
    while (string[i] != '\n'){
        count += 1;
        i++;
    }
    return count;
}

int Number(char string[], int k){
    int sum = 0;
    if (string[0] == '-'){
        for (int i = k - 1; i >= 1; i--){
            sum += (int)(string[i] - '0') * pow(10, k-i-1);
        }
        return (0 - sum);
    }
    else{
        for (int i = k - 1; i >= 0; i--){
            sum += (int)(string[i] - '0') * pow(10, k-i-1);
        }
        return sum;
    }
}

/*int Dots(char string[]){
    int i = 0;
    while (string[i] != '.'){
        i++;
    }
    return i;
}*/

/*float BehindDot(char string[], int k, int h){
    float sum = 0;
    for (int i = h + 1; i < k ; i++){
        sum += (float)(string[i] - '0') * pow(10, h-i);
    }
    return sum;
}*/

int main(){
    char string[100];
    printf("\nEnter string : ");
    fgets(string, 100, stdin);
    
    int k = Count(string);
    printf("\nInteger : %d", Number(string, k));

    //int h = Dots(string);
    //printf("Float number = %f", Number(string, h) + BehindDot(string, k, h));

    printf("\n");

    return 0;
}