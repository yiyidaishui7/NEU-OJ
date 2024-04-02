#include<iostream>
#include<vector>
using namespace std;
int main(){
    int q = 0;
    cin>>q;
    vector<int> arr;
    for(int i=0;i<q;i++){
        int flag;
        cin>>flag;
        // cout<<"d"<<endl;
        if(flag!=2)
        {
            // cout<<"f"<<endl;
            int temp=0;
            cin>>temp;
            if(flag==0)
            {
                arr.push_back(temp);
                // cout<<"a"<<endl;
            }
                
            else if(flag==1)
            {
                cout<<arr[temp]<<endl;
                // cout<<"b"<<endl;
            }
                
        }
        else if(flag==2)
        {
            arr.pop_back();
            // cout<<"c"<<endl;
        }
            
    }
    return 0;
}