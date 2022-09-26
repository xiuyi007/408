//
// Created by 33907 on 2022/9/14.
//
#define MAXSIZE 20

int UFSets[MAXSIZE];

void Initial(int s[]){
    for (int i = 0; i < MAXSIZE; i++) {
        UFSets[i] = -1;
    }
}

bool Union(int s[], int root1, int root2){
    s[root2] = root1;
}

int Find(int s[], int x){
    while (s[x] > 0)
        x = s[x];
    return x;
}
