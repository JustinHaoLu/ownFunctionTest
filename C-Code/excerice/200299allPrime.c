#include<stdio.h>
int main()
{
    int a=0,count=0,m,i;
   
    for(m=200;m<300;m++)
	{
	  for(i=2;i*i<=m;i++)
      {
    	 if(m%i==0)
    	{
	      	break;
    	}
      }	
	     if(i*i>m)//这个的意思就相当关于循环做完，已经判断完成是素数，然后进行输出操作
    	{
	    	count++;
	    	if(count%8==1)
	    	printf("%3d",m);
	    	if(count%8!=1)
	    	printf("%4d",m);
	    	if(count%8==0)
	    	printf("\n");
	    }
    	
      
	}
   
    
    return 0;
}

