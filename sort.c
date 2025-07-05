#include<stdio.h>
void merge_sort(int a[],int,int);
void merge(int[],int,int,int);
int main()
{
int a[100],n,i;
printf("Enter array size:\n");
scanf("%d",&n);
printf("Enter array elements:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before sorting, array elements are:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("\n");
merge_sort(a,0,n-1);
printf("After sorting, array elements are:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;
}
void merge_sort(int a[],int lb,int ub)
{
int mid;
if(lb<ub)
{
mid=(lb+ub)/2;
merge_sort(a,lb,mid);
merge_sort(a,mid+1,ub);
merge(a,lb,mid,ub);
}
}
void merge(int a[],int lb,int mid,int ub)
{
int i,j,k;
int n1=mid-lb+1;
int n2=ub-mid;
int left_array[n1], right_array[n2];
for(i=0;i<n1;i++)
left_array[i]=a[lb+i];
for(j=0;j<n2;j++)
right_array[j]=a[mid+1+j];
i=0;
j=0;
k=lb;
while(i<n1 && j<n2)
{
if(left_array[i]<=right_array[j])
{
a[k]=left_array[i];
i++;
}
else
{
a[k]=right_array[j];
j++;
}
k++;
}
while(i<n1)
{
a[k]=left_array[i];
i++;
k++;
}
while(j<n2)
{
a[k]=right_array[j];
j++;
k++;
}
}