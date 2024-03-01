bool is_descending(int array[], int n){
    bool desc = true;
    int prevnum = 0;
    if(n>0){
        prevnum = array[0];
        for(int i=1; i<n; i++){
            if(prevnum<array[i]){
                desc = false;
                break;
            }
            prevnum = array[i];
        }
    }
    else{
        desc = false;
    }
    return desc;
}