#include <iostream>
#include<string>
#include<vector>
using namespace std;

void invect(vector<string>& input){
    int x;
     string str;
    cout<<"Enter a task: ";
    getline(cin,str);
    input.push_back(str);
    cout<<"-- Updated Task List: --\n\n";
     for(int i=1;i<=input.size();i++){
        cout<<i<<"-"<<input[i-1]<<endl;}
    cout<<"Press 1 to add another task or press 0 to exit: ";
    cin>>x;
    cin.ignore();
    if(x!=0){
        invect(input);
}
}


void dex(vector<string>& del){
    int de,an,i=1;
    for(int i=1;i<=del.size();i++){
        cout<<i<<"-"<<del[i-1]<<endl;
    }
    
    cout<<"Enter the task to delete (number): ";
    cin>>de;
    del.erase(del.begin() +de-1);
     cout<<"-- Updated Task List: -->>\n\n";
    for(string print: del){
        cout<<i<<"-"<<print<<endl;
        i++;
    }
    cout<<"press 1 to delete another task or zero to exit: ";
    cin>>an;
    if(an!=0){
        dex(del);
    
}
}


void menu(){
    int x;
    vector<string> vis;
while(true){
        cout << "=== Main Menu ===\n";
        cout << "1. Add tasks\n";
        cout << "2. View tasks\n";
        cout << "3. Delete tasks\n";
        cout << "0. Exit\n";
        cout << "Choose an option: ";
        cin>>x;
        cin.ignore();
        if(x==1){
            invect(vis);
        }
        else if(x==2){
            int i=1;
            if(vis.empty()){
                cout<<"No task added yet...";
            }else{
                for(string print: vis){
                    cout<<i<<"-"<<print<<endl;
                    i++;
                }
            }
        }
        else if(x==3){
            dex(vis);
        }
        else if(x==0){
            cout<<"Exit successful...";
            break;
        }
        else{
            cout<<"Invalid choice...";
        }
}
}

int main(){
    menu();
    return 0;
}
