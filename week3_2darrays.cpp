#include <iostream>
using namespace std;
int main()
{

    cout << "Give the Size of an Array :";
    int n;
    cin >> n;

    int arr[n][n];
    cout << "Take a input of arrays ";
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << "PRINT AN ARRAYS " << endl;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    // cout << "Row-wise Print of an arrays" << endl;

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n; col++)
    //     {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "Col-wise Print of an arrays" << endl;

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n; col++)
    //     {
    //         cout << arr[col][row] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << "ROWS-SUM PRINT" << endl;

    // for (int row = 0; row < n; row++)
    // {
    //     int sum = 0;
    //     for (int col = 0; col < n; col++)
    //     {
    //         sum = sum + arr[row][col];
    //     }

    //     cout << sum << endl;
    // }

    // cout << "COLS-SUM PRINT" << endl;
    // int sum = 0;
    // for (int row = 0; row < n; row++)
    // {

    //     for (int col = 0; col < n; col++)
    //     {
    //         sum = sum + arr[col][row];
    //     }

    //     cout << sum << endl;
    //     sum = 0;
    // }

    // cout << "Linear Search" << endl;
    // int key = 6;
    // for (int row = 0; row < n; row++)
    // {

    //     for (int col = 0; col < n; col++)
    //     {
    //         if (arr[row][col] == key)
    //         {
    //             cout << "True" << endl;
    //         }
    //     }
    // }
    // cout << "Maximum number in an array" << endl;
    // int maxi = INT16_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i][j] > maxi)
    //         {
    //             maxi = arr[i][j];
    //         }
    //     }
    // }
    // cout << maxi << endl;

    // cout << "Minimum number in an array" << endl;
    // int mani = INT16_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i][j] < mani)
    //         {
    //             mani = arr[i][j];
    //         }
    //     }
    // }
    // cout << mani << endl;

    cout << "Find the transpose of an array " << endl;
    int transpose[1000][1000];
    for(int i=0 ;i<n;i++){
        for(int j=0 ; j<n;j++){
            transpose[i][j]=arr[j][i];
        }
    }
       for(int i=0 ;i<n;i++){
        for(int j=0 ; j<n;j++){
            cout<< transpose[i][j]<<" ";
        }
        cout<<endl;
    }
   


}