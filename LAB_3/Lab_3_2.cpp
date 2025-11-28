#include <stdio.h>

void forloopOutput(int StudentId ,char name[50], float score);

struct Student
{
    char name[50];
    int StudentId;
    float score;
};


int main(){
    int N,i;

if(scanf("%d", &N) != 1){
    return 1;
}

struct Student students[N];

for (i = 0; i < N; i++){
   
    if(scanf("%d %f %s", &students[i].StudentId, &students[i].score ,&students[i].name) != 3){
        return 1;
    }
    
}
for ( i = 0; i < N; i++)
{   
    // printf("ID: %d ", students[i].StudentId);
    // printf("Name: %s ", students[i].name);
    // printf("Score: %.2f\n", students[i].score);


    forloopOutput(students[i].StudentId, students[i].name, students[i].score);
}

    return 0;
}

void forloopOutput(int StudentId ,char name[50], float score){
    printf("ID: %d , Name: %s, Score: %.2f\n",StudentId,name[50], score);
}