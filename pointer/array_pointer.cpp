
#include <stdio.h>
const int MAX = 5;

int main() {
int data[] = { 10, 30, 200,45,231 };
int i, *p[MAX];
for (i = 0; i < MAX; i++)
{
p[i] = &data[i];

}
for (i = 0; i < MAX; i++)
{
printf("Isi data [%d] = %d\n", i, p[i]);
}
for (i = 0; i < MAX; i++)
{
printf("Isi data [%d] = %d\n", i, *p[i]);
}
return 0;
}
