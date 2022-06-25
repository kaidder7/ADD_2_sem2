#include <iostream>
#include <chrono>
#include <vector>
#define N 10
int i, j, n, d, count;
void Shell(int A[], int n)
{
    d=n;
    d=d/2;
    while (d>0)
    {
        for (i=0; i<n-d; i++)
        {
            j=i;
            while (j>=0 && A[j]>A[j+d])
            {
                count=A[j];
                A[j]=A[j+d];
                A[j+d]=count;
                j--;
            }
        }
        d=d/2;
    }
    for (i=0; i<n; i++)
        std::cout<<A[i]<<" ";
}

int main() {
    int *mas=new int;
    srand(time(0));
    for (int i=0; i<10; i++)
    {
        mas[i]=rand()/1000;
    }
    for (int i=0; i<10; i++)
    {
        std::cout<<mas[i]<<' ';
    }
    std::cout<<std::endl;
    Shell(mas, 10);
    return 0;
}
