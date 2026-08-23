#include<iostream>
using namespace std;

// void print(int no)
// {
//     if(no == 0)
//     {
//         return;
//     }
//     else{
//         print(no-1);
//     }

//     cout<<"\n "<<no;
// }

// int main()
// {
//     print(10);


//     return 0;
// }

int sumofDigit(int n){
    //123

    if(n ==0){
        return 0;
    }
    
    return n%10 + sumofDigit(n/10); //3 + sumOfDigit(12) 
                                      //3 + 2 + sumOfDigit(1)
                                      //3 + 2 + 1 + sumOfDigit(0)
                                      //3 + 2 + 1     
}






int main(){

    int ans = sumofDigit(123);
    cout<<"\n ans = "<<ans<<endl;

}