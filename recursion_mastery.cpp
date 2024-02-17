//fiboncci optimal
//#include<iostream>
//#include<cstring>
//using namespace std;
//
//
//int fibonacci(int n, int *arr){
//
//    if(n<=1){
//       return n;
//    }
//  
//   if(arr[n]!= 0){
//     return arr[n];
//   }
//    
//    arr[n]=fibonacci(n-1,arr)+fibonacci(n-2,arr);
//    return arr[n];
//}
//int main(){
//int a;
//cin>> a;
//int arr[a+1];
//memset(arr,0,sizeof(arr));
//cout<<fibonacci(a,arr);
//return 0;
//}
//--------------------------------------------------------------------------------------------

//Tower of hanoi
#include <iostream>
#include <string>
using namespace std;

void hanoi(int N, string beg, string aux, string end) {
    if (N == 0) {
        return;
    }
    hanoi(N - 1, beg, end, aux);
    cout << "Move disk " << N << " from " << beg << " to " << end << endl;
    hanoi(N - 1, aux, beg, end);
}
//mathforcpp
int main() {
    int numDisks;
    cout << "Enter the number of disks: ";
    cin >> numDisks;

    hanoi(numDisks, "T1", "T2", "T3");

    return 0;
}


#include <iostream>
#include <climits> // For INT_MIN

using namespace std;

// Function to find the maximum of three integers
int max(int a, int b, int c) {
    return max(max(a, b), c);
}

// Function to find the maximum subarray sum that crosses the midpoint
int maxCrossingSum(int arr[], int l, int m, int h) {
    int left_sum = INT_MIN;
    int sum = 0;
    for (int i = m; i >= l; i--) {
        sum += arr[i];
        left_sum = max(left_sum, sum);
    }

    int right_sum = INT_MIN;
    sum = 0;
    for (int i = m + 1; i <= h; i++) {
        sum += arr[i];
        right_sum = max(right_sum, sum);
    }

    return left_sum + right_sum;
}

// Function to find the maximum subarray sum using divide and conquer
int maxSubArraySum(int arr[], int l, int h) {
    if (l == h) {
        return arr[l]; // Base case: single element
    }

    int m = (l + h) / 2; // Midpoint

    // Recursively find maximum subarray sums for left and right halves
    int left_sum = maxSubArraySum(arr, l, m);
    int right_sum = maxSubArraySum(arr, m + 1, h);

    // Find maximum subarray sum that crosses the midpoint
    int crossing_sum = maxCrossingSum(arr, l, m, h);

    // Return the maximum of the three sums
    return max(left_sum, right_sum, crossing_sum);
}

int main() {
    int arr1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int arr2[] = {1, 2, 3, 4, -10, 6, 7, 8, 9};
    int arr3[] = {-5, -2, -6, -1, -2, -3, -7, -4};

    cout << "Scenario 1: " << maxSubArraySum(arr1, 0, 8) << endl;
    cout << "Scenario 2: " << maxSubArraySum(arr2, 0, 8) << endl;
    cout << "Scenario 3: " << maxSubArraySum(arr3, 0, 7) << endl;

    return 0;
}


