#include <stdio.h>
#include <unistd.h>
double b;
double test_double(double a){
    b = a;
    return a;
}

double kembali_b(){
    return b;
}

int main()
{
    printf("halo dunia dari : %ld\n", (long)getpid());
    return 0;
}
