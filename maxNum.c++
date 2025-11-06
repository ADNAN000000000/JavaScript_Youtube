#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 4, 8, 10};
    int n = sizeof(arr) / sizeof(int);
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    cout << "Even Counts are: " << evenCount << " and the Odd Counts are: " << oddCount << endl;

    return 0;
}

// finding of the greater number in the array

// int arr[]= {1,2,3,9,5,6};
// int n = 6;
// int maxVal = arr[0];
// for (int i = 1;i<n;i++){
//     if(arr[i] > maxVal){
//         maxVal = arr[i];
//     }

// }
// std::cout<<"Max Value is "<<maxVal;

// Reversing of the arrays

// int arr[] {1,3,7,9,0};
//     int n = sizeof(arr)/sizeof(int);
//     // cout<<n;
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<endl;
//     for(int i = 0; i<n/2;i++){
//         int temp = arr[i];
//         arr[i] = arr[n-1-i];
//         arr[n-1-i] = temp;
//     }
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<endl;

// searching of the target
// int target = 18;
//     int n = sizeof(arr)/sizeof(int);
//     bool found = false;

//     for(int i = 0; i<n; i++){
//         if(arr[i]==target){
//             found = true;
//             cout<<"Target found :)"<<endl;
//             break;
//         }

//     }
//     if(!found){cout<<"not_found :("<<endl;}