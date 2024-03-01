int min_element(int array[], int n){
    int total = 0;
    if(n>0){
        total = array[0];
        for(int i = 0; i<n; i++){
            if(array[i]<total){
                total = array[i];
            }
        }       
    }
    return total;
}