#include <iostream>
using namespace std;

// *****************************
// int power(int a, int b)
// {

//     int ans = 1;
//     for (int i = 1; i <= b; i++)
//     {

//         ans = ans * a;
//     }

//     return ans;
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     int answer = power(a, b);

//     cout << "Answer is: " << answer;
//     return 0;
// }

// ********************************
// int power()
// {
//     int a, b;
//     cin >> a >> b;

//     int ans = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }
//     return ans;
// }

// int main()
// {

//     cout << "Answer 1 is: " << power();

//     cout << "Answer 2 is: " << power();
// }

// ****************************
// bool isEven(int a){
//     if(a&1){
//         return 0;
//     }

//     return 1;
// }
// int main(){
//     int num;
//     cin>>num;

//    if(isEven(num)){
//     cout<< "Even number";
//    }

//    else{
//     cout<<"Odd number";
//    }
// }

// ****************************
// int factorial(int n){
//     int fact = 1;

//     for(int i = 1; i <= n; i++){
//         fact = fact * i;
//     }

//     return fact;
// }

// int nCr(int n, int r){

//     int num = factorial(n);

//     int denm =(factorial(r) * factorial(n - r));

//     int ans = (num / denm);

//     return ans;
// }

// int main(){

// cout<< "Here we find nCr"<<endl;

// int n, r;
// cout<<"Enter the value of n: ";
// cin>>n;

// cout<<"Enter the value of r: ";
// cin>>r;

// cout<< "The value of "<< n << "C"<< r << " is: "<< nCr(n , r);
// }

// ********************
// void printCounting(int n)
// {

//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << endl;
//     }
// }

// int main()
// {

//     int n;
//     cin >> n;

//     printCounting(n);

//     return 0;
// }

// ******************
// bool isPrime(int n)
// {

//     for (int i = 2; i < n; i++)
//     {

//         if (n % i == 0)
//         {
//             return 0; // Not prime
//         }
//     }
//     return 1; // prime = true
// }

// int main()
// {

//     int n;
//     cin >> n;

//     if (isPrime(n))
//     {
//         cout << "Prime number";
//     }
//     else
//     {
//         cout << "Not a prime number";
//     }

//     return 0;
// }

// *************************
// int arithmetic(int n)
// {
//     int AP = (3 * n + 7);

//     return AP;
// }

// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     int ans = arithmetic(n);
//     cout << "Your AP is: " << ans;
// }

// ****************************
// int value1(int a){
//     int count = 0;
//         while(a!=0){

//             //checking last bit
//             if(a&1){
//                 count++;
//             }
//             a = a>>1;
//         }
//         return count;
// }

// int value2(int b){
//     int count = 0;
//         while(b!=0){

//             //checking last bit
//             if(b&1){
//                 count++;
//             }
//             b = b>>1;
//         }
//         return count;
// }

// int main(){
//     int a;
//     cout<<"Enter the value of a: ";
//     cin>>a;

//     int b;
//     cout<<"Enter the value of b: ";
//     cin>>b;

//     cout<<"No of bits of a: "<<value1(a)<<endl;
//     cout<<"No of bits of b: "<<value2(b)<<endl;
//     cout<<"Total no of bits are: "<<value1(a) + value2(b);
// }

// ************************
// void update(int a){

//     a = a / 2;
// }

// int main(){
//     int a = 10;
//     update(a);
//     cout<< a ;
// }

// *********************
// int update(int a){
//     a -= 5;
//     return a;
// }

// int main(){
//     int a = 15;
//     update(a);
//     cout<<a;
// }

// ************************
// int update(int a){
//     int ans = a * a;
//     return a;
// }

// int main(){
//     int a = 14;
//     a = update(a);
//     cout<< a;
// }