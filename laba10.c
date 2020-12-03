#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
const char surnames[4][16] = {"Ivanov", "Petrov", "Kogutuik", "Yelendiuk"};
const char names[4][16] = {"Ivan", "Vasya", "Oleg", "Sasha"};
const char cityes[4][16] = {"Kiev", "Lviv", "Moscow", "Chernivtsi"};
 
typedef struct {
    char name[16];
    char surname[16];
} person;
 
typedef struct {
    person first;
    person second;
    char city[16];
    int ball[10];
    double avg;
} team;
 
double get_avg (int [], int);
void get_info_team (const team);
 
int main (void) {
    srand( (unsigned) time(NULL)/2 );
    team participants[3];
 
    for (int i = 0; i < 3; i++) {
        strncpy(participants[i].first.name, names[rand() %4], 16);
        strncpy(participants[i].first.surname, surnames[rand() %4], 16);
        strncpy(participants[i].second.name, names[rand() %4], 16);
        strncpy(participants[i].second.surname, surnames[rand() %4], 16);
        strncpy(participants[i].city, cityes[rand() %4], 16);
 
        for (int k = 0; k < 10; k++)
            participants[i].ball[k] = 1 + rand() %5;
        participants[i].avg = get_avg(participants[i].ball, 10);
 
        get_info_team(participants[i]);
        if (i < 2) puts("");
    }
 
    return 0;
}
// -------------------------------------------------------------
double get_avg (int a[], int size) {
    int min = 0, max = 0, sum = 0;
    for (int i = 0; i < size; i++) {
        if (i > 0 && a[i] > a[max]) max = i;
        if (i > 0 && a[i] < a[min]) min = i;
        sum += a[i];
    }
    return (sum - a[max] - a[min]) / 8.0;
}
// -------------------------------------------------------------
void get_info_team (const team a) {
    printf("%s %s ", a.first.name, a.first.surname);
    printf("and %s %s\n", a.second.name, a.second.surname);
    printf("from %s\n", a.city);
    puts("received:");
    for (int i = 0; i < 10; i++)
        printf("%4d", a.ball[i]);
    printf("\n   avg: %.3lf\n", a.avg);
}
// -------------------------------------------------------------
