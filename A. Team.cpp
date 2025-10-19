#include<iostream>

int main(){
    
    int n{}, r{};
    
    std::cin>>n;
    
    while(n--){
        int sum {};
        int arr[3];
        
        for(int i=0; i<3; i++){
            std::cin>>arr[i];
            sum += arr[i];
        }
        
        if(sum>=2){
            r++;
        }
        
    }
     std::cout<<r<<std::endl;
    
    return 0;
}