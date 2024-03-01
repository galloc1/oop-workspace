bool is_ascending(int array[], int n){
    bool asc = true;
    int prevnum = 0;
    if(n>0){
        prevnum = array[0];
        for(int i=1; i<n; i++){
            if(prevnum>array[i]){
                asc = false;
                break;
            }
            prevnum = array[i];
        }
    }
    else{
        asc = false;
    }
    return asc;
}