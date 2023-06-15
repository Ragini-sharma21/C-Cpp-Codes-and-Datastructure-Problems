#include <iostream>

using namespace std;

class heap {
public:
    int arr[100];
    int size;

    heap() {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val) {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parent = index / 2;
            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else {
                return;
            }
        }
    }

    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << endl;
        }
        cout << endl;
    }

    void deletefromroot() {
        if (size == 0) {
            cout << "nothing to delete" << endl;
            return;
        }

        arr[1] = arr[size];
        size--;

        int i = 1;
        while (i < size) {
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;
            if (leftindex < size && arr[i] < arr[leftindex]) {
                swap(arr[leftindex], arr[i]);
                i = leftindex;
            }
            else if (rightindex < size && arr[i] < arr[rightindex]) {
                swap(arr[rightindex], arr[i]);
                i = rightindex;
            }
            else {
                return;
            }
        }
    }

    void heapifyy(int arr[], int n, int i) {
        int largest = i;
        int left = 2 * i;
        int right = 2 * i + 1;
        if (left <= n && arr[largest] < arr[left]) {
            largest = left;
        }
        if (right <=n && arr[largest] < arr[right]) {
            largest = right;
        }
        if (largest != i) {
            swap(arr[largest], arr[i]);
            heapifyy(arr, n, largest);
        }
    }

    void heapsort(int arr[],int n){
        int size=n;
    while(size>1){
        swap(arr[size],arr[1]);
        size--;
        heapifyy(arr,size,1);
    }
    }
};

int main() {
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deletefromroot();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for (int i = n / 2; i > 0; i--) {
        h.heapifyy(arr, n, i);
    }

    cout << "Heap values are" << endl;
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << endl;
    }

    h.heapsort(arr, n);
    cout << "Sorted values are" << endl;
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
