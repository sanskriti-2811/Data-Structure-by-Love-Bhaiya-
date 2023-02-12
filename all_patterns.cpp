#include <iostream>
using namespace std;
int main()

{

    // Solid Rectangle
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Hollow Rectangel
 
    // for(int row=0 ; row<3 ; row++){
    //     if(row==0 ||row ==2){
    //         for( int col=0 ; col< 5;col++){
    //          cout<<"*";
    //         }
    //     }
    
         
    //         else{
    //             cout<<"*";
    //             for(int col=0 ; col<3;col++){
    //                 cout<<" ";
    //             }
    //             cout<<"*";
            
    //     }
    //     cout<<endl;
    // }

    //HALF PYRAMID 
    // int n ;
    // cin>>n ;
    // for(int i=0 ; i<n ; i++){
    //     for(int j=0 ; j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    //Inverted HALF PYRAMID 
    // int n ;
    // cin>>n ;
    // for(int i=0 ; i<n ; i++){
    //     for(int j=0 ; j<n-i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // NUMERIC HALF PYRAMID 
    // int n ; 
    // cin>>n;
    // for(int i=0; i<n ;i++){
    //     for(int j=0; j<i+1;j++){
    //         cout<<j+1;
    //     }
    //     cout<<endl;
    // }

    //INVERTED HALF PYRAMID 
    // int n ; 
    // cin>>n;
    // for(int i=0; i<n ;i++){
    //     for(int j=0; j<n-i;j++){
    //         cout<<j+1;
    //     }
    //     cout<<endl;
    // }

    // FULL PYRAMID 
    // int n ;
    // cin>>n ;
    // for(int i=0 ; i<n ; i++){
    //     for(int j=0 ; j<n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int st=0 ; st<i+1;st++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // Inverted Full pyramid 
    // int n ;
    // cin>>n ;
    // for(int i=0 ; i<n ; i++){
    //     for(int j=0 ; j<i ;j++){
    //         cout<<" ";
    //     }
    //     for(int st=0 ; st<n-i;st++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    
    //butterfii
    int n ;
    cin>>n ;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<i+1;j++){
            cout<<"* ";
        }
     
        for(int st=0 ; st<n-i;st++){
            cout<<" ";
        }
        for(int j=0 ; j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}