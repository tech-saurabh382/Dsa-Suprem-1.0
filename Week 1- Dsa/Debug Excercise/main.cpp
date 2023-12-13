// # Supreme-Batch-Debug-Exercise-C++ (Week-1)

// **NOTE: The code snippet given may have compile time, runtime or logical errors.**

// **How to attempt Debugging Exercise?**

// 1. Copy the code to your code editor (e.g. VS Code).
// 2. Add relevant header files like “#include <iostream>” etc.
// 3. Run the code.
// 4. You will notice the expected output is not printing at the console.
// 5. Apply your smart coder mind to Debug the code.
// 6. **Warning**: Only see the solution after you have tried enough.

#include <iostream>
using namespace std;

// 1. **The below code snippet has some errors. Let’s debug it and make it compile & run successfully.**
// void main() {
// 	int i=0;
// 	i=i+1;
// 	cout<<i:
// 	/*print i \*//i=i+1
// 	cout<<++i;
// }

// solution -
// void main() {
//     int i=0;
//     i=i+1;
//     cout<<i;
//     /*print i *///i=i+1
//     cout<<++i;
// }

// 2. Below code should print the sum of ‘i’ and ‘j’.
// void main() {
// 	short i=2300, j=4322;
// 	cout>>"i+j=">>-(i+j);
// }

// solution -
// void main() {
//     short i=2300, j=4322;
//     cout<<"i+j="<<(i+j);
// }

// 3. Find perimeter of a rectangle.
// void main() {
// 	float l, b;
// 	P = 2(l+b);
// 	printf("Perimeter=", P);
// }

// solution -
// void main() {
//     float l, b;
//     float P = 2*(l+b);
//     printf("Perimeter=%f", P);
// }

// 4. Print solid square pattern.
// void main() {
// 		int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n; ++i) {
//             cout<<"*\n";
//         }
//         cout<<endl;
//     }
// }

// solution -
// void main() {
// 		int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n; ++j) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// 5. Check given number is Prime or not.
// int main(){
// 	int n;
// 	cin >> n;
// 	bool isPrime = true;
//   for(int i=2;i<n;i++){
//       if(i%n == 0){
//           isPrime = false; break;
//       }
//   }
// 	if(isPrime){
// 		cout<<"Prime"<<endl;
// 	}
// 	else{
// 		cout<<"Not Prime"<<endl;
// 	}
//   return 0;
// }

// solution -
// int main()
// {
//     int n;
//     cin >> n;
//     bool isPrime = true;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     }
//     if (isPrime)
//     {
//         cout << "Prime" << endl;
//     }
//     else
//     {
//         cout << "Not Prime" << endl;
//     }
//     return 0;
// }

// 6. Print Numeric Hollow Inverted Half Pyramid (Click the hyper link to understand the output)
void main(){
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<=n;j++){
            if(j==i+1 || j == n || i == 0){
                cout<<j;
                cout<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}