//https://viettuts.vn/
package quickSort;
 
public class quickSort {
 
    public void swap(int arr[], int num1, int num2) {
        int temp = arr[num1];
        arr[num1] = arr[num2];
        arr[num2] = temp;
    }
 
    public int partition(int arr[], int left, int right, int pivot) {
        int leftPointer = left - 1;
        int rightPointer = right;
 
        while (true) {
 
            while (arr[++leftPointer] < pivot) {
  
            }
 
            while (rightPointer > 0 && arr[--rightPointer] > pivot) {
            }
 
            if (leftPointer >= rightPointer) {
                break;
            } else {
                System.out.println(" Phan tu duoc trao doi: " + arr[leftPointer] 
                        + ", " + arr[rightPointer]);
                swap(arr, leftPointer, rightPointer);
            }
 
        }
 
        System.out.println(" Phan tu chot duoc trao doi: " + arr[leftPointer] 
                + ", " + arr[right]);
        swap(arr, leftPointer, right);
        display(arr);
        return leftPointer;
    }
 
    public void quickSort(int arr[], int left, int right) {
        if (right - left <= 0) {
            return;
        } else {
            int pivot = arr[right];
            int partitionPoint = partition(arr, left, right, pivot);
            quickSort(arr, left, partitionPoint - 1);
            quickSort(arr, partitionPoint + 1, right);
        }
    }
 
    public void display(int arr[]) {
        int i;
        System.out.print("[");

        for (i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
 
        System.out.print("]\n");
    }
 
