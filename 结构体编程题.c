#include <stdio.h>
#define N 10
struct student
{
    int id;
    double grades;
};
typedef struct student STUDENT;
void struct_sort(STUDENT*);

int main()
{
    STUDENT stu[N]={{1,70.},{2,80.},{3,90.},{4,100.},{5,56.},{6,97.},{7,88.},{8,54.},{9,43.},{10,78.}};
    struct_sort(stu);
    return 0;
}

void struct_sort(STUDENT* stu)
{

    int i=0,j=0;
    float temp;
    for (i=0;i<N;i++)
    {
        for (j=0;j<N-1;j++)
        {
            if (stu[j].grades < stu[j+1].grades)
            {
                temp = stu[j].grades;
                stu[j].grades=stu[j+1].grades;
                stu[j+1].grades = temp ;
            }
        }
    }

    int g=0;
    for (g=0;g<10;g++)
    {
        printf("%f\n",stu[g].grades);
    }
}




