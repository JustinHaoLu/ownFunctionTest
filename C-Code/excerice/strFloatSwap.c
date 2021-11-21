#include<stdio.h>
int main(){
    void swap(float *p1,float *p2);
    float a,b,c,d,e;
    while(scanf("%f%f%f%f%f",&a,&b,&c,&d,&e)!=EOF){
        swap(&a,&b);swap(&a,&c);swap(&a,&d);swap(&a,&e);
        swap(&b,&c);swap(&b,&d);swap(&b,&e);
        swap(&c,&d);swap(&c,&e);
        swap(&d,&e);
        printf("%.1f %.1f %.1f %.1f %.1f\n",a,b,c,d,e);
    }
    return 0;
}
void swap(float *p1,float *p2){
    float xyz;
    if(*p1>*p2){
        xyz=*p1;
        *p1=*p2;
        *p2=xyz;
    }
}

