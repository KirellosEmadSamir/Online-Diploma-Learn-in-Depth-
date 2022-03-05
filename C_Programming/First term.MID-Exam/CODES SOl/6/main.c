#include <stdio.h>
#include <stdlib.h>
void rebeatedarray_1(int*);
void rebeatedearay_2(int *,int,int *,int);
int size;
int main()
{
   // int size;
    int arr[100];
    printf("Enter size of array: ");
    scanf("%d", &size);

  //int arr[10]={0};
  int count_1,i=0,j=0;
  int *ptr_2=&count_1;
  int *ptr_1=&arr;
  rebeatedarray_1(ptr_1);

  for(i=0;i<size;i++)
     {
            int count_2=0;
          for(j=(i-1);j>=0;j--)
          {

          if(arr[i]==arr[j])
              {
              count_2++;

              break;
              }
          }
          if(count_2==0)
              {
              *ptr_2=0;
              rebeatedarray_2(ptr_1,arr[i],ptr_2,i);
              printf("\nthe element ( %d ) is rebetead (%d) times",ptr_1[i],count_1);
              }
     }


    return 0;
}
void rebeatedarray_1(int *ptr)         // function for Transferring data to main function
{
    int i=0;
    for(i=0;i<size;i++)
    {
    printf("\n Please Enter %d elements of an Array  :  ",i);
    scanf("%d",&ptr[i]);
    }

}
void rebeatedarray_2(int *k,int e,int *r,int o)    //for comparison
{
    for(o=1;o<size;o++)
    {
    if((e)==(k[o+1]))
        {
        (*r)+=1;
        }
    }
}
