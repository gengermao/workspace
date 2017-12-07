#include <stdio.h>

void BuildMinHeap(int a[], int n);
void MinHeapInsert(int a[], int i);
void MinHeapAdjust(int a[], int i, int n);
void MinHeapSort(int a[], int n);
void MinHeapAddItem(int a[], int n, int nNum);
void MinHeapDeleteNumber(int a[], int n);
void Swap(int *a,int *b);

int main(int argc,const char *argv[]){
	int i;
	int temp;
    //int a[] = {3,25,9,30,2,1,34,23,55,7};
    int a[10];

    for (i = 0; i < 15; ++i)
    {
    	printf("请输入第%d个数\n", i+1);
    	scanf("%d",&temp);
    	if(i < 10)
    		MinHeapAddItem(a,i,temp);
    	else if(temp > a[0])
    	{
    		a[0] = temp;
    		MinHeapAdjust(a,0,10);
    	}
    }

    //BuildMinHeap(a, 10);
    MinHeapSort(a, 10);
    for (i = 0; i < 10; i++) {
        printf("%d ",a[i]);
    }

    return 0;
}

//建立最小堆  
void BuildMinHeap(int a[], int n)  
{  
	int i;
    for (i = n / 2 - 1; i >= 0; i--)  
        MinHeapAdjust(a, i, n);  
}

//在最小堆中加入新的数据nNum  
void MinHeapAddItem(int a[], int n, int nNum)  
{  
    a[n] = nNum;  
    MinHeapInsert(a, n);  
}

//  插入i结点  其父结点为(i - 1) / 2  
void MinHeapInsert(int a[], int i)  
{  
    int j, temp;  
      
    temp = a[i];  
    j = (i - 1) / 2;      //父结点  
    while (j >= 0 && i != 0)  
    {  
        if (a[j] <= temp)  
            break;  
          
        a[i] = a[j];     //把较大的子结点往下移动,替换它的子结点  
        i = j;  
        j = (i - 1) / 2;  
    }  
    a[i] = temp;  
}  

//  从i节点开始调整,n为节点总数 从0开始计算 i节点的子节点为 2*i+1, 2*i+2  
void MinHeapAdjust(int a[], int i, int n)  
{  
    int j, temp;  
  
    temp = a[i];  
    j = 2 * i + 1;  
    while (j < n)  
    {  
        if (j + 1 < n && a[j + 1] < a[j]) //在左右孩子中找最小的  
            j++;  
  
        if (a[j] >= temp)  
            break;  
  
        a[i] = a[j];     //把较小的子结点往上移动,替换它的父结点  
        i = j;  
        j = 2 * i + 1;  
    }  
    a[i] = temp;  
}

void MinHeapSort(int a[], int n)  
{  
	int i;
    for (i = n - 1; i >= 1; i--)  
    {  
        Swap(&a[i], &a[0]);  
        MinHeapAdjust(a, 0, i);  
    }  
}

//在最小堆中删除数  
void MinHeapDeleteNumber(int a[], int n)  
{  
    Swap(&a[0], &a[n - 1]);  
    MinHeapAdjust(a, 0, n - 1);  
}

//交换两个数
void Swap(int *a,int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}