#include<bits/stdc++.h>
using namespace std;
void PrintN(int n){
    if(n<0) return ;
    PrintN(n-1);
    cout<<n<<" ";
}
void PrintNRe(int n){
    if(n==1) return ;
    cout<<n<<" ";
    PrintNRe(n-1);   
}

double Mean(vector<int>&arr,int n){    
    if(n==1) return arr[0];
    return (Mean(arr, n-1) * (n-1) + arr[n-1]) / n;
}
int sum (int n){
    if(n==0) return 0;
    return n + sum(n-1); 
}

int decToBin(int d){
    if(d==0)
        return 0;
    return (d%2 + 10*decToBin(d/2));
}
int Misana(vector<int> arr,int n){
    if(n==0) return 0;
    return arr[n-1] + Misana(arr,n-1);
}

string reverse(string s){
    if(s.length()==0) return "";
    return s[s.length()-1] + reverse(s.substr(0,s.length()-1));
}
int recLen(string str)
{
    // Base case: If the string is empty
    if (str == "")
        return 0;
    return 1 + recLen(str.substr(1));
}

int sum_of_digit(int n) 
{ 
    if (n == 0) 
    return 0; 
    return (n % 10 + sum_of_digit(n / 10)); 
} 

// Using Tail Recursion 

int arrSum(vector<int>&arr,int n,int sum=0){
    if(n==0) return sum;
    return arrSum(arr,n-1,sum+arr[n-1]);
}

int findFibonacci(int n){ 
   // base case n = 0  n = 1
   if (n == 0) {
      return 0;
   } 
   else if (n == 1) {
      return 1;
   } 
   else {
      return findFibonacci(n - 2) + findFibonacci(n - 1);
   }
}
int Factorial(int n ){
    if(n==0) return 1;
    return n*Factorial(n-1);
}

int MinElement(vector<int>&arr,int n){
    if(n==1) return arr[0];
    return min(arr[n-1],MinElement(arr,n-1));
}
// Helper recursive function to check palindrome
bool isPalindromeRec(string& s, int left, int right) {
    
    // Base case
    if (left >= right) 
        return true;
    
    // If mismatch found
    if (s[left] != s[right]) 
        return false;

    // Recursive call with narrowed range
    return isPalindromeRec(s, left + 1, right - 1);
}

bool isPalindrome(string& s) {
    return isPalindromeRec(s, 0, s.size() - 1);
}

int setBits(int n) {

	// Base condition
	if (n == 0)
		return 0;

	// If Least significant bit is set
	if((n & 1) == 1)
		return 1 + setBits(n >> 1);

	// If Least significant bit is not set
	else
		return setBits(n >> 1);
}
void fibo(int n, int a, int b)
{
    if (n > 0) {

        // Function call
        fibo(n - 1, b, a + b);

        // Print the result
        cout << a << " ";
    }
}

int main() {
    string s = "abba";
    
    if (isPalindrome(s)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}