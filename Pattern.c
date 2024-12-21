#include <stdio.h>
#include <math.h>

void one_for();
void one_while();
void two_for();
void two_while();
void tree_for();
void tree_while();
void for_for();
void for_while();
void five_for();
void five_while();
void six_for();
void six_while();
void seven_for();
void seven_while();
void eight_for();
void eight_while();
void nine_for();
void nine_while();
void ten_for();
void ten_while();
void eleven_for();
void eleven_while();
void twelve_for();
void twelve_while();
void thirteen_for();
void thirteen_while();
void forteen_for();
void forteen_while();
void fiveteen_for();
void fiveteen_while();

int main(){
    //one_for();
    //one_while();
    //two_for();
    //two_while();
    //tree_for();
    //tree_while();
    //for_for();
    //for_while();
    //five_for();
    //five_while();
    //six_for();
    //six_while();
    //seven_for();
    //seven_while();
    //eight_for();
    //eight_while();
    //nine_for();
    //nine_while();
    //ten_for();
    //ten_while();
    //eleven_for();
    //eleven_while();
    //twelve_for();
    //twelve_while();
    //thirteen_for();
    //thirteen_while();
    //forteen_for();
    //forteen_while();
    //fiveteen_for();
    //fiveteen_while();
}

void one_for(){
    for(int i = 0; i<=5; i++){
        for(int j = 0; j<i+1; j++){
            printf("* ");
        }
        if(i!=5)
            printf("\n");
    }
}

void one_while() {
    int i = 0, j;
    while(i <= 5) {
        j = 0;
        while(j < i+1) {
            printf("* ");
            j++;
        }
        if(i!=5)
            printf("\n");
        i++;
    }
}

void two_for(){
    for(int i=0; i<=5; i++){
        for(int j=0; j<5-i; j++){
            printf("  ");
        }
        for(int j=0; j<i+1;j++){
            printf("* ");
        }
        if(i!=5)
            printf("\n");
    }
}

void two_while(){
    int i=0,j,k;
    while(i<=5){
        j=0;
        k=0;
        while(j<5-i){
            printf("  ");
            j++;
        }
        while(k<i+1){
            printf("* ");
            k++;
        }
        if(i!=5)
            printf("\n");
        i++;
    }
}

void tree_for(){
    for(int i=0; i<=5; i++){
        for(int j=0; j<5-i; j++){
            printf(" ");
        }
        for(int j=0; j<i+1; j++){
            printf("* ");
        }
        if(i!=5)
            printf("\n");
    }
}

void tree_while(){
    int i=0,j,k;
    while(i<=5){
        j=0,k=0;
        while(j<5-i){
            printf(" ");
            j++;
        }
        while(k<i+1){
            printf("* ");
            k++;
        }
        if(i!=5)
            printf("\n");
        i++;
    }
}

void for_for(){
    for(int i=0; i<=5; i++){
        for(int j=0; j<=5-i; j++){
            printf("* ");
        }
        if(i!=5)
            printf("\n");
    }
}

void for_while(){
    int i=0,j;
    while(i<=5){
        j=0;
        while(j<=5-i){
            printf("* ");
            j++;
        }
        if(i!=5)
            printf("\n");
        i++;
    }
}

void five_for(){
    for(int i=0; i<=5; i++){
        for(int j=0; j<i; j++){
            printf("  ");
        }
        for(int j=0; j<=5-i; j++){
            printf("* ");
        }
        if(i!=5)
            printf("\n");
    }
}

void five_while(){
    int i=0,j,k;
    while(i<=5){
        j=0,k=0;
        while(j<i){
            printf("  ");
            j++;
        }
        while(k<=5-i){
            printf("* ");
            k++;
        }
        if(i!=5)
            printf("\n");
        i++;
    }
}

void six_for(){
   for(int i=0; i<=5; i++){
        for(int j=0; j<i; j++){
            printf(" ");
        }
        for(int j=0; j<=5-i; j++){
            printf("* ");
        }
        if(i!=5)
            printf("\n");
    } 
}

void six_while(){
    int i=0,j,k;
    while(i<=5){
        j=0,k=0;
        while(j<i){
            printf(" ");
            j++;
        }
        while(k<=5-i){
            printf("* ");
            k++;
        }
        if(i!=5)
            printf("\n");
        i++;
    }
}

void seven_for(){
    for(int i=0; i<=5; i++){
        for(int j=0; j<i; j++){
            printf(" ");
        }
        for(int j=0; j<4; j++){
            printf("* ");
        }
        if(i!=5)
            printf("\n");
    }
}

void seven_while(){
    int i=0,j,k;
    while(i<=5){
        j=0,k=0;
        while(j<i){
            printf(" ");
            j++;
        }
        while(k<4){
            printf("* ");
            k++;
        }
        if(i!=5)
            printf("\n");
        i++;
    }
}

void eight_for(){
    for(int i=0; i<=6; i++){
        if(i<=3){
            for(int j=0; j<5-i; j++){
                printf(" ");
            }
            for(int j=0; j<i+1; j++){
                printf("* ");
            }
        }else{
            for(int j=0; j<i-1; j++){
                printf(" ");
            }
            for(int j=0; j<=6-i; j++){
                printf("* ");
            }
        }
        if(i!=6)
            printf("\n");
    }
}

void eight_while(){
    int i=0,j,k;
    while(i<=6){
        j=0,k=0;
        if(i<=3){
            while(j<5-i){
                printf(" ");
                j++;
            }
            while(k<i+1){
                printf("* ");
                k++;
            }
        }else{
            while(j<i-1){
                printf(" ");
                j++;
            }
            while(k<=6-i){
                printf("* ");
                k++;
            }
        }
        if(i!=6)
            printf("\n");
        i++;
    }
}

void nine_for(){
    for(int i=0; i<=6; i++){
        if(i<=3){
            for(int j=0; j<i; j++){
                printf(" ");
            }
            for(int j=0; j<4-i; j++){
                printf("* ");
            }
        }else{
            for(int j=0; j<6-i; j++){
                printf(" ");
            }
            for(int j=0; j<i-2; j++){
                printf("* ");
            }
        }
        if(i!=6)
            printf("\n");
    }
}

void nine_while(){
    int i=0,j,k;
    while(i<=6){
        j=0,k=0;
        if(i<=3){
            while(j<i){
                printf(" ");
                j++;
            }
            while(k<4-i){
                printf("* ");
                k++;
            }
        }else{
            while(j<6-i){
                printf(" ");
                j++;
            }
            while(k<i-2){
                printf("* ");
                k++;
            }
        }
        if(i!=6)
            printf("\n");
        i++;
    }
}

void ten_for(){
    for(int i=0; i<5; i++){
        if(i==0 || i==4){
            for(int j=0; j<5; j++){
                printf("* ");
            }
        }else{
            printf("* ");
            for(int j=0; j<3; j++){
                printf("  ");
            }
            printf("*");
        }
        if(i!=4)
            printf("\n");
    }
}

void ten_while(){
    int i=0,j;
    while(i<5){
        j=0;
        if(i==0 || i==4){
            while(j<5){
                printf("* ");
                j++;
            }
        }else{
            printf("* ");
            while(j<3){
                printf("  ");
                j++;
            }
            printf("*");
        }
        if(i!=4)
            printf("\n");
        i++;
    }
}

void eleven_for(){
    for (int i = 0; i < 4; i++) {
        int k = (int)((1/3) * pow(i,3) - (3/2) * pow(i,2) + (1/6) * i + 4);
        if (i != 2) {
            for (int j = 0; j < k; j++) {
                printf(" ");
            }
            k = (int)((1.0 / 6) * pow(i, 2) + (5.0 / 6) * i + 1);
            for (int j = 0; j < k; j++) {
                printf("* ");
            }
        } else {
            printf(" * ");
            for (int j = 0; j < 2; j++) {
                printf("  ");
            }
            printf("* ");
        }
        if (i != 3) {
            printf("\n");
        }
    }
}


void eleven_while(){
    int i=0,j,k,z;
    while(i < 4){
        j=0,k=0;
        z = (int)((1/3) * pow(i,3) - (3/2) * pow(i,2) + (1/6) * i + 4);
        if (i != 2) {
            while(j < z){
                printf(" ");
                j++;
            }
            z = (int)((1.0 / 6) * pow(i, 2) + (5.0 / 6) * i + 1);
            while(k < z){
                printf("* ");
                k++;
            }
        } else {
            printf(" * ");
            while(j < 2){
                printf("  ");
                j++;
            }
            printf("* ");
        }
        if (i != 3)
            printf("\n");
        i++;
    }
}

void twelve_for(){
    for (int i = 3; i>=0; i--) {
        int k = (int)((1/3) * pow(i,3) - (3/2) * pow(i,2) + (1/6) * i + 4);
        if (i != 2) {
            for (int j = 0; j < k; j++) {
                printf(" ");
            }
            k = (int)((1.0 / 6) * pow(i, 2) + (5.0 / 6) * i + 1);
            for (int j = 0; j < k; j++) {
                printf("* ");
            }
        } else {
            printf(" * ");
            for (int j = 0; j < 2; j++) {
                printf("  ");
            }
            printf("* ");
        }
        if (i != 0) {
            printf("\n");
        }
    }
}

void twelve_while(){
    int i=3,j,k,z;
    while(i >=0){
        j=0,k=0;
        z = (int)((1/3) * pow(i,3) - (3/2) * pow(i,2) + (1/6) * i + 4);
        if (i != 2) {
            while(j < z){
                printf(" ");
                j++;
            }
            z = (int)((1.0 / 6) * pow(i, 2) + (5.0 / 6) * i + 1);
            while(k < z){
                printf("* ");
                k++;
            }
        } else {
            printf(" * ");
            while(j < 2){
                printf("  ");
                j++;
            }
            printf("* ");
        }
        if (i != 0)
            printf("\n");
        i--;
    }
}

void thirteen_for(){
    for(int i=0; i<7; i++){
        int k;
        if(i<=3){
            k = (int)( -(1.0/6)*pow(i,3) + pow(i,2) + (1.0/6)*i);
            for(int j=0; j<3-i; j++){
                printf(" ");
            }
            printf("*");
            for(int j=0; j<k; j++){
                printf(" ");
            }
            if(i!=0)
                printf("*");
        }else{
            k = (int)( (1.0/2)*pow(i,2) -(13.0/2)*i + 21);
            for(int j=0; j<i-3; j++){
                printf(" ");
            }
            printf("*");
            for(int j=0; j<k; j++){
                printf(" ");
            }
            if(i!=6)
                printf("*");
        }
        if(i!=6)
            printf("\n");
    }
}


void thirteen_while(){
    int i=0,j,k,z;
    while(i<7){
        if(i<=3){
            j=0,k=0;
            z = (int)( -(1.0/6)*pow(i,3) + pow(i,2) + (1.0/6)*i);
            while(j<3-i){
                printf(" ");
                j++;
            }
            printf("*");
            while(k<z){
                printf(" ");
                k++;
            }
            if(i!=0)
                printf("*");
        }else{
            j=0,k=0;
            z = (int)( (1.0/2)*pow(i,2) -(13.0/2)*i + 21);
            while(j<i-3){
                printf(" ");
                j++;
            }
            printf("*");
            while(k<z){
                printf(" ");
                k++;
            }
            if(i!=6)
                printf("*");
        }
        if(i!=6)
            printf("\n");
        i++;
    }
}

void forteen_for(){
    int k = 0;
    for(int i=0; i<4; i++){
        for(int j=0; j<i+1; j++){
            k++;
            printf("%d ",k);
        }
        if(i!=3)
            printf("\n");
    }
}

void forteen_while(){
    int i=0,j,k=0;
    while(i<4){
        j=0,k;
        while(j<i+1){
            k++;
            printf("%d ",k);
            j++;
        }
        if(i!=3)
            printf("\n");
        i++;
    }
}


void fiveteen_for(){
    int rows=4;
    for(int i = 0; i < rows; i++){
        int num = 1;
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%2d", num);
            num = num * (i - j) / (j + 1);
        }
        if(i!=rows-1)
            printf("\n");
    }
}


void fiveteen_while(){
    int rows=4;
    int i=0,j,k;
    while(i < rows){
        j=0,k=0;
        int num = 1;
        while(j < rows - i - 1){
            printf(" ");
            j++;
        }
        while(k <= i){
            printf("%2d", num);
            num = num * (i - k) / (k + 1);
            k++;
        }
        if(i!=rows-1)
            printf("\n");
        i++;
    }
}