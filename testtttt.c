 #include <stdio.h> 
int main() 
{
 
     
    int  a[3]={1,5,10},m,temp,i; 
 
    printf("Enter the amount:");
 
    scanf("%d",&m);
    temp=m;
     for(i=0;i<3;i++)
    {
     printf("\n%d notes is:%d",a[i],temp/a[i]);
     temp=temp%a[i];
     	
    
    	 
    }
    
    
}
