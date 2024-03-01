int sum_two_arrays(int array[], int secondarray[], int n){
    int total = 0;
    if(n>0){
        for(int i=0; i<n; i++){
            total+=array[i];
            total+=secondarray[i];
        }
    }
    return total;
}