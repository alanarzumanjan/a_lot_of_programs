#include <iostream>
#include <vector>
using namespace std;

void set_input(vector<int> &arr);
void print_arr(vector<int> &arr, int len);
void bubble_sort(vector<int> &arr, int len);
void smallest(vector<int> &arr, int len);
void biggest(vector<int> &arr, int len);
void unical(vector<int> &arr, int len);
int factorial(int num);
void factorials(vector<int> &arr, int len);
void sum(vector<int> &arr, int len);

int main(){
    vector<int> arr;
    set_input(arr);
    int len = arr.size();
    bubble_sort(arr, len);
    smallest(arr, len);
    biggest(arr, len);
    sum(arr, len);
    unical(arr,len);
    factorials(arr, len);
    
    return 0;
}

void set_input(vector<int> &arr){
    int num;
    cout << "Enter array with spaces: ";
    while (cin.peek() != '\n' && cin >> num) {
        arr.push_back(num);
    }
    cin.clear(); 
    cin.ignore(); 
}

void print_arr(vector<int> &arr, int len){
    for(int i = 0; i < len; i++){
        if(i == len - 1){
            cout << arr[i];
        } else{
            cout << arr[i] << ", ";
        }
    }
    cout << endl;
}

void bubble_sort(vector<int> &arr, int len){
    for(int i = 0; i < len; i++){
        for(int j = 0; j < len - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Sorted array: ";
    print_arr(arr, len);
}

void smallest(vector<int> &arr, int len){
    int smallest = arr[0];
    for(int i = 0; i < len; i++){
        if(smallest > arr[i]){
            smallest = arr[i];
        }
    }
    cout << "Smallest: " << smallest << endl;
}

void biggest(vector<int> &arr, int len){
    int biggest = arr[0];
    for(int i = 0; i < len; i++){
        if(biggest < arr[i]){
            biggest = arr[i];
        }
    }
    cout << "Biggest: " << biggest << endl;
}

void unical(vector<int> &arr, int len){
    vector<int> unicals;
    for(int i = 0; i < len; i++){
        for(int j = 0; j < unicals.size(); j++){
            if(unicals[j] != arr[i]){
                unicals.push_back(arr[i]);
            }
        }
    }
    print_arr(unicals, unicals.size());
}

void sum(vector<int> &arr, int len){
    int sum;
    for(int i = 0; i < len; i++){
        sum += arr[i];
    }
    cout << "Sum: " << sum;
}

int factorial(int num){
    int result = 1;
    for(int i = 1; i <= num; i++){
        result *= i;
    }
    return result;
}

void factorials(vector<int> &arr, int len){
    vector<int> factorials(len);
    for(int i = 0; i < len; i++){
        factorials[i] = factorial(arr[i]);
    }
    cout << "Factorials: ";
    print_arr(factorials, len);
}

