#include<stdio.h>
#include<stdlib.h>



/*int recursive(int n,int fib[],int limit, int sum)
{

if(n>=(limit-2))
{
    return sum;
}
else{
    printf("\t%d",fib[n]);
    return recursive(++n,fib,limit,sum);
}
*/


int recursion(int counter,int fib[],int limit )
{

  if(counter==limit){
      return 0;
  }
  else{

      int s = fib[counter-1]+fib[counter];
      
      printf("\t%d",s);
      fib[counter+1]=s;
      return fib[counter]+recursion(++counter,fib,limit);
  }
  

}

void recurse(int n)
{
    static n1=0,n2=1,n3;
    if(n>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("\t%d",n3);
        recurse(n-1);
    }
}




int main()
{
    system("cls");

    int a=0,b=1,sum=0;
    int limit;
    printf("\n Enter the number of fibonacci series : ");
    scanf("%d",&limit);
    /*int fibonacci[limit];
    fibonacci[0]=0;
    fibonacci[1]=1;

    printf("\t0\t1") ;
     sum=recursion(1,fibonacci,limit);
     */
    printf("\n\t0\t1");
    recurse(limit);
    




    return 0; //
}