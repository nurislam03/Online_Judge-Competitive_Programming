#include <bits/stdc++.h>
using namespace std;

int mat[60+5][60+5];
int matB[60+5][60+5];

void makeMatrix1(int N)
{

    int val = 0, j = 1;
    for(int i = 1; i <= N; i++)
    {
        int tmp = 0;
        while(tmp++ < N){
            mat[i][j++] = ++val;
        }

        j--; i++; tmp = 0;
        if(i > N) continue;

        while(tmp++ < N){
            mat[i][j--] = ++val;
        }
        j++;
    }
}


void makeMatrix2(int N)
{

    int val = 0;
    for(int i = 1; i <= N; i++){
        matB[i][1] = ++val;
    }

    int j = 2;
    for(int i = N; i > 0; i--)
    {
        int tmp = 1;
        while(tmp++ < N){
            matB[i][j++] = ++val;
        }

        j--; i--; tmp = 1;
        if(i < 1) continue;

        while(tmp++ < N){
            matB[i][j--] = ++val;
        }
        j++;
    }
}




void Type1(int N)
{
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}


void Type2(int N)
{
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            printf("%d ",matB[i][j]);
        }
        printf("\n");
    }
}


void Type3(int N)
{
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            printf("%d ",matB[j][i]);
        }
        printf("\n");
    }
}


void Type4(int N)
{
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
}



void Type5(int N)
{
    for(int i = 1; i <= N; i++){
        for(int j = N; j > 0; j--){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}


void Type6(int N)
{
    for(int i = 1; i <= N; i++){
        for(int j = N; j > 0; j--){
            printf("%d ",matB[i][j]);
        }
        printf("\n");
    }
}


void Type7(int N)
{
    for(int i = 1; i <= N; i++){
        for(int j = N; j >= 1; j--){
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
}


void Type8(int N)
{
    for(int i = 1; i <= N; i++){
        for(int j = N; j >= 1; j--){
            printf("%d ",matB[j][i]);
        }
        printf("\n");
    }
}




void Type9(int N)
{
    for(int i = N; i > 0; i--){
        for(int j = 1; j <= N; j++){
            printf("%d ",matB[i][j]);
        }
        printf("\n");
    }
}


void Type10(int N)
{
    for(int i = N; i > 0; i--){
        for(int j = 1; j <= N; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}


void Type11(int N)
{
    for(int i = N; i > 0; i--){
        for(int j = 1; j <= N; j++){
            printf("%d ",matB[j][i]);
        }
        printf("\n");
    }
}


void Type12(int N)
{
    for(int i = N; i > 0; i--){
        for(int j = 1; j <= N; j++){
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
}



void Type13(int N)
{
    for(int i = N; i >= 1; i--){
        for(int j = N; j >= 1; j--){
            printf("%d ",matB[i][j]);
        }
        printf("\n");
    }
}


void Type14(int N)
{
    for(int i = N; i >= 1; i--){
        for(int j = N; j >= 1; j--){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

void Type15(int N)
{
    for(int i = N; i >= 1; i--){
        for(int j = N; j >= 1; j--){
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
}


void Type16(int N)
{
    for(int i = N; i >= 1; i--){
        for(int j = N; j >= 1; j--){
            printf("%d ",matB[j][i]);
        }
        printf("\n");
    }
}



int main()
{
    int N, x, y;
    cin >> N;

    char ch;
    cin >> ch;
    cin >> x >> y;

    makeMatrix1(N);
    makeMatrix2(N);


    if(x == 0 && y == 0){
        if(ch == 'n') Type1(N);
        else if(ch == 's') Type2(N);
        else if(ch == 'e') Type3(N);
        else if(ch == 'w') Type4(N);
    }
    else if(x == 0 && y == N-1){
        if(ch == 'n') Type5(N);
        else if(ch == 's') Type6(N);
        else if(ch == 'e') Type7(N);
        else if(ch == 'w') Type8(N);
    }
    else if(x == N-1 && y == 0){
        if(ch == 'n') Type9(N);
        else if(ch == 's') Type10(N);
        else if(ch == 'e') Type11(N);
        else if(ch == 'w') Type12(N);
    }
    else if(x == N-1 && y == N-1){
        if(ch == 'n') Type13(N);
        else if(ch == 's') Type14(N);
        else if(ch == 'e') Type15(N);
        else if(ch == 'w') Type16(N);
    }


    return 0;
}
