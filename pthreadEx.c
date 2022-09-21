//***********************************************************
//**** Author: Swapnil Patel
//***********************************************************
#include <stdio.h>
#include <pthread.h>

void *loop1(void *);
void *loop2(void *);
void *loop3(void *);

// calling 3 loop in seperate threads than main thread
int main()
{
    pthread_t tid1, tid2, tid3;
    pthread_create(&tid1, NULL, &loop1, NULL);
    pthread_create(&tid2, NULL, &loop2, NULL);
    pthread_create(&tid3, NULL, &loop3, NULL);

    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
    pthread_join(tid3, NULL);
    return 0;
}

// function print from 1 to 100
void *loop1(void *vptr)
{
    for (int i = 1; i <= 100; i++)
    {
        printf("Thread %d: %d\n", pthread_self(), i);
    }
}

// function print from A to Z
void *loop2(void *vptr)
{
    for (int i = 65; i <= (65 + 25); i++)
    {
        printf("Thread %d: %c\n", pthread_self(), i);
    }
}

// function print from a to z
void *loop3(void *vptr)
{
    for (int i = 97; i <= (97 + 25); i++)
    {
        printf("Thread %d: %c\n", pthread_self(), i);
    }
}