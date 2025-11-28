#include <stdio.h>
void PrintResult(int passCout, int failCout);

struct Student 
{
    char name[50];
    int StudentId;
    float score;
};

int main() {
    int N, i; 
    int passCout = 0;
    int failCout = 0;

    if(scanf("%d", &N) != 1 || N <= 0) {
        return 1;   
    }
   
    struct Student students[N];
    
    for (i = 0; i < N; i++) {
        if(scanf("%d %f %s", &students[i].StudentId, &students[i].score ,&students[i].name) != 3) {
            return 1;
        }
    }

    for (i = 0; i < N; i++) {
        if(students[i].score >= 60.0) {
            passCout++;
        } else {
            failCout++;
        }
    }

    PrintResult(passCout, failCout);
    return 0;
}

void PrintResult(int passCout, int failCout) {
    printf("Pass Count: %d\n", passCout);
    printf("Fail Count: %d\n", failCout);
}