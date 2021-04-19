#include<bits/stdc++.h>
using namespace std;
int main(){

    int pipes,jump,count=0;
    int height[100],dis;
    cin>>jump>>pipes;

    for(int i=0; i<pipes; i++){
        cin>>height[i];
    }
    for(int i=0; i<pipes-1; i++){
            if(height[i+1]>height[i])
                dis = height[i+1]-height[i];
            else dis = height[i]-height[i+1];
        if(dis <=jump) count++;
    }
    if(pipes-1 == count) cout<<"YOU WIN\n";
    else cout<<"GAME OVER\n";
	return 0;
}
