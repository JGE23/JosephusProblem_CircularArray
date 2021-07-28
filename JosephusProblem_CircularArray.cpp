#include <iostream>
using namespace std;
const int MAX = 5;

class circularArray {
    int ca[MAX] = {1,2,3,4,5};
        int *del;
        int front;
        int n;
        int x;

    void advanceN(int n){
        cout << "Enter size n for index:";
        cin >> n;
        front = ca[0];
        cout<<"the value for front is:"<<endl;
        cout<<front<<endl;
        
        if  (front < MAX-1 ) {
            front = (( front + 1 ) % n );
            cout<<"the new value for front is:"<<""<< front <<endl;
            
        };
    };
    
    void deleteThis(int x){
        int i=0;
        int *del = new int[5];
        
        if(front <= MAX-1){

            cout<<"this is the first index of del:"<<endl;
            cout<<del[0]<<endl;
        }
        else{
        }
    };
};
int main (){
    int n;
    int front;
    int ca[MAX];
    cout << "Enter size n for index:";
    cin >> n;
    cout << n << endl;
    
    front = ca[0];
    
    cout<<"the value for front is:"<<endl;
    cout<<front<<endl;
    
    if  (front < MAX-1 ) {
        front = (( front + 1 ) % n );
        cout<<"the new value for front is:"<<""<< front <<endl;
    }
}
