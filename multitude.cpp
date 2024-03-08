#include <iostream>
#include <vector>
using namespace std;

void set_input(vector<int> &A, vector<int> &B);
void overall_numbers(vector<int> &A, vector<int> &B);
void all_numbers(vector<int> &A, vector<int> &B);
void substract(vector<int> &A, vector<int> &B);
void add(vector<int> &A, vector<int> &B);

int main(){
    int choice;
    vector<int> A;
    vector<int> B;
    cout << "Welcome to Multitude calculator!" << endl;
    set_input(A, B);
    overall_numbers(A,B);
    all_numbers(A,B);
    substract(A,B);
    add(A,B);
    
    return 0;
}

void set_input(vector<int> &A, vector<int> &B) {
    int num;
    cout << "Enter array A with spaces: ";
    while (cin.peek() != '\n' && cin >> num) {
        A.push_back(num);
    }
    cin.clear(); 
    cin.ignore(); 

    cout << "Enter array B with spaces: ";
    while (cin.peek() != '\n' && cin >> num) {
        B.push_back(num);
    }
    cin.clear();
    cin.ignore();
}

void overall_numbers(vector<int> &A, vector<int> &B){
    vector<int> Overall;
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < B.size(); j++){
            if (A[i] == B[j]){
                Overall.push_back(A[i]);
                break;
            }
        }
    }  

    cout << "Overalls: ";
    for(int i = 0; i < Overall.size(); i++){
        cout << Overall[i] << " ";
    }
    cout << endl;
}

void all_numbers(vector<int> &A, vector<int> &B){
    vector<int> all;
    for(int j = 0; j < A.size(); j++){
        bool flag = true;
        for(int i = 0; i < all.size(); i++){
            if(A[j] == all[i]){
                flag = false;
            }
        }
        if(flag){
            all.push_back(A[j]);
        }
    }
    
    for(int i = 0; i < B.size(); i++){
        bool flag = true;
        for(int j = 0; j < all.size(); j++){
            if(B[i] == all[j]){
                flag = false;
                break;
            }
        }
        if(flag){
            all.push_back(B[i]);
        }
    }
    
    for(int i = 0; i < all.size(); i++){
        for(int j = 0; j < all.size() - 1; j++){
            if(all[j] > all[j+1]){
                int temp = all[j];
                all[j] = all[j+1];
                all[j+1] = temp;
            }
        }
    }

    cout << "All: ";
    for(int i = 0; i < all.size(); i++){
        if(i == all.size() - 1){
            cout << all[i] << endl;
        } else{
            cout << all[i] << ", ";
        }
        
    }
}

void substract(vector<int> &A, vector<int> &B){
    // A - B
    vector<int> substract1;
    for(int i = 0; i < A.size(); i++){
        bool flag = true;
        for(int j = 0; j < B.size(); j++){
            if(A[i] == B[j]){
                flag = false;
                break;
            }
        }
        if(flag){
            substract1.push_back(A[i]);
        }
    }

    cout << "A - B: ";
    for(int i = 0; i < substract1.size(); i++){
        if(i == substract1.size() - 1){
            cout << substract1[i] << endl;
        } else{
            cout << substract1[i] << ", ";
        }
    }
    // B - A
    vector<int> substract2;
    for(int i = 0; i < B.size(); i++){
        bool flag = true;
        for(int j = 0; j < A.size(); j++){
            if(B[i] == A[j]){
                flag = false;
                break;
            }
        }
        if(flag){
            substract2.push_back(B[i]);
        }
    }

    cout << "B - A: ";
    for(int i = 0; i < substract2.size(); i++){
        if(i == substract2.size() - 1){
            cout << substract2[i] << endl;
        } else{
            cout << substract2[i] << ", ";
        }
    }
}

void add(vector<int> &A, vector<int> &B){
    vector<int> add;
    for(int i = 0; i < A.size(); i++){
        add.push_back(A[i]);
    }

    for(int i = 0; i < B.size(); i++){
        add.push_back(B[i]);
    }

    for(int i = 0; i < add.size(); i++){
        for(int j = 0; j < add.size() - 1; j++){
            if(add[j] > add[j+1]){
                int temp = add[j];
                add[j] = add[j+1];
                add[j+1] = temp;
            }
        }
    }
    
    cout << "A + B: ";
    for(int i = 0; i < add.size(); i++){
        if(i == add.size() - 1){
            cout << add[i] << endl;
        } else{
            cout << add[i] << ", ";
        }
    }
}