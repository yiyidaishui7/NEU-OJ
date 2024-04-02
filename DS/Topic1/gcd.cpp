//时间复杂
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 0, b = 0;
//     cin>>a>>b;
//     int c = min(a,b);

//     for (int i=c;i>0;i--){
//         if((a%i==0) && (b%i==0)){
//             cout<<i;
//             break;
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int gcd(int a,int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int a = 0, b = 0;
    cin>>a>>b;
    int g = gcd(a,b);
    cout<<g;
    return 0;
}

// #include <iostream>
// #include<algorithm>
// using namespace std;

// int main() {
//     int a = 0, b = 0;
//     cin>>a>>b;
//     cout<<__gcd(a,b);
//     return 0;
// }