# include <bits/stdc++.h>
using namespace std;

 int add(int input1,int input2){
        return input1+input2;
}

 int sub(int input1,int input2){
        return input1-input2;
}

int main(){
    cout<<"Calculator  Application";

    int input1,input2;
    cout<<"Enter the input 1\n";
    cin>>input1;
    cout<<"Enter the input 2\n";
    cin>>input2;
    int choice;
    cout<<"1.Addition \n 2.Subraction \n 3. Multiplication 4.Division\n";
    cout<<"Enter the Option\n";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<add(input1,input2);
            break;
        case 2:
            cout<<sub(input1,input2);
            break;
        case 3:
            break;
        case 4:
           
            break; 
        default:
            cout<<"Wrong choice select the correct choice ";       
    }

   



}