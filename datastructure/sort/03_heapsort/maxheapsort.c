#include <stdio.h>

void BuildHeap(int *a,int n);
void swap(int *a,int *b);
void HeapSort(int *a,int n);
void HeapAdjust(int *a,int i,int n);

int main(int argc,const char *argv[]){
	int i;
    int a[] = {3,25,9,30,2};
    HeapSort(a, 5);
    for (i = 0; i < 5; i++) {
        printf("%d ",a[i]);
    }

    return 0;
}

//建立堆
void BuildHeap(int *a,int n){
	int i;
    for (i = n - 1; i >= 0; i--) {
        HeapAdjust(a, i, n);
    }

}

//交换两个数
void swap(int *a,int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//堆排序
void HeapSort(int *a,int n){
	int i;

    BuildHeap(a, n);
    for ( i= n - 1; i >= 0; i--) {
        //交换堆顶和最后一个元素，即每次将剩余元素中的最大者放到后面；
        swap(&a[0], &a[i+1]);
        //重新调整堆为大顶堆；
        HeapAdjust(a, 0, i );
    }
}

//调整堆
void HeapAdjust(int *a,int i,int n){

    int lchild = 2 * i;//左孩子节点；
    int rchild = 2 * i + 1;//右孩子节点；
    int min = i;

    if (i <= n) {
        if (lchild <= n && a[lchild] < a[min]) {
            min = lchild;
        }

        if (rchild <= n && a[rchild] < a[min]) {
            min = rchild;
        }

        if (i != min) {
            swap(&a[i], &a[min]);
            //避免调整之后以max为父节点的子树不是堆；
            HeapAdjust(a, min, n);
        }
    }
}

