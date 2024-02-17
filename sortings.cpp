//SELECTION SORT- FIND MIN OF SUBARRAY AND REPLACE IT WITH FIRST ELEMENT-WINDOW DECREASE FROM LEFT
//#include <iostream>
//using namespace std;
//
//int main(){
//int arr[5] = {5,7,3,0,67};
//
//for(int i = 0;i < 4; i++){
//
//    int minindex = i;
//
//    for(int j = i+1; j < 5; j++){
//
//        if(arr[minindex] > arr[j]){
//
//            minindex = j;
//
//        }
//    
//    }
//    int tmp = arr[i];
//    arr[i] = arr[minindex];
//    arr[minindex] = tmp;
//}
//
//for(int z = 0; z < 5; z++){
//    std::cout<<arr[z]<<endl;
//
//}
//return 0;
//
//}
//-----------------------------------------------------------------------------------------------------
//INSERTION SORT- IN A SUBARRAY PUT LAST ELEMENT IN THE RIGHT POSITION -WINDOW ENHANCES FROM RIGHT
//#include <iostream>
//using namespace std;
//
//int main(){
//
//    int arr[5] = {4,54,3,34,13};
//
//    for(int i = 1; i < 5; i++){
//        int key = arr[i];
//        int j = i - 1;
//        while(j > 0 && arr[j] > key){
//
//            arr[j + 1] = arr[j];
//            j = j - 1;
//        }
//        arr[j+1] = key;
//
//    }
//
//    for(auto it: arr){
//
//        std::cout<<it<<std::endl;
//
//    }
//
//return 0;
//
//}
//--------------------------------------------------------------------------------------------
//BUBBLE SORT-BRING LARGEST TO THE END OF EVERY SUBARRAY- WINDOW DECREASE 
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//int main()
//{
//    int arr[6] = {23,1,44,8,0,22};
//
//    for(int i = 0; i < 6; i++){
//
//        for(int j = 1; j < 6 - i; j++){
//
//            if(arr[j-1]>arr[j]){
//                int tmp = arr[j-1];
//                arr[j-1] = arr[j];
//                arr[j] = tmp;
//            }
//        }
//    }
//
//    for(auto it: arr){
//
//        std:: cout<<it<<std::endl;
//
//    }
//}
//----------------------------------------------------------------------------------------------
//MERGE SORT
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void merge(vector<int> &arr , int low , int mid , int high){
//
//    vector<int> temp;
//    int left = low;
//    int right = mid + 1;
//
//    while(left <= mid && right <= high){
//
//        if(arr[left] <= arr[right]){
//            temp.push_back(arr [left] );
//            left ++;
//        }
//        else{
//            temp.push_back(arr[right]);
//            right ++;
//        }
//    }
//    while(left <= mid){
//        temp.push_back(arr[left]);
//        left ++;
//    }
//    while(right <= high){
//        temp.push_back(arr[right]);
//        right ++;
//    }
//
//    for(int j = low; j <= high; j++){
//        arr[j] = temp[j - low];
//    }
// }
//
//void msort(vector<int> &arr, int low, int high){
//    if(low == high){
//        return;
//    }
//    int mid = (high + low) / 2;
//
//    msort(arr , low, mid);
//    msort(arr, mid + 1, high);
//    merge(arr, low, mid, high);
// }
//
//void mergesort(vector<int> &arr, int n){
//    msort(arr,0 ,n-1);
//}
//
//int main(){
//
//vector<int> bro = {3,65,7,4,9,65,21,45,7,0};
//mergesort(bro, 10);
//for(auto it:bro){
//    std::cout << it << std::endl;
//}
//
//return 0;
//
//}
//-----------------------------------------------------------------------------------------------------------
////RADIX SORT
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int countsort(vector <int> &v , int pos){
//int n = v.size();
//vector<int> freq (10, 0) ;
//
//for (int i = 0 ; i < n ; i++){
//    freq [(v[i]/pos) % 10]++ ;
//}
////cumulative freq
//for(int i = 1 ; i < 10 ;i ++ ){
//    freq[i]+=freq[i-1];
//}
//
////ans array
//vector<int> ans(n);
//for(int i = n-1 ; i > 0; i --){
//    ans[--freq[(v[i]/pos)%10]] = v[i] ;
//}
//
//for(int i =0; i<n; i++){
//    v[i] = ans[i] ;
//}
//}

//void radix(vector<int> &v){
//    int max_ele = INT8_MIN;
//
//    for (auto it : v){
//        if(it > max_ele){
//            max_ele = max (it, max_ele) ;
//        }
//    }
//
//    for(int pos = 1; max_ele / pos < 0; pos*=10){
//        countsort(v, pos) ;
//    }
//}
//
//int main(){
//    int n;
//    cin>> n;
//    vector<int> arr ;
//    for (int j = 0; j <n ;j++){
//        int inp;
//        cin>>inp;
//        arr[j] = inp;
//    }
//
//    radix(arr);
//
//    for (auto it: arr){
//        cout<< it << ' ';
//    }
//
//
//    return 0;
//}

//-------------------------------------------------------------------------------------------------------------------

//quick sort
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//void qsrt_conquerer(vector<int> &arr, int low, int high){
//    int i = low;
//    int j = high;
//    int pivot = low;
//    while(i<j){
//        while(arr[i] <= arr[pivot] && i <= high - 1){
//            i++;
//        }
//        while(arr[j] > arr[pivot] && j >= low + 1){
//            j--;
//        }
//        if(i<j){
//            swap(arr[i],arr[j]);
//        }
//
//    }
//    swap(arr[pivot],arr[j]);
//
//}
//void qsrt_divider(vector<int> &arr, int low, int high){
//    if(low<high){
//        int pvt_val = arr[low];
//        int pvt;
//        qsrt_conquerer(arr, low , high);
//        for(int i =0;i < high + 1; i++){
//            if(arr[i] == pvt_val){
//                pvt = i;
//            }
//        }
//        qsrt_divider(arr, low, pvt - 1);
//        qsrt_divider(arr, pvt + 1, high);
//    }
//
//}
//
//
//int main(){
//    vector<int> bro = {23,4,6,32,4,12,44,5,0,344};
//    qsrt_divider(bro , 0 , 9);
//    for(auto it: bro){
//        cout<< it << " ";
//    }
//
//    return 0;
//}
//---------------------------------------------------------------------------------------------
//bucket sort

//range of each bucket in a bucket sort = (max - min) / n { n is the number of buckets}
//normally if we use 10 buckets to sort elements in decimal form from 0 to 1 
//we multiply by 10 and do floor divison to simulate buckets of interval 1
//{in general case we do not necessarily multiply by n}


#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>> t;
    vector<double> og(t,-0.1);
    for(int g=0;g<t;g++){
        double z;
        cin>> z;
        og[g] = z;
    }

    vector<vector<double>> buck(10);


    for(int j=0; j <10; j++){
        for(int x=0;x<t;x++){
            if(floor(10*og[x]) == j){
                buck[j].push_back(og[x]);

            }

        }
    }
    for(int i = 0; i < 10;i++){
        if(buck[i].size() != 0){
        sort(buck[i].begin(),buck[i].end());
        }

    }

    vector<double> final;
    for(int i =0; i < 10; i++){
        if(buck[i].size() != 0){
            for(auto it: buck[i]){
                final.push_back(it);
            }
        }
    }
    for(auto it:final){
        cout<< it<<" ";
    }
    
}
//----------------------------------------------------------------------------------------------------------------------
//Count Sort
#include <iostream>
#include <vector>
using namespace std;

vector<int> countSort(vector<int>& inputArray){

	int N = inputArray.size();

	// Finding the maximum element of array inputArray[].
	int M = 0;

	for(int i = 0; i < N; i++){
		M = max(M, inputArray[i]);
    }

	// Initializing countArray[] with 0
	vector<int> countArray(M + 1, 0);

	// Mapping each element of inputArray[] as an index
	// of countArray[] array

	for(int i = 0; i < N; i++){
		countArray[inputArray[i]]++;
    }

	// Calculating prefix sum at every index
	// of array countArray[]
	for (int i = 1; i <= M; i++){
		countArray[i] += countArray[i - 1];
    }

	// Creating outputArray[] from countArray[] array
	vector<int> outputArray(N);

	for (int i = N - 1; i >= 0; i--){
		outputArray[countArray[inputArray[i]] - 1]= inputArray[i];

		countArray[inputArray[i]]--;
	}
	return outputArray;
}

int main(){

	vector<int> inputArray = { 4, 3, 12, 1, 5, 5, 3, 9 };
	vector<int> outputArray = countSort(inputArray);

	for(int i = 0; i < inputArray.size(); i++){
		cout << outputArray[i] << " ";
    }

}








