//
// Created by korstefan14 on 1/18/18.
//

unsigned int fib(int n){
    unsigned int prevprev=0;
    unsigned int prev=1;
    unsigned int curr=0;
    int i;
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    for (i=1;i<n;i++){
        curr=prev+prevprev;
        prevprev=prev;
        prev=curr;
    }
    return curr;

}
