#include <stdio.h>
typedef struct moot
{
    int m;
    int day;
} moot, mooth;
// chushihua
mooth mott[13]= {{0, 0}, {1, 0}, {2, 31}, {3, 59}, {4, 90}, {5, 120}, {6, 151}, {7, 181}, {8, 212}, {9, 243}, {10, 273}, {11, 304}, {12, 334}};
moot *h, *w;
h = &mott[1];
w = &mott[12];
int judgemonth_days(int i)
{

    if (i < (*h.m + *w.m) / 2)
        w = mott[(*h.m + *w.m) / 2];
    else if ((i == (*h.m + *w.m) / 2))
        return mott[i].day;
    else
        h = mott[(*h.m + *w.m) / 2 + 1];
    judgemonth_days(i);
}
int main()
{
    int year, month, day, leap, sum;
    printf("请输入年，月，日（格式为年，月，日）：");
    scanf("%d,%d,%d", &year, &month, &day);
    sum=judgemonth_days(month)+day;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        leap = 1;
    else
        leap = 0;
    if (leap == 1 && month > 2)
        sum++;
    printf("%d年%d月%d日为%d年第%d天", year, month, day, year, sum);

    return 0;
}